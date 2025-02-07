// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_UOPGGameInstance();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_UOPGGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class UOPGGameInstance
void UOPGGameInstance::StaticRegisterNativesUOPGGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOPGGameInstance);
UClass* Z_Construct_UClass_UOPGGameInstance_NoRegister()
{
	return UOPGGameInstance::StaticClass();
}
struct Z_Construct_UClass_UOPGGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OPGGameInstance.h" },
		{ "ModuleRelativePath", "Public/OPGGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/OPGGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOPGGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOPGGameInstance_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOPGGameInstance, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOPGGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOPGGameInstance_Statics::NewProp_CurrentLevelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOPGGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOPGGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOPGGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOPGGameInstance_Statics::ClassParams = {
	&UOPGGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOPGGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOPGGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOPGGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UOPGGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOPGGameInstance()
{
	if (!Z_Registration_Info_UClass_UOPGGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOPGGameInstance.OuterSingleton, Z_Construct_UClass_UOPGGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOPGGameInstance.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<UOPGGameInstance>()
{
	return UOPGGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOPGGameInstance);
UOPGGameInstance::~UOPGGameInstance() {}
// End Class UOPGGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOPGGameInstance, UOPGGameInstance::StaticClass, TEXT("UOPGGameInstance"), &Z_Registration_Info_UClass_UOPGGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOPGGameInstance), 3688910765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameInstance_h_3636002984(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
