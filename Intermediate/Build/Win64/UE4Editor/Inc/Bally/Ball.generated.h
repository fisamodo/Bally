// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef BALLY_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define BALLY_Ball_generated_h

#define Bally_Source_Bally_Ball_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBall(); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBall(); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Ball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Bally_Source_Bally_Ball_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Bally_Source_Bally_Ball_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Bally_Source_Bally_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Bally_Source_Bally_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define Bally_Source_Bally_Ball_h_9_PROLOG
#define Bally_Source_Bally_Ball_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Ball_h_12_RPC_WRAPPERS \
	Bally_Source_Bally_Ball_h_12_INCLASS \
	Bally_Source_Bally_Ball_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_Ball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_Ball_h_12_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
