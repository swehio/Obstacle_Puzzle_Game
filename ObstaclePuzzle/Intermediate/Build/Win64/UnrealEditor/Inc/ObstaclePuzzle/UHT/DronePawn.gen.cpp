// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/DronePawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDronePawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ADronePawn();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ADronePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class ADronePawn Function Look
struct Z_Construct_UFunction_ADronePawn_Look_Statics
{
	struct DronePawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADronePawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DronePawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADronePawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADronePawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADronePawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADronePawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ADronePawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADronePawn_Look_Statics::DronePawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADronePawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADronePawn_Look_Statics::DronePawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADronePawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADronePawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADronePawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ADronePawn Function Look

// Begin Class ADronePawn Function MoveUD
struct Z_Construct_UFunction_ADronePawn_MoveUD_Statics
{
	struct DronePawn_eventMoveUD_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADronePawn_MoveUD_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DronePawn_eventMoveUD_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADronePawn_MoveUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADronePawn_MoveUD_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADronePawn_MoveUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADronePawn, nullptr, "MoveUD", nullptr, nullptr, Z_Construct_UFunction_ADronePawn_MoveUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADronePawn_MoveUD_Statics::DronePawn_eventMoveUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADronePawn_MoveUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADronePawn_MoveUD_Statics::DronePawn_eventMoveUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADronePawn_MoveUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADronePawn_MoveUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADronePawn::execMoveUD)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUD(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ADronePawn Function MoveUD

// Begin Class ADronePawn Function MoveXY
struct Z_Construct_UFunction_ADronePawn_MoveXY_Statics
{
	struct DronePawn_eventMoveXY_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADronePawn_MoveXY_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DronePawn_eventMoveXY_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADronePawn_MoveXY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADronePawn_MoveXY_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveXY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADronePawn_MoveXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADronePawn, nullptr, "MoveXY", nullptr, nullptr, Z_Construct_UFunction_ADronePawn_MoveXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADronePawn_MoveXY_Statics::DronePawn_eventMoveXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_MoveXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADronePawn_MoveXY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADronePawn_MoveXY_Statics::DronePawn_eventMoveXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADronePawn_MoveXY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADronePawn_MoveXY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADronePawn::execMoveXY)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveXY(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ADronePawn Function MoveXY

// Begin Class ADronePawn Function Roll
struct Z_Construct_UFunction_ADronePawn_Roll_Statics
{
	struct DronePawn_eventRoll_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADronePawn_Roll_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DronePawn_eventRoll_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADronePawn_Roll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADronePawn_Roll_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Roll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADronePawn_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADronePawn, nullptr, "Roll", nullptr, nullptr, Z_Construct_UFunction_ADronePawn_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Roll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADronePawn_Roll_Statics::DronePawn_eventRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADronePawn_Roll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADronePawn_Roll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADronePawn_Roll_Statics::DronePawn_eventRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADronePawn_Roll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADronePawn_Roll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADronePawn::execRoll)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Roll(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ADronePawn Function Roll

// Begin Class ADronePawn
void ADronePawn::StaticRegisterNativesADronePawn()
{
	UClass* Class = ADronePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &ADronePawn::execLook },
		{ "MoveUD", &ADronePawn::execMoveUD },
		{ "MoveXY", &ADronePawn::execMoveXY },
		{ "Roll", &ADronePawn::execRoll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADronePawn);
UClass* Z_Construct_UClass_ADronePawn_NoRegister()
{
	return ADronePawn::StaticClass();
}
struct Z_Construct_UClass_ADronePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DronePawn.h" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XYSpeed_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDSpeed_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirFriction_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XYFloorSpeed_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOnFloor_MetaData[] = {
		{ "Category", "MoveSetting" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "DronePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "DronePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "DronePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "DronePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XYSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UDSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XYFloorSpeed;
	static void NewProp_IsOnFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnFloor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADronePawn_Look, "Look" }, // 1306233454
		{ &Z_Construct_UFunction_ADronePawn_MoveUD, "MoveUD" }, // 769922946
		{ &Z_Construct_UFunction_ADronePawn_MoveXY, "MoveXY" }, // 3373007433
		{ &Z_Construct_UFunction_ADronePawn_Roll, "Roll" }, // 3256954524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADronePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensitivity_MetaData), NewProp_Sensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_XYSpeed = { "XYSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, XYSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XYSpeed_MetaData), NewProp_XYSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_UDSpeed = { "UDSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, UDSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDSpeed_MetaData), NewProp_UDSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_AirFriction = { "AirFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, AirFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirFriction_MetaData), NewProp_AirFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_XYFloorSpeed = { "XYFloorSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, XYFloorSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XYFloorSpeed_MetaData), NewProp_XYFloorSpeed_MetaData) };
void Z_Construct_UClass_ADronePawn_Statics::NewProp_IsOnFloor_SetBit(void* Obj)
{
	((ADronePawn*)Obj)->IsOnFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_IsOnFloor = { "IsOnFloor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADronePawn), &Z_Construct_UClass_ADronePawn_Statics::NewProp_IsOnFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOnFloor_MetaData), NewProp_IsOnFloor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADronePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_Sensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_XYSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_UDSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_AirFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_XYFloorSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_IsOnFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADronePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADronePawn_Statics::ClassParams = {
	&ADronePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADronePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ADronePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADronePawn()
{
	if (!Z_Registration_Info_UClass_ADronePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADronePawn.OuterSingleton, Z_Construct_UClass_ADronePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADronePawn.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<ADronePawn>()
{
	return ADronePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADronePawn);
ADronePawn::~ADronePawn() {}
// End Class ADronePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADronePawn, ADronePawn::StaticClass, TEXT("ADronePawn"), &Z_Registration_Info_UClass_ADronePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADronePawn), 515318386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_2771587440(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
