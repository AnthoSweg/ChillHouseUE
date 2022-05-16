// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/A_Furniture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_Furniture() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_Furniture_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_Furniture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
// End Cross Module References
	void AA_Furniture::StaticRegisterNativesAA_Furniture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_Furniture);
	UClass* Z_Construct_UClass_AA_Furniture_NoRegister()
	{
		return AA_Furniture::StaticClass();
	}
	struct Z_Construct_UClass_AA_Furniture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_Furniture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Furniture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_Furniture.h" },
		{ "ModuleRelativePath", "A_Furniture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_Furniture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_Furniture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_Furniture_Statics::ClassParams = {
		&AA_Furniture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_Furniture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Furniture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_Furniture()
	{
		if (!Z_Registration_Info_UClass_AA_Furniture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_Furniture.OuterSingleton, Z_Construct_UClass_AA_Furniture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA_Furniture.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AA_Furniture>()
	{
		return AA_Furniture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_Furniture);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Furniture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Furniture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA_Furniture, AA_Furniture::StaticClass, TEXT("AA_Furniture"), &Z_Registration_Info_UClass_AA_Furniture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_Furniture), 3447449770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Furniture_h_2660211855(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Furniture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Furniture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
