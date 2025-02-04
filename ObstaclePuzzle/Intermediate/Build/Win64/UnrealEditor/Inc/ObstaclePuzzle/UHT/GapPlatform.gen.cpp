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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGapPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AGapPlatform, AGapPlatform::StaticClass, TEXT("AGapPlatform"), &Z_Registration_Info_UClass_AGapPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGapPlatform), 1278091900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_3227172370(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_GapPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
