// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/ChillHouseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChillHouseGameMode() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseGameMode_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
// End Cross Module References
	void AChillHouseGameMode::StaticRegisterNativesAChillHouseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChillHouseGameMode);
	UClass* Z_Construct_UClass_AChillHouseGameMode_NoRegister()
	{
		return AChillHouseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChillHouseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChillHouseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHouseGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChillHouseGameMode.h" },
		{ "ModuleRelativePath", "ChillHouseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChillHouseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChillHouseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChillHouseGameMode_Statics::ClassParams = {
		&AChillHouseGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChillHouseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChillHouseGameMode()
	{
		if (!Z_Registration_Info_UClass_AChillHouseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChillHouseGameMode.OuterSingleton, Z_Construct_UClass_AChillHouseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChillHouseGameMode.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AChillHouseGameMode>()
	{
		return AChillHouseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChillHouseGameMode);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChillHouseGameMode, AChillHouseGameMode::StaticClass, TEXT("AChillHouseGameMode"), &Z_Registration_Info_UClass_AChillHouseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChillHouseGameMode), 3533505917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameMode_h_146092361(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
