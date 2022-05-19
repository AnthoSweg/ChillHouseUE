// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ChillHousePawn.generated.h"

class AFurniture;

UCLASS()
class CHILLHOUSE_API AChillHousePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AChillHousePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly)
		FVector2D CursorLocationOffset;

private:
	//void GetMouseXDelta(float Delta);
	//void GetMousePan();
	void Zoom(float Delta);
	void RotateCamera(float Delta, float DeltaTime);
	void PanCamera(float DeltaX, float DeltaY, float DeltaTime);
	void RotateFurniture(float Delta, float DeltaTime);
	void MoveFurniture();
	bool GetFurnitureAtMouseLocation();
	void DeselectFurniture();
	void GetFurnitureOffset(FHitResult HitResult);

	void CTRLPressed();
	void CTRLUnpressed();
	void LeftClickUnpressed();
	void LeftClickPressed();
	void RightClickPressed();
	void RightClickUnpressed();


	class AChillHouseController* Controller;
	class USceneComponent* Pivot;
	class UCameraComponent* CameraComponent;

	bool bCTRLIsPressed = false;
	bool bLeftClickIsPressed = false;
	bool bRightClickIsPressed = false;

	FVector FurnitureLocationOffset;
	float CurrentZoom;

	UPROPERTY(EditAnywhere)
		float CameraRotationRate = 200.f;
	UPROPERTY(EditAnywhere)
		float CameraPanSpeed = 1000.f;
	UPROPERTY(EditAnywhere)
		float CameraPanSpeedZoomMultiplier = 2.f;
	UPROPERTY(EditAnywhere)
		float CameraZoomSpeed = 5000.f;
	UPROPERTY(EditAnywhere)
		FVector2D CameraZoomMinMax = (-1000.f, -4000.f);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool FollowCursor();

	class AFurniture* SelectedFurniture;
};
