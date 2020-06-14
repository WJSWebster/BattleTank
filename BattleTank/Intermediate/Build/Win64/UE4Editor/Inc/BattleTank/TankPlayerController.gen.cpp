// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_LineTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrossHairYLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CrossHairYLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrossHairXLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CrossHairXLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "TankPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_LineTraceRange_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_LineTraceRange = { UE4CodeGen_Private::EPropertyClass::Float, "m_LineTraceRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, m_LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_LineTraceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_LineTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairYLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairYLocation = { UE4CodeGen_Private::EPropertyClass::Float, "m_CrossHairYLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, m_CrossHairYLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairYLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairYLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairXLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairXLocation = { UE4CodeGen_Private::EPropertyClass::Float, "m_CrossHairXLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, m_CrossHairXLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairXLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairXLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_LineTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairYLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_m_CrossHairXLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_ATankPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 3345879269);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
