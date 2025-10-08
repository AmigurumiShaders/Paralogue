// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SLeafWidget.h"

//use delegates to keep widget decoupled from the asset itself
DECLARE_DELEGATE_OneParam(FOnDescriptionChanged, FText /*NewDescription*/)
//DECLARE_DELEGATE_OneParam(FOnMeanChanged, float /*NewMean*/)
//DECLARE_DELEGATE_OneParam(FOnStandardDeviationChanged, float /*NewStandardDeviation*/)
/**
 * 
 */
class PARALOGUEEDITOR_API SPlogEdEncounterWidget : public SLeafWidget
{
public:
	SLATE_BEGIN_ARGS(SPlogEdEncounterWidget) //slate declarative macros
		// these (appear to) be what defines InArgs in the Construct function below
		: _Description(FText::FromString(TEXT("some text default"))) //was getting errors about not being able to access private ftext member, needed to make sure this was being properly defined as an ftext apparently
		{}
		SLATE_ATTRIBUTE(FText, Description)
		SLATE_EVENT(FOnDescriptionChanged, OnDescriptionChanged)
	SLATE_END_ARGS()
		//SLATE_ATTRIBUTE(float, Mean)
		//SLATE_ATTRIBUTE(float, StandardDeviation)
		//SLATE_EVENT(FOnMeanChanged, OnMeanChanged)
		//SLATE_EVENT(FOnStandardDeviationChanged, OnStandardDeviationChanged)

	void Construct(const FArguments& InArgs); //called by Slate when widget is instantiated in declarative syntatx

	int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	FVector2D ComputeDesiredSize(float) const override;

	FReply OnMouseButtonDown(const FGeometry& AllottedGeometry, const FPointerEvent& MouseEvent) override;
	FReply OnMouseButtonUp(const FGeometry& AllottedGeometry, const FPointerEvent& MouseEvent) override;
	FReply OnMouseMove(const FGeometry& AllottedGeometry, const FPointerEvent& MouseEvent) override;
private:
	//TAttribute<UParalogueEncounter> Encounter; //literally not how this works im pretty sure, referencing attributes not the asset itself
	TAttribute<FText> Description = FText::FromString(TEXT("second default test"));
	FOnDescriptionChanged OnDescriptionChanged;
	//TAttribute<float> Mean;
	//TAttribute<float> StandardDeviation;

	//FOnMeanChanged OnMeanChanged;
	//FOnStandardDeviationChanged OnStandardDeviationChanged;

	FTransform2D GetPointsTransform(const FGeometry& AllottedGeometry) const;
};