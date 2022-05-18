// Fill out your copyright notice in the Description page of Project Settings.


#include "ChillHousePawn.h"
#include "ChillHouseController.h"
#include "Furniture.h"
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
	//PlayerInputComponent->BindAxis(TEXT("Rotation"), this, &AChillHousePawn::GetMouseXDelta);
	//PlayerInputComponent->BindVectorAxis(TEXT("MousePan"), this, &AChillHousePawn::GetMousePan);
	//PlayerInputComponent->BindAxis(TEXT("Rotation"), this, &APawn::AddControllerYawInput);

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
}

// Called every frame
void AChillHousePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DeltaX, DeltaY;
	Controller->GetInputMouseDelta(DeltaX, DeltaY);
	//UE_LOG(LogTemp, Warning, TEXT("Delta : %f"), Delta);

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

//void AChillHousePawn::GetMouseXDelta(float Delta)
//{
//}
//
//void AChillHousePawn::GetMousePan(float DeltaX, float DeltaY)
//{
//	if (bCTRLIsPressed && SelectedFurniture == nullptr)
//	{
//		//PanCamera(Delta);
//	}
//}

void AChillHousePawn::Zoom(float Delta)
{
	if (CameraComponent != nullptr)
	{
		FVector NewZoom = CameraComponent->GetRelativeLocation();
		NewZoom.X += Delta * CameraZoomSpeed * GetWorld()->DeltaTimeSeconds;
		//Clamp Value
		if (NewZoom.X > CameraZoomMinMax.X) NewZoom.X = CameraZoomMinMax.X;
		if (NewZoom.X < CameraZoomMinMax.Y) NewZoom.X = CameraZoomMinMax.Y;
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
	NewLocation.X += DeltaY * DeltaTime * CameraPanSpeed;
	NewLocation.Y += DeltaX * DeltaTime * CameraPanSpeed;
	Pivot->AddLocalOffset(NewLocation, false);
}

void AChillHousePawn::RotateFurniture(float Delta, float DeltaTime)
{
	if (SelectedFurniture != nullptr)
	{
		Controller->SaveMousePosition();

		//UE_LOG(LogTemp, Warning, TEXT("Rotate furniture %f"), Delta);
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
			//Get the offset needed to place it against walls
			GetFurnitureOffset(HitResult);

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
				SelectedFurniture = HitFurniture;
				//Change it's collision type so the raycast for position is not stop by our selected furniture
				SelectedFurniture->Mesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
				SelectedFurniture->SavePosAndRot();

				//Get values to offset the cursor
				FVector2D FurnitureLocationInScreenSpace;
				FVector2D MouseLocation;
				UGameplayStatics::ProjectWorldToScreen(Controller, SelectedFurniture->GetActorLocation()/* - FurnitureLocationOffset*/, FurnitureLocationInScreenSpace);
				Controller->SetMouseLocation(FurnitureLocationInScreenSpace.X, FurnitureLocationInScreenSpace.Y);

				return true;
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
		SelectedFurniture->Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		if (!SelectedFurniture->LocationIsValid())
			SelectedFurniture->ResetPosAndRot();

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
	FVector3d Upward;
	Upward.Set(0, -0, 1);
	if (!HitResult.Normal.Equals(Upward, .5f))
	{
		FVector Min;
		FVector Max;
		SelectedFurniture->Mesh->GetLocalBounds(Min, Max);

		if (UKismetMathLibrary::Abs(HitResult.Normal.X) > UKismetMathLibrary::Abs(HitResult.Normal.Y))
		{
			FurnitureLocationOffset = HitResult.Normal * ((Max.X - Min.X) * .5f);
		}
		else if (UKismetMathLibrary::Abs(HitResult.Normal.X) < UKismetMathLibrary::Abs(HitResult.Normal.Y))
		{
			FurnitureLocationOffset = HitResult.Normal * ((Max.Y - Min.Y) * .5f);
		}
	}
	else
	{
		FurnitureLocationOffset.Set(0, 0, 0);
	}
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
}

void AChillHousePawn::RightClickUnpressed()
{
	bRightClickIsPressed = false;

	Controller->ResetMousePosition();
}

bool AChillHousePawn::FollowCursor()
{
	return !(bRightClickIsPressed && SelectedFurniture != nullptr);
}
