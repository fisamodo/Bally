// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BALLY_Brick_generated_h
#error "Brick.generated.h already included, missing '#pragma once' in Brick.h"
#endif
#define BALLY_Brick_generated_h

#define Bally_Source_Bally_Brick_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndexType); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndexType,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Brick_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndexType); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndexType,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Brick_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define Bally_Source_Bally_Brick_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define Bally_Source_Bally_Brick_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public:


#define Bally_Source_Bally_Brick_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrick)


#define Bally_Source_Bally_Brick_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Brick() { return STRUCT_OFFSET(ABrick, SM_Brick); } \
	FORCEINLINE static uint32 __PPO__Box_Collision() { return STRUCT_OFFSET(ABrick, Box_Collision); }


#define Bally_Source_Bally_Brick_h_10_PROLOG
#define Bally_Source_Bally_Brick_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Brick_h_13_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Brick_h_13_RPC_WRAPPERS \
	Bally_Source_Bally_Brick_h_13_INCLASS \
	Bally_Source_Bally_Brick_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_Brick_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Brick_h_13_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Brick_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_Brick_h_13_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_Brick_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class ABrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_Brick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
