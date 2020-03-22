// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bally/Paddle_Player_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle_Player_Controller() {}
// Cross Module References
	BALLY_API UClass* Z_Construct_UClass_APaddle_Player_Controller_NoRegister();
	BALLY_API UClass* Z_Construct_UClass_APaddle_Player_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Bally();
	BALLY_API UFunction* Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent();
// End Cross Module References
	void APaddle_Player_Controller::StaticRegisterNativesAPaddle_Player_Controller()
	{
		UClass* Class = APaddle_Player_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &APaddle_Player_Controller::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paddle_Player_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle_Player_Controller, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaddle_Player_Controller_NoRegister()
	{
		return APaddle_Player_Controller::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Player_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Player_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Bally,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaddle_Player_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddle_Player_Controller_SetupInputComponent, "SetupInputComponent" }, // 382629055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Player_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Paddle_Player_Controller.h" },
		{ "ModuleRelativePath", "Paddle_Player_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Player_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle_Player_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Player_Controller_Statics::ClassParams = {
		&APaddle_Player_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Player_Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APaddle_Player_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle_Player_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddle_Player_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle_Player_Controller, 3988997023);
	template<> BALLY_API UClass* StaticClass<APaddle_Player_Controller>()
	{
		return APaddle_Player_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle_Player_Controller(Z_Construct_UClass_APaddle_Player_Controller, &APaddle_Player_Controller::StaticClass, TEXT("/Script/Bally"), TEXT("APaddle_Player_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle_Player_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
