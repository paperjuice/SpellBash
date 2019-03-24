// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpellBash/MC_Utils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMC_Utils() {}
// Cross Module References
	SPELLBASH_API UClass* Z_Construct_UClass_UMC_Utils_NoRegister();
	SPELLBASH_API UClass* Z_Construct_UClass_UMC_Utils();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpellBash();
	SPELLBASH_API UFunction* Z_Construct_UFunction_UMC_Utils_IsOnCooldown();
// End Cross Module References
	void UMC_Utils::StaticRegisterNativesUMC_Utils()
	{
		UClass* Class = UMC_Utils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOnCooldown", &UMC_Utils::execIsOnCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics
	{
		struct MC_Utils_eventIsOnCooldown_Parms
		{
			bool CooldownOn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_CooldownOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CooldownOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MC_Utils_eventIsOnCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MC_Utils_eventIsOnCooldown_Parms), &Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_CooldownOn_SetBit(void* Obj)
	{
		((MC_Utils_eventIsOnCooldown_Parms*)Obj)->CooldownOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_CooldownOn = { UE4CodeGen_Private::EPropertyClass::Bool, "CooldownOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MC_Utils_eventIsOnCooldown_Parms), &Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_CooldownOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::NewProp_CooldownOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MC_Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMC_Utils, "IsOnCooldown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MC_Utils_eventIsOnCooldown_Parms), Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMC_Utils_IsOnCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMC_Utils_IsOnCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMC_Utils_NoRegister()
	{
		return UMC_Utils::StaticClass();
	}
	struct Z_Construct_UClass_UMC_Utils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMC_Utils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellBash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMC_Utils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMC_Utils_IsOnCooldown, "IsOnCooldown" }, // 1830749950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMC_Utils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MC_Utils.h" },
		{ "ModuleRelativePath", "MC_Utils.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMC_Utils_Statics::NewProp_MaxCooldown_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "MC_Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMC_Utils_Statics::NewProp_MaxCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMC_Utils, MaxCooldown), METADATA_PARAMS(Z_Construct_UClass_UMC_Utils_Statics::NewProp_MaxCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMC_Utils_Statics::NewProp_MaxCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMC_Utils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMC_Utils_Statics::NewProp_MaxCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMC_Utils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMC_Utils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMC_Utils_Statics::ClassParams = {
		&UMC_Utils::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMC_Utils_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMC_Utils_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMC_Utils_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMC_Utils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMC_Utils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMC_Utils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMC_Utils, 3259667967);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMC_Utils(Z_Construct_UClass_UMC_Utils, &UMC_Utils::StaticClass, TEXT("/Script/SpellBash"), TEXT("UMC_Utils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMC_Utils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
