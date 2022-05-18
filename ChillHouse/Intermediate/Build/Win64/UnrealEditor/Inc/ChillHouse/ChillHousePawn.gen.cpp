// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChillHouse/ChillHousePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChillHousePawn() {}
// Cross Module References
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHousePawn_NoRegister();
	CHILLHOUSE_API UClass* Z_Construct_UClass_AChillHousePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ChillHouse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(AChillHousePawn::execFollowCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FollowCursor();
		P_NATIVE_END;
	}
	void AChillHousePawn::StaticRegisterNativesAChillHousePawn()
	{
		UClass* Class = AChillHousePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FollowCursor", &AChillHousePawn::execFollowCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics
	{
		struct ChillHousePawn_eventFollowCursor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChillHousePawn_eventFollowCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChillHousePawn_eventFollowCursor_Parms), &Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChillHousePawn, nullptr, "FollowCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::ChillHousePawn_eventFollowCursor_Parms), Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChillHousePawn_FollowCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChillHousePawn_FollowCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChillHousePawn);
	UClass* Z_Construct_UClass_AChillHousePawn_NoRegister()
	{
		return AChillHousePawn::StaticClass();
	}
	struct Z_Construct_UClass_AChillHousePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CursorLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPanSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPanSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomMinMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraZoomMinMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChillHousePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ChillHouse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChillHousePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChillHousePawn_FollowCursor, "FollowCursor" }, // 2261107024
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChillHousePawn.h" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CursorLocationOffset_MetaData[] = {
		{ "Category", "ChillHousePawn" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CursorLocationOffset = { "CursorLocationOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHousePawn, CursorLocationOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CursorLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CursorLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraRotationRate_MetaData[] = {
		{ "Category", "ChillHousePawn" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraRotationRate = { "CameraRotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHousePawn, CameraRotationRate), METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraPanSpeed_MetaData[] = {
		{ "Category", "ChillHousePawn" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraPanSpeed = { "CameraPanSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHousePawn, CameraPanSpeed), METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraPanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraPanSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "ChillHousePawn" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHousePawn, CameraZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomMinMax_MetaData[] = {
		{ "Category", "ChillHousePawn" },
		{ "ModuleRelativePath", "ChillHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomMinMax = { "CameraZoomMinMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChillHousePawn, CameraZoomMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomMinMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChillHousePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CursorLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraPanSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChillHousePawn_Statics::NewProp_CameraZoomMinMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChillHousePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChillHousePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChillHousePawn_Statics::ClassParams = {
		&AChillHousePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChillHousePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChillHousePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChillHousePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChillHousePawn()
	{
		if (!Z_Registration_Info_UClass_AChillHousePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChillHousePawn.OuterSingleton, Z_Construct_UClass_AChillHousePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChillHousePawn.OuterSingleton;
	}
	template<> CHILLHOUSE_API UClass* StaticClass<AChillHousePawn>()
	{
		return AChillHousePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChillHousePawn);
	struct Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHousePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHousePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChillHousePawn, AChillHousePawn::StaticClass, TEXT("AChillHousePawn"), &Z_Registration_Info_UClass_AChillHousePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChillHousePawn), 1029013052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHousePawn_h_2320051216(TEXT("/Script/ChillHouse"),
		Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHousePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChillHouse_Source_ChillHouse_ChillHousePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
