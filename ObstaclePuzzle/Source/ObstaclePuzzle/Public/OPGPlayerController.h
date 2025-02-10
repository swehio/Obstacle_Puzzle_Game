// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OPGPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class OBSTACLEPUZZLE_API AOPGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AOPGPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveXYAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveUDAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* RollAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HUD")
	TSubclassOf<UUserWidget> HUDWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
	UUserWidget* HUDWidgetInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "startMenu")
	TSubclassOf<UUserWidget> StartMenuWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "startMenu")
	UUserWidget* StartMenuWidgetInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RestartMenu")
	TSubclassOf<UUserWidget> RestartMenuWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RestartMenu")
	UUserWidget* RestartMenuWidgetInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SelectMapMenu")
	TSubclassOf<UUserWidget> SelectMapMenuWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SelectMapMenu")
	UUserWidget* SelectMapMenuWidgetInstance;

	UFUNCTION(BlueprintPure, Category = "HUD")
	UUserWidget* GetHUDWidget() const;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void ShowGameHUD();
	UFUNCTION(BlueprintCallable, Category = "RestartMenu")
	void ShowStartMenu();
	UFUNCTION(BlueprintCallable, Category = "SelectMapMenu")
	void ShowSelectMapMenu();
	UFUNCTION(BlueprintCallable, Category = "RestartMenu")
	void ShowRestartMenu();
	UFUNCTION(BlueprintCallable, Category = "HUD")
	void InitializeWidgetInstance();

protected:
	virtual void BeginPlay() override;
	

};
