// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLY_BallyGameStateBase_generated_h
#error "BallyGameStateBase.generated.h already included, missing '#pragma once' in BallyGameStateBase.h"
#endif
#define BALLY_BallyGameStateBase_generated_h

#define Bally_Source_Bally_BallyGameStateBase_h_15_RPC_WRAPPERS
#define Bally_Source_Bally_BallyGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Bally_Source_Bally_BallyGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallyGameStateBase(); \
	friend struct Z_Construct_UClass_ABallyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABallyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABallyGameStateBase)


#define Bally_Source_Bally_BallyGameStateBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABallyGameStateBase(); \
	friend struct Z_Construct_UClass_ABallyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABallyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABallyGameStateBase)


#define Bally_Source_Bally_BallyGameStateBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallyGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallyGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallyGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallyGameStateBase(ABallyGameStateBase&&); \
	NO_API ABallyGameStateBase(const ABallyGameStateBase&); \
public:


#define Bally_Source_Bally_BallyGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallyGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallyGameStateBase(ABallyGameStateBase&&); \
	NO_API ABallyGameStateBase(const ABallyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallyGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallyGameStateBase)


#define Bally_Source_Bally_BallyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Bally_Source_Bally_BallyGameStateBase_h_12_PROLOG
#define Bally_Source_Bally_BallyGameStateBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_BallyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_BallyGameStateBase_h_15_RPC_WRAPPERS \
	Bally_Source_Bally_BallyGameStateBase_h_15_INCLASS \
	Bally_Source_Bally_BallyGameStateBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_BallyGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_BallyGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_BallyGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_BallyGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_BallyGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class ABallyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_BallyGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
