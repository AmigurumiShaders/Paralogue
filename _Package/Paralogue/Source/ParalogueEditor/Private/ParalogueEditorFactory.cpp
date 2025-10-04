// Fill out your copyright notice in the Description page of Project Settings.


#include "ParalogueEditorFactory.h"
#include "ParalogueEncounter.h"

UParalogueEditorFactory::UParalogueEditorFactory()
{
	SupportedClass = UParalogueEncounter::StaticClass();
	bCreateNew = true;
}

UObject* UParalogueEditorFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UParalogueEncounter>(InParent, Class, Name, Flags, Context);
}
