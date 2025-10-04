// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "ParalogueEditorFactory.generated.h"

/**
 * 
 */
UCLASS()
class PARALOGUEEDITOR_API UParalogueEditorFactory : public UFactory
{
	GENERATED_BODY()
public:
	UParalogueEditorFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};
