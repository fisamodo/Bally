// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bally/BallyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallyGameModeBase() {}
// Cross Module References
	BALLY_API UClass* Z_Construct_UClass_ABallyGameModeBase_NoRegister();
	BALLY_API UClass* Z_Construct_UClass_ABallyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bally();
// End Cross Module References
	void ABallyGameModeBase::StaticRegisterNativesABallyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABallyGameModeBase_NoRegister()
	{
		return ABallyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABallyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointsToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BallyGameModeBase.h" },
		{ "ModuleRelativePath", "BallyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallyGameModeBase_Statics::NewProp_PointsToWin_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "BallyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABallyGameModeBase_Statics::NewProp_PointsToWin = { "PointsToWin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallyGameModeBase, PointsToWin), METADATA_PARAMS(Z_Construct_UClass_ABallyGameModeBase_Statics::NewProp_PointsToWin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallyGameModeBase_Statics::NewProp_PointsToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallyGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallyGameModeBase_Statics::NewProp_PointsToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallyGameModeBase_Statics::ClassParams = {
		&ABallyGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABallyGameModeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABallyGameModeBase_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABallyGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABallyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallyGameModeBase, 867016454);
	template<> BALLY_API UClass* StaticClass<ABallyGameModeBase>()
	{
		return ABallyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallyGameModeBase(Z_Construct_UClass_ABallyGameModeBase, &ABallyGameModeBase::StaticClass, TEXT("/Script/Bally"), TEXT("ABallyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
