// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPELLBASH_MC_Utils_generated_h
#error "MC_Utils.generated.h already included, missing '#pragma once' in MC_Utils.h"
#endif
#define SPELLBASH_MC_Utils_generated_h

#define SpellBash_Source_SpellBash_MC_Utils_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOnCooldown) \
	{ \
		P_GET_UBOOL(Z_Param_CooldownOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnCooldown(Z_Param_CooldownOn); \
		P_NATIVE_END; \
	}


#define SpellBash_Source_SpellBash_MC_Utils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOnCooldown) \
	{ \
		P_GET_UBOOL(Z_Param_CooldownOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnCooldown(Z_Param_CooldownOn); \
		P_NATIVE_END; \
	}


#define SpellBash_Source_SpellBash_MC_Utils_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMC_Utils(); \
	friend struct Z_Construct_UClass_UMC_Utils_Statics; \
public: \
	DECLARE_CLASS(UMC_Utils, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellBash"), NO_API) \
	DECLARE_SERIALIZER(UMC_Utils)


#define SpellBash_Source_SpellBash_MC_Utils_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMC_Utils(); \
	friend struct Z_Construct_UClass_UMC_Utils_Statics; \
public: \
	DECLARE_CLASS(UMC_Utils, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellBash"), NO_API) \
	DECLARE_SERIALIZER(UMC_Utils)


#define SpellBash_Source_SpellBash_MC_Utils_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMC_Utils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMC_Utils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMC_Utils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMC_Utils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMC_Utils(UMC_Utils&&); \
	NO_API UMC_Utils(const UMC_Utils&); \
public:


#define SpellBash_Source_SpellBash_MC_Utils_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMC_Utils(UMC_Utils&&); \
	NO_API UMC_Utils(const UMC_Utils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMC_Utils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMC_Utils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMC_Utils)


#define SpellBash_Source_SpellBash_MC_Utils_h_13_PRIVATE_PROPERTY_OFFSET
#define SpellBash_Source_SpellBash_MC_Utils_h_10_PROLOG
#define SpellBash_Source_SpellBash_MC_Utils_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellBash_Source_SpellBash_MC_Utils_h_13_PRIVATE_PROPERTY_OFFSET \
	SpellBash_Source_SpellBash_MC_Utils_h_13_RPC_WRAPPERS \
	SpellBash_Source_SpellBash_MC_Utils_h_13_INCLASS \
	SpellBash_Source_SpellBash_MC_Utils_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpellBash_Source_SpellBash_MC_Utils_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellBash_Source_SpellBash_MC_Utils_h_13_PRIVATE_PROPERTY_OFFSET \
	SpellBash_Source_SpellBash_MC_Utils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SpellBash_Source_SpellBash_MC_Utils_h_13_INCLASS_NO_PURE_DECLS \
	SpellBash_Source_SpellBash_MC_Utils_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpellBash_Source_SpellBash_MC_Utils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
