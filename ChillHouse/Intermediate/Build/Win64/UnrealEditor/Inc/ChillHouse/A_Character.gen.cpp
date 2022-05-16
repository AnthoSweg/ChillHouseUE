// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/A_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_Character() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_Character_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AA_Character();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
// End Cross Module References
	void AA_Character::StaticRegisterNativesAA_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_Character);
	UClass* Z_Construct_UClass_AA_Character_NoRegister()
	{
		return AA_Character::StaticClass();
	}
	struct Z_Construct_UClass_AA_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "A_Character.h" },
		{ "ModuleRelativePath", "A_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_Character_Statics::ClassParams = {
		&AA_Character::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_Character()
	{
		if (!Z_Registration_Info_UClass_AA_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_Character.OuterSingleton, Z_Construct_UClass_AA_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA_Character.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AA_Character>()
	{
		return AA_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_Character);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA_Character, AA_Character::StaticClass, TEXT("AA_Character"), &Z_Registration_Info_UClass_AA_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_Character), 375268683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Character_h_623601874(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_A_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
