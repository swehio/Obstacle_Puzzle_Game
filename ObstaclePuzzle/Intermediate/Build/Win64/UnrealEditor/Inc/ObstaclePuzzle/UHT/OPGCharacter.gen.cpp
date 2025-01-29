// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGCharacter();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AOPGCharacter
void AOPGCharacter::StaticRegisterNativesAOPGCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOPGCharacter);
UClass* Z_Construct_UClass_AOPGCharacter_NoRegister()
{
	return AOPGCharacter::StaticClass();
}
struct Z_Construct_UClass_AOPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OPGCharacter.h" },
		{ "ModuleRelativePath", "Public/OPGCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPGCharacter_Statics::ClassParams = {
	&AOPGCharacter::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPGCharacter()
{
	if (!Z_Registration_Info_UClass_AOPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPGCharacter.OuterSingleton, Z_Construct_UClass_AOPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPGCharacter.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AOPGCharacter>()
{
	return AOPGCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPGCharacter);
AOPGCharacter::~AOPGCharacter() {}
// End Class AOPGCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPGCharacter, AOPGCharacter::StaticClass, TEXT("AOPGCharacter"), &Z_Registration_Info_UClass_AOPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPGCharacter), 2805876290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_497357329(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
