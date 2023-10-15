// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetProjectVersion.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSVS_API UGetProjectVersion : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetAppVersion"), Category = "Game Config")
		static FString GetAppVersion();

};
