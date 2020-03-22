// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLY_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define BALLY_Paddle_generated_h

#define Bally_Source_Bally_Paddle_h_15_RPC_WRAPPERS
#define Bally_Source_Bally_Paddle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Bally_Source_Bally_Paddle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Bally_Source_Bally_Paddle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Bally_Source_Bally_Paddle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define Bally_Source_Bally_Paddle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define Bally_Source_Bally_Paddle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Paddle() { return STRUCT_OFFSET(APaddle, SM_Paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define Bally_Source_Bally_Paddle_h_12_PROLOG
#define Bally_Source_Bally_Paddle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Paddle_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Paddle_h_15_RPC_WRAPPERS \
	Bally_Source_Bally_Paddle_h_15_INCLASS \
	Bally_Source_Bally_Paddle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_Paddle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Paddle_h_15_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Paddle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_Paddle_h_15_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_Paddle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
