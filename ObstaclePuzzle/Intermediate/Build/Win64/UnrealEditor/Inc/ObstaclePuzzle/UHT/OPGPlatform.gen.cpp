// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGPlatform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AOPGPlatform
void AOPGPlatform::StaticRegisterNativesAOPGPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOPGPlatform);
UClass* Z_Construct_UClass_AOPGPlatform_NoRegister()
{
	return AOPGPlatform::StaticClass();
}
struct Z_Construct_UClass_AOPGPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OPGPlatform.h" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "OPGPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "OPGPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "OPGPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDelay_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/OPGPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPGPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlatform_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlatform, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlatform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlatform, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOPGPlatform_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlatform, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOPGPlatform_Statics::NewProp_RepeatTime = { "RepeatTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlatform, RepeatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatTime_MetaData), NewProp_RepeatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOPGPlatform_Statics::NewProp_DropDelay = { "DropDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGPlatform, DropDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDelay_MetaData), NewProp_DropDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOPGPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlatform_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlatform_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlatform_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlatform_Statics::NewProp_RepeatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGPlatform_Statics::NewProp_DropDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOPGPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPGPlatform_Statics::ClassParams = {
	&AOPGPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOPGPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPGPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPGPlatform()
{
	if (!Z_Registration_Info_UClass_AOPGPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPGPlatform.OuterSingleton, Z_Construct_UClass_AOPGPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPGPlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AOPGPlatform>()
{
	return AOPGPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPGPlatform);
AOPGPlatform::~AOPGPlatform() {}
// End Class AOPGPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPGPlatform, AOPGPlatform::StaticClass, TEXT("AOPGPlatform"), &Z_Registration_Info_UClass_AOPGPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPGPlatform), 2204518234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlatform_h_544810617(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
