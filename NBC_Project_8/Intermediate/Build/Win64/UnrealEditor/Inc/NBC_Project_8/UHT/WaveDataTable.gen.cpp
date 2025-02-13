// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/WaveDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveDataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NBC_PROJECT_8_API UScriptStruct* Z_Construct_UScriptStruct_FWaveDataTable();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin ScriptStruct FWaveDataTable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveDataTable;
class UScriptStruct* FWaveDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveDataTable, (UObject*)Z_Construct_UPackage__Script_NBC_Project_8(), TEXT("WaveDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_WaveDataTable.OuterSingleton;
}
template<> NBC_PROJECT_8_API UScriptStruct* StaticStruct<FWaveDataTable>()
{
	return FWaveDataTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/WaveDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveData_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Public/WaveDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveDataTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWaveDataTable_Statics::NewProp_WaveData_Inner = { "WaveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveDataTable_Statics::NewProp_WaveData = { "WaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveDataTable, WaveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveData_MetaData), NewProp_WaveData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataTable_Statics::NewProp_WaveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataTable_Statics::NewProp_WaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveDataTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
	nullptr,
	&NewStructOps,
	"WaveDataTable",
	Z_Construct_UScriptStruct_FWaveDataTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataTable_Statics::PropPointers),
	sizeof(FWaveDataTable),
	alignof(FWaveDataTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveDataTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveDataTable()
{
	if (!Z_Registration_Info_UScriptStruct_WaveDataTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveDataTable.InnerSingleton, Z_Construct_UScriptStruct_FWaveDataTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveDataTable.InnerSingleton;
}
// End ScriptStruct FWaveDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_WaveDataTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveDataTable::StaticStruct, Z_Construct_UScriptStruct_FWaveDataTable_Statics::NewStructOps, TEXT("WaveDataTable"), &Z_Registration_Info_UScriptStruct_WaveDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveDataTable), 949812273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_WaveDataTable_h_3902878269(TEXT("/Script/NBC_Project_8"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_WaveDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_WaveDataTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
