// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_8/Public/SpartaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASpartaPlayerController();
NBC_PROJECT_8_API UClass* Z_Construct_UClass_ASpartaPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_8();
// End Cross Module References

// Begin Class ASpartaPlayerController Function BeginPlay
struct Z_Construct_UFunction_ASpartaPlayerController_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPlayerController_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPlayerController, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPlayerController_BeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaPlayerController_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPlayerController_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPlayerController::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay();
	P_NATIVE_END;
}
// End Class ASpartaPlayerController Function BeginPlay

// Begin Class ASpartaPlayerController Function GetHUDWidget
struct Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics
{
	struct SpartaPlayerController_eventGetHUDWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::SpartaPlayerController_eventGetHUDWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::SpartaPlayerController_eventGetHUDWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPlayerController::execGetHUDWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
	P_NATIVE_END;
}
// End Class ASpartaPlayerController Function GetHUDWidget

// Begin Class ASpartaPlayerController Function ShowGameHUD
struct Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPlayerController, nullptr, "ShowGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPlayerController::execShowGameHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameHUD();
	P_NATIVE_END;
}
// End Class ASpartaPlayerController Function ShowGameHUD

// Begin Class ASpartaPlayerController Function ShowMainMenu
struct Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics
{
	struct SpartaPlayerController_eventShowMainMenu_Parms
	{
		bool bIsRestart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRestart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRestart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart_SetBit(void* Obj)
{
	((SpartaPlayerController_eventShowMainMenu_Parms*)Obj)->bIsRestart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart = { "bIsRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpartaPlayerController_eventShowMainMenu_Parms), &Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPlayerController, nullptr, "ShowMainMenu", nullptr, nullptr, Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::SpartaPlayerController_eventShowMainMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::SpartaPlayerController_eventShowMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPlayerController::execShowMainMenu)
{
	P_GET_UBOOL(Z_Param_bIsRestart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenu(Z_Param_bIsRestart);
	P_NATIVE_END;
}
// End Class ASpartaPlayerController Function ShowMainMenu

// Begin Class ASpartaPlayerController Function StartGame
struct Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics
{
	struct SpartaPlayerController_eventStartGame_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPlayerController_eventStartGame_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPlayerController, nullptr, "StartGame", nullptr, nullptr, Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::SpartaPlayerController_eventStartGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::SpartaPlayerController_eventStartGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPlayerController_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPlayerController_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPlayerController::execStartGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame(Z_Param_index);
	P_NATIVE_END;
}
// End Class ASpartaPlayerController Function StartGame

// Begin Class ASpartaPlayerController
void ASpartaPlayerController::StaticRegisterNativesASpartaPlayerController()
{
	UClass* Class = ASpartaPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginPlay", &ASpartaPlayerController::execBeginPlay },
		{ "GetHUDWidget", &ASpartaPlayerController::execGetHUDWidget },
		{ "ShowGameHUD", &ASpartaPlayerController::execShowGameHUD },
		{ "ShowMainMenu", &ASpartaPlayerController::execShowMainMenu },
		{ "StartGame", &ASpartaPlayerController::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaPlayerController);
UClass* Z_Construct_UClass_ASpartaPlayerController_NoRegister()
{
	return ASpartaPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASpartaPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SpartaPlayerController.h" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xde\xb4\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaPlayerController_BeginPlay, "BeginPlay" }, // 2825809371
		{ &Z_Construct_UFunction_ASpartaPlayerController_GetHUDWidget, "GetHUDWidget" }, // 1912224504
		{ &Z_Construct_UFunction_ASpartaPlayerController_ShowGameHUD, "ShowGameHUD" }, // 1144208583
		{ &Z_Construct_UFunction_ASpartaPlayerController_ShowMainMenu, "ShowMainMenu" }, // 3236193745
		{ &Z_Construct_UFunction_ASpartaPlayerController_StartGame, "StartGame" }, // 1363750565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MainMenuWidgetInstance = { "MainMenuWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MainMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetInstance_MetaData), NewProp_MainMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MainMenuWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaPlayerController_Statics::ClassParams = {
	&ASpartaPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaPlayerController()
{
	if (!Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton, Z_Construct_UClass_ASpartaPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton;
}
template<> NBC_PROJECT_8_API UClass* StaticClass<ASpartaPlayerController>()
{
	return ASpartaPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaPlayerController);
ASpartaPlayerController::~ASpartaPlayerController() {}
// End Class ASpartaPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_8_NBC_Project_8_Source_NBC_Project_8_Public_SpartaPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaPlayerController, ASpartaPlayerController::StaticClass, TEXT("ASpartaPlayerController"), &Z_Registration_Info_UClass_ASpartaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaPlayerController), 3254746150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_8_NBC_Project_8_Source_NBC_Project_8_Public_SpartaPlayerController_h_1693950596(TEXT("/Script/NBC_Project_8"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_8_NBC_Project_8_Source_NBC_Project_8_Public_SpartaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_NBC_Project_8_NBC_Project_8_Source_NBC_Project_8_Public_SpartaPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
