// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlayerController();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AOPGPlayerController
void AOPGPlayerController::StaticRegisterNativesAOPGPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOPGPlayerController);
UClass* Z_Construct_UClass_AOPGPlayerController_NoRegister()
{
	return AOPGPlayerController::StaticClass();
}
struct Z_Construct_UClass_AOPGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OPGPlayerController.h" },
		{ "ModuleRelativePath", "Public/OPGPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOPGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPGPlayerController_Statics::ClassParams = {
	&AOPGPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPGPlayerController()
{
	if (!Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton, Z_Construct_UClass_AOPGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPGPlayerController.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AOPGPlayerController>()
{
	return AOPGPlayerController::StaticClass();
}
AOPGPlayerController::AOPGPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPGPlayerController);
AOPGPlayerController::~AOPGPlayerController() {}
// End Class AOPGPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPGPlayerController, AOPGPlayerController::StaticClass, TEXT("AOPGPlayerController"), &Z_Registration_Info_UClass_AOPGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPGPlayerController), 1821904747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_1024175379(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
