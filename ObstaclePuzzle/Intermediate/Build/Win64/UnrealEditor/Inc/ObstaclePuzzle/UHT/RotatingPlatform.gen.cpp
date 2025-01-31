// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/RotatingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingPlatform() {}

// Begin Cross Module References
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ABasePlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ARotatingPlatform();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class ARotatingPlatform
void ARotatingPlatform::StaticRegisterNativesARotatingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingPlatform);
UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister()
{
	return ARotatingPlatform::StaticClass();
}
struct Z_Construct_UClass_ARotatingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingPlatform.h" },
		{ "ModuleRelativePath", "Public/RotatingPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams = {
	&ARotatingPlatform::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingPlatform()
{
	if (!Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton, Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<ARotatingPlatform>()
{
	return ARotatingPlatform::StaticClass();
}
ARotatingPlatform::ARotatingPlatform() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingPlatform);
ARotatingPlatform::~ARotatingPlatform() {}
// End Class ARotatingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingPlatform, ARotatingPlatform::StaticClass, TEXT("ARotatingPlatform"), &Z_Registration_Info_UClass_ARotatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingPlatform), 2971918175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_3939148094(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
