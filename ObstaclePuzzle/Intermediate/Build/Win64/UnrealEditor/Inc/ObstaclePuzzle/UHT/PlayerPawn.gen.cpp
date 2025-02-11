// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/PlayerPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_APlayerPawn();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class APlayerPawn Function Look
struct Z_Construct_UFunction_APlayerPawn_Look_Statics
{
	struct PlayerPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_APlayerPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawn_Look_Statics::PlayerPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerPawn_Look_Statics::PlayerPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayerPawn Function Look

// Begin Class APlayerPawn Function Move
struct Z_Construct_UFunction_APlayerPawn_Move_Statics
{
	struct PlayerPawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_APlayerPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawn_Move_Statics::PlayerPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerPawn_Move_Statics::PlayerPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class APlayerPawn Function Move

// Begin Class APlayerPawn
void APlayerPawn::StaticRegisterNativesAPlayerPawn()
{
	UClass* Class = APlayerPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &APlayerPawn::execLook },
		{ "Move", &APlayerPawn::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
{
	return APlayerPawn::StaticClass();
}
struct Z_Construct_UClass_APlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawn_Look, "Look" }, // 1262974821
		{ &Z_Construct_UFunction_APlayerPawn_Move, "Move" }, // 2992150092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensitivity_MetaData), NewProp_Sensitivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
	&APlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerPawn()
{
	if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<APlayerPawn>()
{
	return APlayerPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
APlayerPawn::~APlayerPawn() {}
// End Class APlayerPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 536345650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_2531685188(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
