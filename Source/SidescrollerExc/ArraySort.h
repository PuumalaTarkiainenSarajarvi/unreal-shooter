// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerDataStruct.h"
#include "ArraySort.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLEREXC_API UArraySort : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Sorting Functions")            // Expose node to blueprints using 'BlueprintCallable', 'Category' gives your function a "searchable" header category in BPs
		static void  Integer_Sort(UPARAM(ref) TArray <int32>& Array_To_Sort, bool Descending, TArray <int32>& Sorted_Array);   // 'static' so node is accessible anywhere
																																// 'UPARAM' makes argument an exposed input pin
	UFUNCTION(BlueprintCallable, Category = "Sorting Functions")                                                                //  'UPARAM(ref)' passes argument by reference
		static void  Float_Sort(UPARAM(ref) TArray <float>& Array_To_Sort, bool Descending, TArray <float>& Sorted_Array);

	UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
		static void  String_Sort(UPARAM(ref) TArray <FString>& Array_To_Sort, bool Descending, TArray <FString>& Sorted_Array);

	UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
		static void  PlayerData_Sort(UPARAM(ref) TArray <FPlayerData>& Array_To_Sort, bool Descending, TArray <FPlayerData>& Sorted_Array);
};