// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/A_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_PlayerController() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_PlayerController_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
// End Cross Module References
	void AA_PlayerController::StaticRegisterNativesAA_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_PlayerController);
	UClass* Z_Construct_UClass_AA_PlayerController_NoRegister()
	{
		return AA_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AA_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "A_PlayerController.h" },
		{ "ModuleRelativePath", "A_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_PlayerController_Statics::ClassParams = {
		&AA_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton, Z_Construct_UClass_AA_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AA_PlayerController>()
	{
		return AA_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_PlayerController);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA_PlayerController, AA_PlayerController::StaticClass, TEXT("AA_PlayerController"), &Z_Registration_Info_UClass_AA_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_PlayerController), 371263549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_PlayerController_h_1284660710(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
