// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/DropingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropingPlatform() {}

// Begin Cross Module References
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ADropingPlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ADropingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class ADropingPlatform
void ADropingPlatform::StaticRegisterNativesADropingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADropingPlatform);
UClass* Z_Construct_UClass_ADropingPlatform_NoRegister()
{
	return ADropingPlatform::StaticClass();
}
struct Z_Construct_UClass_ADropingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DropingPlatform.h" },
		{ "ModuleRelativePath", "Public/DropingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDelay_MetaData[] = {
		{ "Category", "DropingPlatform" },
		{ "ModuleRelativePath", "Public/DropingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADropingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADropingPlatform_Statics::NewProp_DropDelay = { "DropDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADropingPlatform, DropDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDelay_MetaData), NewProp_DropDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADropingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropingPlatform_Statics::NewProp_DropDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADropingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADropingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADropingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADropingPlatform_Statics::ClassParams = {
	&ADropingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADropingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADropingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADropingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ADropingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADropingPlatform()
{
	if (!Z_Registration_Info_UClass_ADropingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADropingPlatform.OuterSingleton, Z_Construct_UClass_ADropingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADropingPlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<ADropingPlatform>()
{
	return ADropingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADropingPlatform);
ADropingPlatform::~ADropingPlatform() {}
// End Class ADropingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DropingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADropingPlatform, ADropingPlatform::StaticClass, TEXT("ADropingPlatform"), &Z_Registration_Info_UClass_ADropingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADropingPlatform), 1748108486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DropingPlatform_h_2800595747(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DropingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DropingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
