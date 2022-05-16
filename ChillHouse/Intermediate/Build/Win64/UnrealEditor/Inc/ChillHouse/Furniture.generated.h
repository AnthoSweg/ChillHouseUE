// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHILLHOUSE_Furniture_generated_h
#error "Furniture.generated.h already included, missing '#pragma once' in Furniture.h"
#endif
#define CHILLHOUSE_Furniture_generated_h

#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_SPARSE_DATA
#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_RPC_WRAPPERS
#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFurniture(); \
	friend struct Z_Construct_UClass_AFurniture_Statics; \
public: \
	DECLARE_CLASS(AFurniture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChillHouse"), NO_API) \
	DECLARE_SERIALIZER(AFurniture)


#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFurniture(); \
	friend struct Z_Construct_UClass_AFurniture_Statics; \
public: \
	DECLARE_CLASS(AFurniture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChillHouse"), NO_API) \
	DECLARE_SERIALIZER(AFurniture)


#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFurniture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFurniture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurniture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurniture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFurniture(AFurniture&&); \
	NO_API AFurniture(const AFurniture&); \
public:


#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFurniture(AFurniture&&); \
	NO_API AFurniture(const AFurniture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurniture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurniture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFurniture)


#define FID_ChillHouse_Source_ChillHouse_Furniture_h_9_PROLOG
#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_SPARSE_DATA \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_RPC_WRAPPERS \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_INCLASS \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ChillHouse_Source_ChillHouse_Furniture_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_SPARSE_DATA \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_INCLASS_NO_PURE_DECLS \
	FID_ChillHouse_Source_ChillHouse_Furniture_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHILLHOUSE_API UClass* StaticClass<class AFurniture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChillHouse_Source_ChillHouse_Furniture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
