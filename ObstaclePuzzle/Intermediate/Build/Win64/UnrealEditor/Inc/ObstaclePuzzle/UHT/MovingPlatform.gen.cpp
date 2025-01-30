// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}

// Begin Cross Module References
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AMovingPlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AMovingPlatform Function SetMoveSpeed
struct Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics
{
	struct MovingPlatform_eventSetMoveSpeed_Parms
	{
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform_eventSetMoveSpeed_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "SetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::MovingPlatform_eventSetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::MovingPlatform_eventSetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform::execSetMoveSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveSpeed(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class AMovingPlatform Function SetMoveSpeed

// Begin Class AMovingPlatform
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
	UClass* Class = AMovingPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMoveSpeed", &AMovingPlatform::execSetMoveSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "Public/MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MovingPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//UMovingComponent* MovingComp;\n" },
#endif
		{ "ModuleRelativePath", "Public/MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nUMovingComponent* MovingComp;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "Public/MovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform_SetMoveSpeed, "SetMoveSpeed" }, // 1925137620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AMovingPlatform>()
{
	return AMovingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// End Class AMovingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 3435541102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingPlatform_h_2440322168(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
