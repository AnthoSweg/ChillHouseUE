// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/ChillHouseGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChillHouseGameModeBase() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseGameModeBase_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHouseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
// End Cross Module References
	void AChillHouseGameModeBase::StaticRegisterNativesAChillHouseGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChillHouseGameModeBase);
	UClass* Z_Construct_UClass_AChillHouseGameModeBase_NoRegister()
	{
		return AChillHouseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChillHouseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChillHouseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHouseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChillHouseGameModeBase.h" },
		{ "ModuleRelativePath", "ChillHouseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChillHouseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChillHouseGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChillHouseGameModeBase_Statics::ClassParams = {
		&AChillHouseGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChillHouseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHouseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChillHouseGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AChillHouseGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChillHouseGameModeBase.OuterSingleton, Z_Construct_UClass_AChillHouseGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChillHouseGameModeBase.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AChillHouseGameModeBase>()
	{
		return AChillHouseGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChillHouseGameModeBase);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChillHouseGameModeBase, AChillHouseGameModeBase::StaticClass, TEXT("AChillHouseGameModeBase"), &Z_Registration_Info_UClass_AChillHouseGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChillHouseGameModeBase), 226172674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameModeBase_h_3883374454(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHouseGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
