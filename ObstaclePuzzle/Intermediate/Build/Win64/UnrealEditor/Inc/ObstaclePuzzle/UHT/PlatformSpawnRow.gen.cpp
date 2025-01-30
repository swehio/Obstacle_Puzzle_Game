// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/PlatformSpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSpawnRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
OBSTACLEPUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformSpawnRow();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin ScriptStruct FPlatformSpawnRow
static_assert(std::is_polymorphic<FPlatformSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlatformSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformSpawnRow;
class UScriptStruct* FPlatformSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformSpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformSpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformSpawnRow, (UObject*)Z_Construct_UPackage__Script_ObstaclePuzzle(), TEXT("PlatformSpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformSpawnRow.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UScriptStruct* StaticStruct<FPlatformSpawnRow>()
{
	return FPlatformSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlatformSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[] = {
		{ "Category", "PlatformSpawnRow" },
		{ "ModuleRelativePath", "Public/PlatformSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformClass_MetaData[] = {
		{ "Category", "PlatformSpawnRow" },
		{ "ModuleRelativePath", "Public/PlatformSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "PlatformSpawnRow" },
		{ "ModuleRelativePath", "Public/PlatformSpawnRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformSpawnRow, PlatformName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformName_MetaData), NewProp_PlatformName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_PlatformClass = { "PlatformClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformSpawnRow, PlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformClass_MetaData), NewProp_PlatformClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformSpawnRow, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_PlatformName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_PlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewProp_SpawnChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PlatformSpawnRow",
	Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::PropPointers),
	sizeof(FPlatformSpawnRow),
	alignof(FPlatformSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlatformSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformSpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformSpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlatformSpawnRow.InnerSingleton;
}
// End ScriptStruct FPlatformSpawnRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlatformSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FPlatformSpawnRow_Statics::NewStructOps, TEXT("PlatformSpawnRow"), &Z_Registration_Info_UScriptStruct_PlatformSpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformSpawnRow), 20287104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnRow_h_3759609408(TEXT("/Script/ObstaclePuzzle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
