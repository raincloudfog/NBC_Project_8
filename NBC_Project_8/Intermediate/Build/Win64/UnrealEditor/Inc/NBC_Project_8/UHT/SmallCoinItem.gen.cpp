// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/SmallCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallCoinItem() {}

// Begin Cross Module References
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ACoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASmallCoinItem();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASmallCoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ASmallCoinItem
void ASmallCoinItem::StaticRegisterNativesASmallCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmallCoinItem);
UClass* Z_Construct_UClass_ASmallCoinItem_NoRegister()
{
	return ASmallCoinItem::StaticClass();
}
struct Z_Construct_UClass_ASmallCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SmallCoinItem.h" },
		{ "ModuleRelativePath", "Public/SmallCoinItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmallCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASmallCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmallCoinItem_Statics::ClassParams = {
	&ASmallCoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASmallCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASmallCoinItem()
{
	if (!Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton, Z_Construct_UClass_ASmallCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ASmallCoinItem>()
{
	return ASmallCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASmallCoinItem);
ASmallCoinItem::~ASmallCoinItem() {}
// End Class ASmallCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SmallCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASmallCoinItem, ASmallCoinItem::StaticClass, TEXT("ASmallCoinItem"), &Z_Registration_Info_UClass_ASmallCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmallCoinItem), 1048637341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SmallCoinItem_h_3572891268(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SmallCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_8_Source_NBC_Project_8_Public_SmallCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
