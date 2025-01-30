// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/GapPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGapPlatform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AGapPlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AGapPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AGapPlatform
void AGapPlatform::StaticRegisterNativesAGapPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGapPlatform);
UClass* Z_Construct_UClass_AGapPlatform_NoRegister()
{
	return AGapPlatform::StaticClass();
}
struct Z_Construct_UClass_AGapPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GapPlatform.h" },
		{ "ModuleRelativePath", "Public/GapPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh2_MetaData[] = {
		{ "Category", "GapPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GapPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGapPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGapPlatform_Statics::NewProp_StaticMesh2 = { "StaticMesh2", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGapPlatform, StaticMesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh2_MetaData), NewProp_StaticMesh2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGapPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGapPlatform_Statics::NewProp_StaticMesh2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGapPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGapPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGapPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGapPlatform_Statics::ClassParams = {
	&AGapPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGapPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGapPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGapPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AGapPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGapPlatform()
{
	if (!Z_Registration_Info_UClass_AGapPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGapPlatform.OuterSingleton, Z_Construct_UClass_AGapPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGapPlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AGapPlatform>()
{
	return AGapPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGapPlatform);
AGapPlatform::~AGapPlatform() {}
// End Class AGapPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGapPlatform, AGapPlatform::StaticClass, TEXT("AGapPlatform"), &Z_Registration_Info_UClass_AGapPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGapPlatform), 151741100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_271631266(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
