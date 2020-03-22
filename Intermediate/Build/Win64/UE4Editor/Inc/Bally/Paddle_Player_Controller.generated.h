// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLY_Paddle_Player_Controller_generated_h
#error "Paddle_Player_Controller.generated.h already included, missing '#pragma once' in Paddle_Player_Controller.h"
#endif
#define BALLY_Paddle_Player_Controller_generated_h

#define Bally_Source_Bally_Paddle_Player_Controller_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle_Player_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Player_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Player_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bally"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Player_Controller)


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle_Player_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle_Player_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public:


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Player_Controller(APaddle_Player_Controller&&); \
	NO_API APaddle_Player_Controller(const APaddle_Player_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Player_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Player_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle_Player_Controller)


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObject() { return STRUCT_OFFSET(APaddle_Player_Controller, BallObject); }


#define Bally_Source_Bally_Paddle_Player_Controller_h_13_PROLOG
#define Bally_Source_Bally_Paddle_Player_Controller_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_RPC_WRAPPERS \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_INCLASS \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bally_Source_Bally_Paddle_Player_Controller_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_PRIVATE_PROPERTY_OFFSET \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_INCLASS_NO_PURE_DECLS \
	Bally_Source_Bally_Paddle_Player_Controller_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLY_API UClass* StaticClass<class APaddle_Player_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bally_Source_Bally_Paddle_Player_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
