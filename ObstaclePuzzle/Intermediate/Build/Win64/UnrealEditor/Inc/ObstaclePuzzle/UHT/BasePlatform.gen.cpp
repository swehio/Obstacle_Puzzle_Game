// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/BasePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlatform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_UPlatformInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class ABasePlatform Function GetDamage
struct Z_Construct_UFunction_ABasePlatform_GetDamage_Statics
{
	struct BasePlatform_eventGetDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlatform_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "GetDamage", nullptr, nullptr, Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::BasePlatform_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::BasePlatform_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlatform_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlatform_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlatform::execGetDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamage();
	P_NATIVE_END;
}
// End Class ABasePlatform Function GetDamage

// Begin Class ABasePlatform
void ABasePlatform::StaticRegisterNativesABasePlatform()
{
	UClass* Class = ABasePlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDamage", &ABasePlatform::execGetDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlatform);
UClass* Z_Construct_UClass_ABasePlatform_NoRegister()
{
	return ABasePlatform::StaticClass();
}
struct Z_Construct_UClass_ABasePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BasePlatform.h" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSpeed_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMovePlatform_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformDamage_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlatformOverlapDoOnce_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/BasePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlatformSpeed;
	static void NewProp_ShouldMovePlatform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMovePlatform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlatformDamage;
	static void NewProp_bPlatformOverlapDoOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlatformOverlapDoOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlatform_GetDamage, "GetDamage" }, // 980043730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, PlatformType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformType_MetaData), NewProp_PlatformType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformSpeed = { "PlatformSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, PlatformSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSpeed_MetaData), NewProp_PlatformSpeed_MetaData) };
void Z_Construct_UClass_ABasePlatform_Statics::NewProp_ShouldMovePlatform_SetBit(void* Obj)
{
	((ABasePlatform*)Obj)->ShouldMovePlatform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_ShouldMovePlatform = { "ShouldMovePlatform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasePlatform), &Z_Construct_UClass_ABasePlatform_Statics::NewProp_ShouldMovePlatform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMovePlatform_MetaData), NewProp_ShouldMovePlatform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformDamage = { "PlatformDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlatform, PlatformDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformDamage_MetaData), NewProp_PlatformDamage_MetaData) };
void Z_Construct_UClass_ABasePlatform_Statics::NewProp_bPlatformOverlapDoOnce_SetBit(void* Obj)
{
	((ABasePlatform*)Obj)->bPlatformOverlapDoOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_bPlatformOverlapDoOnce = { "bPlatformOverlapDoOnce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasePlatform), &Z_Construct_UClass_ABasePlatform_Statics::NewProp_bPlatformOverlapDoOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlatformOverlapDoOnce_MetaData), NewProp_bPlatformOverlapDoOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_ShouldMovePlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_bPlatformOverlapDoOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABasePlatform_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlatformInterface_NoRegister, (int32)VTABLE_OFFSET(ABasePlatform, IPlatformInterface), false },  // 3378569724
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlatform_Statics::ClassParams = {
	&ABasePlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlatform_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlatform()
{
	if (!Z_Registration_Info_UClass_ABasePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlatform.OuterSingleton, Z_Construct_UClass_ABasePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<ABasePlatform>()
{
	return ABasePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlatform);
ABasePlatform::~ABasePlatform() {}
// End Class ABasePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlatform, ABasePlatform::StaticClass, TEXT("ABasePlatform"), &Z_Registration_Info_UClass_ABasePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlatform), 612909951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_3755744101(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
