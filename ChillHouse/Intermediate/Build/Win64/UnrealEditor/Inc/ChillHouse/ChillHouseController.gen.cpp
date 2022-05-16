// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/ChillHouseController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChillHouseController() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseController_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AChillHouseController::StaticRegisterNativesAChillHouseController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChillHouseController);
	UClass* Z_Construct_UClass_AChillHouseController_NoRegister()
	{
		return AChillHouseController::StaticClass();
	}
	struct Z_Construct_UClass_AChillHouseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChillHouseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHouseController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ChillHouseController.h" },
		{ "ModuleRelativePath", "ChillHouseController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ChillHouseController" },
		{ "ModuleRelativePath", "ChillHouseController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHouseController, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChillHouseController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHouseController, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChillHouseController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHouseController_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChillHouseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChillHouseController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChillHouseController_Statics::ClassParams = {
		&AChillHouseController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChillHouseController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChillHouseController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChillHouseController()
	{
		if (!Z_Registration_Info_UClass_AChillHouseController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChillHouseController.OuterSingleton, Z_Construct_UClass_AChillHouseController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChillHouseController.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AChillHouseController>()
	{
		return AChillHouseController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChillHouseController);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChillHouseController, AChillHouseController::StaticClass, TEXT("AChillHouseController"), &Z_Registration_Info_UClass_AChillHouseController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChillHouseController), 2846707377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseController_h_1874183226(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
