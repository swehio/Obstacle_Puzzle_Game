// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/RotatingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_URotatingComponent();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_URotatingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class URotatingComponent
void URotatingComponent::StaticRegisterNativesURotatingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotatingComponent);
UClass* Z_Construct_UClass_URotatingComponent_NoRegister()
{
	return URotatingComponent::StaticClass();
}
struct Z_Construct_UClass_URotatingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RotatingComponent.h" },
		{ "ModuleRelativePath", "Public/RotatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedX_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Public/RotatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedY_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Public/RotatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedZ_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Public/RotatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedX = { "RotationSpeedX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatingComponent, RotationSpeedX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedX_MetaData), NewProp_RotationSpeedX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedY = { "RotationSpeedY", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatingComponent, RotationSpeedY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedY_MetaData), NewProp_RotationSpeedY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedZ = { "RotationSpeedZ", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatingComponent, RotationSpeedZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedZ_MetaData), NewProp_RotationSpeedZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotatingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingComponent_Statics::NewProp_RotationSpeedZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URotatingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotatingComponent_Statics::ClassParams = {
	&URotatingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URotatingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URotatingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotatingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URotatingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotatingComponent()
{
	if (!Z_Registration_Info_UClass_URotatingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotatingComponent.OuterSingleton, Z_Construct_UClass_URotatingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotatingComponent.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<URotatingComponent>()
{
	return URotatingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotatingComponent);
URotatingComponent::~URotatingComponent() {}
// End Class URotatingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URotatingComponent, URotatingComponent::StaticClass, TEXT("URotatingComponent"), &Z_Registration_Info_UClass_URotatingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotatingComponent), 984489359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingComponent_h_2519627744(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
