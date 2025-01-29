// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/MovingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_UMovingComponent();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_UMovingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class UMovingComponent
void UMovingComponent::StaticRegisterNativesUMovingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovingComponent);
UClass* Z_Construct_UClass_UMovingComponent_NoRegister()
{
	return UMovingComponent::StaticClass();
}
struct Z_Construct_UClass_UMovingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovingComponent.h" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDist_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_addSpeed_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveX_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveY_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveZ_MetaData[] = {
		{ "Category", "MovingComponent" },
		{ "ModuleRelativePath", "Public/MovingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_addSpeed;
	static void NewProp_MoveX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveX;
	static void NewProp_MoveY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveY;
	static void NewProp_MoveZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveDist = { "MoveDist", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovingComponent, MoveDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDist_MetaData), NewProp_MoveDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovingComponent, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovingComponent, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_addSpeed = { "addSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovingComponent, addSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_addSpeed_MetaData), NewProp_addSpeed_MetaData) };
void Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveX_SetBit(void* Obj)
{
	((UMovingComponent*)Obj)->MoveX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveX = { "MoveX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovingComponent), &Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveX_MetaData), NewProp_MoveX_MetaData) };
void Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveY_SetBit(void* Obj)
{
	((UMovingComponent*)Obj)->MoveY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveY = { "MoveY", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovingComponent), &Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveY_MetaData), NewProp_MoveY_MetaData) };
void Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveZ_SetBit(void* Obj)
{
	((UMovingComponent*)Obj)->MoveZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveZ = { "MoveZ", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovingComponent), &Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveZ_MetaData), NewProp_MoveZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_addSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingComponent_Statics::NewProp_MoveZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovingComponent_Statics::ClassParams = {
	&UMovingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovingComponent()
{
	if (!Z_Registration_Info_UClass_UMovingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovingComponent.OuterSingleton, Z_Construct_UClass_UMovingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovingComponent.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<UMovingComponent>()
{
	return UMovingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovingComponent);
UMovingComponent::~UMovingComponent() {}
// End Class UMovingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovingComponent, UMovingComponent::StaticClass, TEXT("UMovingComponent"), &Z_Registration_Info_UClass_UMovingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovingComponent), 3695281156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_2645227351(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
