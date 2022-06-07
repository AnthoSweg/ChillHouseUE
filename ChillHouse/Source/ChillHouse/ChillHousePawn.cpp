// Fill out your copyright notice in the Description page of Project Settings.


#include "ChillHousePawn.h"
#include "ChillHouseController.h"
#include "Furniture.h"
#include "Plant.h"
#include "Input/Events.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

// Sets default values
AChillHousePawn::AChillHousePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
	Pivot->SetupAttachment(RootComponent);
}

// Called to bind functionality to input
void AChillHousePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Zoom"), this, &AChillHousePawn::Zoom);

	PlayerInputComponent->BindAction(TEXT("CTRL_Modifier"), EInputEvent::IE_Pressed, this, &AChillHousePawn::CTRLPressed);
	PlayerInputComponent->BindAction(TEXT("CTRL_Modifier"), EInputEvent::IE_Released, this, &AChillHousePawn::CTRLUnpressed);
	PlayerInputComponent->BindAction(TEXT("Principal_Modifier"), EInputEvent::IE_Pressed, this, &AChillHousePawn::LeftClickPressed);
	PlayerInputComponent->BindAction(TEXT("Principal_Modifier"), EInputEvent::IE_Released, this, &AChillHousePawn::LeftClickUnpressed);
	PlayerInputComponent->BindAction(TEXT("Secondary_Modifier"), EInputEvent::IE_Pressed, this, &AChillHousePawn::RightClickPressed);
	PlayerInputComponent->BindAction(TEXT("Secondary_Modifier"), EInputEvent::IE_Released, this, &AChillHousePawn::RightClickUnpressed);
}

// Called when the game starts or when spawned
void AChillHousePawn::BeginPlay()
{
	Super::BeginPlay();

	Controller = Cast<AChillHouseController>(GetController());
	CameraComponent = FindComponentByClass<UCameraComponent>();
	CurrentZoom = CameraComponent->GetRelativeLocation().X;
}

// Called every frame
void AChillHousePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DeltaX, DeltaY;
	Controller->GetInputMouseDelta(DeltaX, DeltaY);

	if (bRightClickIsPressed && SelectedFurniture == nullptr)
	{
		RotateCamera(DeltaX, DeltaTime);
	}
	else if (bCTRLIsPressed && SelectedFurniture == nullptr)
	{
		PanCamera(DeltaX, DeltaY, DeltaTime);
	}
	else if (bRightClickIsPressed && SelectedFurniture != nullptr)
	{
		RotateFurniture(DeltaX, DeltaTime);
	}
	else if (bLeftClickIsPressed)
	{
		MoveFurniture();
	}
}

void AChillHousePawn::Zoom(float Delta)
{
	if (CameraComponent != nullptr)
	{
		FVector NewZoom;
		CurrentZoom += Delta * CameraZoomSpeed * GetWorld()->DeltaTimeSeconds;
		//Clamp Value
		if (CurrentZoom > CameraZoomMinMax.X) CurrentZoom = CameraZoomMinMax.X;
		if (CurrentZoom < CameraZoomMinMax.Y) CurrentZoom = CameraZoomMinMax.Y;
		NewZoom.X = CurrentZoom;
		CameraComponent->SetRelativeLocation(NewZoom, false);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No CameraComponent set"));
	}
}

void AChillHousePawn::RotateCamera(float Delta, float DeltaTime)
{
	FRotator NewRotation;
	NewRotation.Yaw += Delta * DeltaTime * CameraRotationRate;
	Pivot->AddLocalRotation(NewRotation, false);
}

void AChillHousePawn::PanCamera(float DeltaX, float DeltaY, float DeltaTime)
{
	FVector NewLocation;
	//Stronger panning when camera is close
	float PanMultiplier = (CameraZoomMinMax.Y - CameraZoomMinMax.X) / CurrentZoom;
	TRange<float> InputRange = TRange<float>(((CameraZoomMinMax.Y - CameraZoomMinMax.X) / CameraZoomMinMax.X), ((CameraZoomMinMax.Y - CameraZoomMinMax.X) / CameraZoomMinMax.Y));
	TRange<float> OutputRange = TRange<float>(CameraPanSpeedZoomMultiplier, 1.f);
	PanMultiplier = FMath::GetMappedRangeValueClamped(InputRange, OutputRange, PanMultiplier);
	NewLocation.X -= DeltaY * DeltaTime * CameraPanSpeed * PanMultiplier;
	NewLocation.Y -= DeltaX * DeltaTime * CameraPanSpeed * PanMultiplier;
	Pivot->AddLocalOffset(NewLocation, false);
}

void AChillHousePawn::RotateFurniture(float Delta, float DeltaTime)
{
	if (SelectedFurniture != nullptr)
	{
		Controller->SaveMousePosition();

		//Walls only furniture have their rotation set based on wall normal
		if (SelectedFurniture->PlacementType == PlacementTypeEnum::OnWallsOnly)
			return;

		FRotator NewRotation;
		NewRotation.Yaw -= Delta * DeltaTime * CameraRotationRate * 2;
		SelectedFurniture->AddActorLocalRotation(NewRotation, false);
	}
}

void AChillHousePawn::MoveFurniture()
{
	if (SelectedFurniture != nullptr)
	{
		FHitResult HitResult;
		if (Controller->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
		{
			//Based on the desired surface, check if we aim at it, if not > return
			switch (SelectedFurniture->PlacementType)
			{
			case PlacementTypeEnum::OnFloorOnly:

				if (!HitResult.ImpactNormal.Equals(FVector(0, -0, 1)))
					return;

				break;

			case PlacementTypeEnum::OnWallsOnly:

				if (HitResult.ImpactNormal.Equals(FVector(0, -0, 1)))
					return;

				//Get the offset needed to place it against walls
				GetFurnitureOffset(HitResult);

				//Align furnitre X axis to the impact normal
				if(SelectedFurniture->bAlignWithWall)
				SelectedFurniture->SetActorRotation(GetRotationFromXVector(HitResult.ImpactNormal), ETeleportType::None);


				break;

			case PlacementTypeEnum::NoLimit:

				//Get the offset needed to place it against walls
				GetFurnitureOffset(HitResult);

				//Align furnitre X axis to the impact normal
				if (SelectedFurniture->bAlignWithWall)
					SelectedFurniture->SetActorRotation(GetRotationFromXVector(HitResult.ImpactNormal), ETeleportType::None);

				break;

			default:
				break;
			}

			SelectedFurniture->SetActorLocation(HitResult.Location + FurnitureLocationOffset);
		}
	}
}

bool AChillHousePawn::GetFurnitureAtMouseLocation()
{
	if (Controller != nullptr)
	{
		FHitResult HitResult;
		if (Controller->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
		{
			AFurniture* HitFurniture = Cast<AFurniture>(HitResult.GetActor());
			if (HitFurniture != nullptr)
			{
				if (HitFurniture->CanBeMoved())
				{
					SelectedFurniture = HitFurniture;
					//Change it's collision type so the raycast for position is not stop by our selected furniture
					SelectedFurniture->Mesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
					//Also change pot mesh collision if it's a plant
					APlant* Plant = Cast<APlant>(SelectedFurniture);
					if(Plant != nullptr)
						Plant->PotMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
					//SelectedFurniture->SavePosAndRot();
					SelectedFurniture->UnlinkFurniture();

					//Get values to offset the cursor & ofset it
					FVector2D FurnitureLocationInScreenSpace;
					FVector2D MouseLocation;
					UGameplayStatics::ProjectWorldToScreen(Controller, SelectedFurniture->GetActorLocation()/* - FurnitureLocationOffset*/, FurnitureLocationInScreenSpace);
					Controller->SetMouseLocation(FurnitureLocationInScreenSpace.X, FurnitureLocationInScreenSpace.Y);

					return true;
				}
			}
		}
		return false;
	}
	return false;
}

void AChillHousePawn::DeselectFurniture()
{
	if (SelectedFurniture != nullptr)
	{
		//Check if we are putting the selected furniture on another one
		FHitResult HitResult;
		if (Controller->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
		{
			AFurniture* HitFurniture = Cast<AFurniture>(HitResult.GetActor());
			if (HitFurniture != nullptr)
				SelectedFurniture->LinkToAnotherFurniture(HitFurniture);
		}

		SelectedFurniture->Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		//Also change pot mesh collision if it's a plant
		APlant* Plant = Cast<APlant>(SelectedFurniture);
		if (Plant != nullptr)
			Plant->PotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		//if (!SelectedFurniture->LocationIsValid())
		//	SelectedFurniture->ResetPosAndRot();

		SelectedFurniture = nullptr;

		//Reset mouse pos
		FVector2D MouseLocation;
		Controller->GetMousePosition(MouseLocation.X, MouseLocation.Y);
		Controller->SetMouseLocation(-CursorLocationOffset.X + MouseLocation.X, -CursorLocationOffset.Y + MouseLocation.Y);
		CursorLocationOffset.Set(0, 0);
	}
}

void AChillHousePawn::GetFurnitureOffset(FHitResult HitResult)
{
	FVector3d Upward = FVector3d(0, -0, 1);
	if (!HitResult.Normal.Equals(Upward, .5f))
	{
		FVector Min;
		FVector Max;
		SelectedFurniture->Mesh->GetLocalBounds(Min, Max);

		FurnitureLocationOffset = HitResult.Normal * ((Max.Y - Min.Y) * .5f);

		//double NormalX = UKismetMathLibrary::Abs(HitResult.Normal.X);
		//double NormalY = UKismetMathLibrary::Abs(HitResult.Normal.Y);
		//UE_LOG(LogTemp, Warning, TEXT("X : %f, Y : %f"), NormalX, NormalY);
		////TODO REWORK THIS
		//if (NormalX > NormalY)
		//{
		//	FurnitureLocationOffset = HitResult.Normal * ((Max.Y - Min.Y) * .5f);
		//}
		//else if (NormalX < NormalY)
		//{
		//	FurnitureLocationOffset = HitResult.Normal * ((Max.X - Min.X) * .5f);
		//}
	}
	else
	{
		FurnitureLocationOffset.Set(0, 0, 0);
	}
}

void AChillHousePawn::AccessPlantMenu()
{
	if (Controller != nullptr)
	{
		FHitResult HitResult;
		if (Controller->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
		{
			APlant* HitPlant = Cast<APlant>(HitResult.GetActor());
			if (HitPlant != nullptr)
			{
				Controller->OpenPlantMenu(HitPlant);
				ZoomOnPlant(HitPlant);
			}
		}
	}
}

void AChillHousePawn::ZoomOnPlant(APlant* Plant)
{
	CameraZoomBeforeZooming = CurrentZoom;
	LocationBeforeZooming = Pivot->GetComponentLocation();

	CurrentZoom = CameraZoomMinMax.X;
	Pivot->SetWorldLocation(Plant->GetActorLocation());
}

void AChillHousePawn::Unzoom()
{
	CurrentZoom = CameraZoomBeforeZooming;
	Pivot->SetWorldLocation(LocationBeforeZooming);
}

void AChillHousePawn::CTRLPressed()
{
	bCTRLIsPressed = true;
}
void AChillHousePawn::CTRLUnpressed()
{
	bCTRLIsPressed = false;
}
void AChillHousePawn::LeftClickPressed()
{
	bLeftClickIsPressed = true;
	GetFurnitureAtMouseLocation();
}
void AChillHousePawn::LeftClickUnpressed()
{
	bLeftClickIsPressed = false;
	DeselectFurniture();
}
void AChillHousePawn::RightClickPressed()
{
	bRightClickIsPressed = true;
	RightClickPressedTime = GetWorld()->GetTimeSeconds();
}
void AChillHousePawn::RightClickUnpressed()
{
	bRightClickIsPressed = false;

	float UnpressedTime = GetWorld()->GetTimeSeconds();
	if (UnpressedTime - RightClickPressedTime < .3f)
	{
		AccessPlantMenu();
	}
	Controller->ResetMousePosition();
}

bool AChillHousePawn::FollowCursor()
{
	return !(bRightClickIsPressed && SelectedFurniture != nullptr);
}

//The method is defined in blueprint
FRotator AChillHousePawn::GetRotationFromXVector_Implementation(FVector HitNormal)
{
	return FRotator();
}

