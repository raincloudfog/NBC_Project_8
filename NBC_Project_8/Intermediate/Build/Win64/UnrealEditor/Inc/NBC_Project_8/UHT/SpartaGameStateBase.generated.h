// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_8_SpartaGameStateBase_generated_h
#error "SpartaGameStateBase.generated.h already included, missing '#pragma once' in SpartaGameStateBase.h"
#endif
#define NBC_PROJECT_8_SpartaGameStateBase_generated_h

#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpartaGameStateBase(); \
	friend struct Z_Construct_UClass_ASpartaGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ASpartaGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_8"), NO_API) \
	DECLARE_SERIALIZER(ASpartaGameStateBase)


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpartaGameStateBase(ASpartaGameStateBase&&); \
	ASpartaGameStateBase(const ASpartaGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpartaGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpartaGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpartaGameStateBase) \
	NO_API virtual ~ASpartaGameStateBase();


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_12_PROLOG
#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_8_API UClass* StaticClass<class ASpartaGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
