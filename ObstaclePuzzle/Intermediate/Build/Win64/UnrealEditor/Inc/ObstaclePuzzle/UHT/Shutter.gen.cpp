// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/Shutter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShutter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AShutter();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AShutter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AShutter Function ComparePhase
struct Z_Construct_UFunction_AShutter_ComparePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShutter_ComparePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShutter, nullptr, "ComparePhase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShutter_ComparePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShutter_ComparePhase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShutter_ComparePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShutter_ComparePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShutter::execComparePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComparePhase();
	P_NATIVE_END;
}
// End Class AShutter Function ComparePhase

// Begin Class AShutter
void AShutter::StaticRegisterNativesAShutter()
{
	UClass* Class = AShutter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComparePhase", &AShutter::execComparePhase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShutter);
UClass* Z_Construct_UClass_AShutter_NoRegister()
{
	return AShutter::StaticClass();
}
struct Z_Construct_UClass_AShutter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shutter.h" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[] = {
		{ "Category", "Shutter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Shutter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Shutter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenPhase_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpen_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRange_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/Shutter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenPhase;
	static void NewProp_bOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShutter_ComparePhase, "ComparePhase" }, // 1663058745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShutter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComp_MetaData), NewProp_SceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_OpenPhase = { "OpenPhase", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, OpenPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenPhase_MetaData), NewProp_OpenPhase_MetaData) };
void Z_Construct_UClass_AShutter_Statics::NewProp_bOpen_SetBit(void* Obj)
{
	((AShutter*)Obj)->bOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_bOpen = { "bOpen", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShutter), &Z_Construct_UClass_AShutter_Statics::NewProp_bOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpen_MetaData), NewProp_bOpen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShutter_Statics::NewProp_MoveRange = { "MoveRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShutter, MoveRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRange_MetaData), NewProp_MoveRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShutter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_SceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_OpenPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_bOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShutter_Statics::NewProp_MoveRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShutter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShutter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShutter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShutter_Statics::ClassParams = {
	&AShutter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShutter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShutter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShutter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShutter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShutter()
{
	if (!Z_Registration_Info_UClass_AShutter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShutter.OuterSingleton, Z_Construct_UClass_AShutter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShutter.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AShutter>()
{
	return AShutter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShutter);
AShutter::~AShutter() {}
// End Class AShutter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShutter, AShutter::StaticClass, TEXT("AShutter"), &Z_Registration_Info_UClass_AShutter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShutter), 2763383528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_3759807899(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
