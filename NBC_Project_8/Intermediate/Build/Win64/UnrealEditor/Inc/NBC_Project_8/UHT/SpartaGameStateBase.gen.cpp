// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/SpartaGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASpartaGameStateBase();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASpartaGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ASpartaGameStateBase Function AddScore
struct Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics
{
	struct SpartaGameStateBase_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameStateBase_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameStateBase, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::SpartaGameStateBase_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::SpartaGameStateBase_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameStateBase_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameStateBase_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameStateBase::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ASpartaGameStateBase Function AddScore

// Begin Class ASpartaGameStateBase Function GetScore
struct Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics
{
	struct SpartaGameStateBase_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameStateBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameStateBase, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::SpartaGameStateBase_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::SpartaGameStateBase_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameStateBase_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameStateBase_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameStateBase::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ASpartaGameStateBase Function GetScore

// Begin Class ASpartaGameStateBase Function OnGameOver
struct Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameStateBase, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameStateBase::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class ASpartaGameStateBase Function OnGameOver

// Begin Class ASpartaGameStateBase
void ASpartaGameStateBase::StaticRegisterNativesASpartaGameStateBase()
{
	UClass* Class = ASpartaGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ASpartaGameStateBase::execAddScore },
		{ "GetScore", &ASpartaGameStateBase::execGetScore },
		{ "OnGameOver", &ASpartaGameStateBase::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaGameStateBase);
UClass* Z_Construct_UClass_ASpartaGameStateBase_NoRegister()
{
	return ASpartaGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ASpartaGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaGameStateBase.h" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTime_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SpartaGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTime_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaGameStateBase_AddScore, "AddScore" }, // 2463654887
		{ &Z_Construct_UFunction_ASpartaGameStateBase_GetScore, "GetScore" }, // 1531395691
		{ &Z_Construct_UFunction_ASpartaGameStateBase_OnGameOver, "OnGameOver" }, // 3012762623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, LevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDuration_MetaData), NewProp_LevelDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_WaveTime_Inner = { "WaveTime", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_WaveTime = { "WaveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameStateBase, WaveTime), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTime_MetaData), NewProp_WaveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_LevelMapNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_WaveTime_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameStateBase_Statics::NewProp_WaveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaGameStateBase_Statics::ClassParams = {
	&ASpartaGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaGameStateBase()
{
	if (!Z_Registration_Info_UClass_ASpartaGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaGameStateBase.OuterSingleton, Z_Construct_UClass_ASpartaGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaGameStateBase.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ASpartaGameStateBase>()
{
	return ASpartaGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaGameStateBase);
ASpartaGameStateBase::~ASpartaGameStateBase() {}
// End Class ASpartaGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaGameStateBase, ASpartaGameStateBase::StaticClass, TEXT("ASpartaGameStateBase"), &Z_Registration_Info_UClass_ASpartaGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaGameStateBase), 2788638075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_1235898871(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SpartaGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
