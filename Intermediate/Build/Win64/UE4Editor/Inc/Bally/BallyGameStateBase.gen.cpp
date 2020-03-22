// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bally/BallyGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallyGameStateBase() {}
// Cross Module References
	BALLY_API UClass* Z_Construct_UClass_ABallyGameStateBase_NoRegister();
	BALLY_API UClass* Z_Construct_UClass_ABallyGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Bally();
// End Cross Module References
	void ABallyGameStateBase::StaticRegisterNativesABallyGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ABallyGameStateBase_NoRegister()
	{
		return ABallyGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ABallyGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallyGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallyGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BallyGameStateBase.h" },
		{ "ModuleRelativePath", "BallyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallyGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallyGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallyGameStateBase_Statics::ClassParams = {
		&ABallyGameStateBase::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABallyGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABallyGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallyGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallyGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallyGameStateBase, 2781259648);
	template<> BALLY_API UClass* StaticClass<ABallyGameStateBase>()
	{
		return ABallyGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallyGameStateBase(Z_Construct_UClass_ABallyGameStateBase, &ABallyGameStateBase::StaticClass, TEXT("/Script/Bally"), TEXT("ABallyGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallyGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
