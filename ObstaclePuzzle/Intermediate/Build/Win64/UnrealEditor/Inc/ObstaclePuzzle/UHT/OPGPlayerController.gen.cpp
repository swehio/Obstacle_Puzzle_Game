// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlayerController();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AOPGPlayerController Function GetHUDWidget
struct Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics
{
	struct OPGPlayerController_eventGetHUDWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OPGPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::OPGPlayerController_eventGetHUDWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::OPGPlayerController_eventGetHUDWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGPlayerController::execGetHUDWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
	P_NATIVE_END;
}
// End Class AOPGPlayerController Function GetHUDWidget

// Begin Class AOPGPlayerController Function ShowGameHUD
struct Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGPlayerController, nullptr, "ShowGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGPlayerController::execShowGameHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameHUD();
	P_NATIVE_END;
}
// End Class AOPGPlayerController Function ShowGameHUD

// Begin Class AOPGPlayerController Function ShowRestartMenu
struct Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RestartMenu" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGPlayerController, nullptr, "ShowRestartMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGPlayerController::execShowRestartMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowRestartMenu();
	P_NATIVE_END;
}
// End Class AOPGPlayerController Function ShowRestartMenu

// Begin Class AOPGPlayerController Function ShowStartMenu
struct Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RestartMenu" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGPlayerController, nullptr, "ShowStartMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGPlayerController::execShowStartMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowStartMenu();
	P_NATIVE_END;
}
// End Class AOPGPlayerController Function ShowStartMenu

// Begin Class AOPGPlayerController
void AOPGPlayerController::StaticRegisterNativesAOPGPlayerController()
{
	UClass* Class = AOPGPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHUDWidget", &AOPGPlayerController::execGetHUDWidget },
		{ "ShowGameHUD", &AOPGPlayerController::execShowGameHUD },
		{ "ShowRestartMenu", &AOPGPlayerController::execShowRestartMenu },
		{ "ShowStartMenu", &AOPGPlayerController::execShowStartMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOPGPlayerController);
UClass* Z_Construct_UClass_AOPGPlayerController_NoRegister()
{
	return AOPGPlayerController::StaticClass();
}
struct Z_Construct_UClass_AOPGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OPGPlayerController.h" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveXYAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveUDAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMenuWidgetClass_MetaData[] = {
		{ "Category", "startMenu" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMenuWidgetInstance_MetaData[] = {
		{ "Category", "startMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartMenuWidgetClass_MetaData[] = {
		{ "Category", "RestartMenu" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartMenuWidgetInstance_MetaData[] = {
		{ "Category", "RestartMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveXYAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveUDAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartMenuWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RestartMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartMenuWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOPGPlayerController_GetHUDWidget, "GetHUDWidget" }, // 1329381910
		{ &Z_Construct_UFunction_AOPGPlayerController_ShowGameHUD, "ShowGameHUD" }, // 201579301
		{ &Z_Construct_UFunction_AOPGPlayerController_ShowRestartMenu, "ShowRestartMenu" }, // 3137221232
		{ &Z_Construct_UFunction_AOPGPlayerController_ShowStartMenu, "ShowStartMenu" }, // 4170509485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_MoveXYAction = { "MoveXYAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, MoveXYAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveXYAction_MetaData), NewProp_MoveXYAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_MoveUDAction = { "MoveUDAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, MoveUDAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveUDAction_MetaData), NewProp_MoveUDAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RollAction = { "RollAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, RollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollAction_MetaData), NewProp_RollAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_StartMenuWidgetClass = { "StartMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, StartMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMenuWidgetClass_MetaData), NewProp_StartMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_StartMenuWidgetInstance = { "StartMenuWidgetInstance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, StartMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMenuWidgetInstance_MetaData), NewProp_StartMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RestartMenuWidgetClass = { "RestartMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, RestartMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartMenuWidgetClass_MetaData), NewProp_RestartMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RestartMenuWidgetInstance = { "RestartMenuWidgetInstance", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlayerController, RestartMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartMenuWidgetInstance_MetaData), NewProp_RestartMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOPGPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_MoveXYAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_MoveUDAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RollAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_StartMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_StartMenuWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RestartMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlayerController_Statics::NewProp_RestartMenuWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOPGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPGPlayerController_Statics::ClassParams = {
	&AOPGPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOPGPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPGPlayerController()
{
	if (!Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton, Z_Construct_UClass_AOPGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AOPGPlayerController>()
{
	return AOPGPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPGPlayerController);
AOPGPlayerController::~AOPGPlayerController() {}
// End Class AOPGPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPGPlayerController, AOPGPlayerController::StaticClass, TEXT("AOPGPlayerController"), &Z_Registration_Info_UClass_AOPGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPGPlayerController), 1108310714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_3058923329(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
