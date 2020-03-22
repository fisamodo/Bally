// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLY_BallyGameModeBase_generated_h
#error "BallyGameModeBase.generated.h already included, missing '#pragma once' in BallyGameModeBase.h"
#endif
#define BALLY_BallyGameModeBase_generated_h

#define Bally_Source_Bally_BallyGameModeBase_h_15_RPC_WRAPPERS
#define Bally_Source_Bally_BallyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Bally_Source_Bally_BallyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallyGameModeBase(); \
	friend struct Z_Construct_UClass_ABallyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABallyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABallyGameModeBase)


#define Bally_Source_Bally_BallyGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABallyGameModeBase(); \
	friend struct Z_Construct_UClass_ABallyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABallyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABallyGameModeBase)


#define Bally_Source_Bally_BallyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallyGameModeBase(ABallyGameModeBase&&); \
	NO_API ABallyGameModeBase(const ABallyGameModeBase&); \
public:


#define Bally_Source_Bally_BallyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallyGameModeBase(ABallyGameModeBase&&); \
	NO_API ABallyGameModeBase(const ABallyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallyGameModeBase)


#define Bally_Source_Bally_BallyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Bally_Source_Bally_BallyGameModeBase_h_12_PROLOG
#define Bally_Source_Bally_BallyGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_BallyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_BallyGameModeBase_h_15_RPC_WRAPPERS \
	Bally_Source_Bally_BallyGameModeBase_h_15_INCLASS \
	Bally_Source_Bally_BallyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_BallyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_BallyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_BallyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_BallyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_BallyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class ABallyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_BallyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
