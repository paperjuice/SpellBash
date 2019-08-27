// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiritDecay/SpiritDecayGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritDecayGameModeBase() {}
// Cross Module References
	SPIRITDECAY_API UClass* Z_Construct_UClass_ASpiritDecayGameModeBase_NoRegister();
	SPIRITDECAY_API UClass* Z_Construct_UClass_ASpiritDecayGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpiritDecay();
// End Cross Module References
	void ASpiritDecayGameModeBase::StaticRegisterNativesASpiritDecayGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpiritDecayGameModeBase_NoRegister()
	{
		return ASpiritDecayGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpiritDecayGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiritDecay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpiritDecayGameModeBase.h" },
		{ "ModuleRelativePath", "SpiritDecayGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiritDecayGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::ClassParams = {
		&ASpiritDecayGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiritDecayGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiritDecayGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiritDecayGameModeBase, 1401188005);
	template<> SPIRITDECAY_API UClass* StaticClass<ASpiritDecayGameModeBase>()
	{
		return ASpiritDecayGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiritDecayGameModeBase(Z_Construct_UClass_ASpiritDecayGameModeBase, &ASpiritDecayGameModeBase::StaticClass, TEXT("/Script/SpiritDecay"), TEXT("ASpiritDecayGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiritDecayGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
