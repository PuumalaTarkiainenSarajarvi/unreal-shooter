// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerDataStruct.generated.h"




USTRUCT(BlueprintType)
struct FPlayerData {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Values")
		FString name;

	UPROPERTY(BlueprintReadWrite, Category = "Values")
		int32 score;

	FORCEINLINE bool operator<(const FPlayerData& Other) const
	{
		return score < Other.score;
	}
};
