// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bally/Paddle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}
// Cross Module References
	BALLY_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	BALLY_API UClass* Z_Construct_UClass_APaddle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Bally();
// End Cross Module References
	void APaddle::StaticRegisterNativesAPaddle()
	{
	}
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Bally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
		&APaddle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle, 476757053);
	template<> BALLY_API UClass* StaticClass<APaddle>()
	{
		return APaddle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle(Z_Construct_UClass_APaddle, &APaddle::StaticClass, TEXT("/Script/Bally"), TEXT("APaddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
