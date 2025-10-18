// Fill out your copyright notice in the Description page of Project Settings.


#include "PlogEdEditorFactory.h"
#include "ParalogueEncounter.h"

UPlogEdEditorFactory::UPlogEdEditorFactory()
{
	SupportedClass = UParalogueEncounter::StaticClass();
	bCreateNew = true;
}

UObject* UPlogEdEditorFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UParalogueEncounter>(InParent, Class, Name, Flags, Context);
}
