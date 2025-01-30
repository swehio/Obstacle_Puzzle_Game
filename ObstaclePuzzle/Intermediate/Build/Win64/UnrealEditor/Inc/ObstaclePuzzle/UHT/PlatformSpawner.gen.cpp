// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/PlatformSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_APlatformSpawner();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_APlatformSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class APlatformSpawner Function SpawnActor
struct Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics
{
	struct PlatformSpawner_eventSpawnActor_Parms
	{
		TSubclassOf<AActor> PlatformClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::NewProp_PlatformClass = { "PlatformClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformSpawner_eventSpawnActor_Parms, PlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformSpawner_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::NewProp_PlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformSpawner, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PlatformSpawner_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::PlatformSpawner_eventSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlatformSpawner_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformSpawner_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlatformSpawner::execSpawnActor)
{
	P_GET_OBJECT(UClass,Z_Param_PlatformClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnActor(Z_Param_PlatformClass);
	P_NATIVE_END;
}
// End Class APlatformSpawner Function SpawnActor

// Begin Class APlatformSpawner Function SpawnRandomPlatform
struct Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics
{
	struct PlatformSpawner_eventSpawnRandomPlatform_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformSpawner_eventSpawnRandomPlatform_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformSpawner, nullptr, "SpawnRandomPlatform", nullptr, nullptr, Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PlatformSpawner_eventSpawnRandomPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::PlatformSpawner_eventSpawnRandomPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlatformSpawner::execSpawnRandomPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnRandomPlatform();
	P_NATIVE_END;
}
// End Class APlatformSpawner Function SpawnRandomPlatform

// Begin Class APlatformSpawner Function VoidSpawnRandomPlatform
struct Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformSpawner, nullptr, "VoidSpawnRandomPlatform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlatformSpawner::execVoidSpawnRandomPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VoidSpawnRandomPlatform();
	P_NATIVE_END;
}
// End Class APlatformSpawner Function VoidSpawnRandomPlatform

// Begin Class APlatformSpawner
void APlatformSpawner::StaticRegisterNativesAPlatformSpawner()
{
	UClass* Class = APlatformSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnActor", &APlatformSpawner::execSpawnActor },
		{ "SpawnRandomPlatform", &APlatformSpawner::execSpawnRandomPlatform },
		{ "VoidSpawnRandomPlatform", &APlatformSpawner::execVoidSpawnRandomPlatform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformSpawner);
UClass* Z_Construct_UClass_APlatformSpawner_NoRegister()
{
	return APlatformSpawner::StaticClass();
}
struct Z_Construct_UClass_APlatformSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformSpawner.h" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnVolume_MetaData[] = {
		{ "Category", "PlatformSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformDataTable_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd5\xbf\xef\xbf\xbd class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!\n" },
#endif
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xbf\xef\xbf\xbd class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformSpawner_SpawnActor, "SpawnActor" }, // 4253125655
		{ &Z_Construct_UFunction_APlatformSpawner_SpawnRandomPlatform, "SpawnRandomPlatform" }, // 2466756952
		{ &Z_Construct_UFunction_APlatformSpawner_VoidSpawnRandomPlatform, "VoidSpawnRandomPlatform" }, // 97177767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_SpawnVolume = { "SpawnVolume", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformSpawner, SpawnVolume), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnVolume_MetaData), NewProp_SpawnVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_PlatformDataTable = { "PlatformDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformSpawner, PlatformDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformDataTable_MetaData), NewProp_PlatformDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_SpawnVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_PlatformDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformSpawner_Statics::ClassParams = {
	&APlatformSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlatformSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformSpawner()
{
	if (!Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton, Z_Construct_UClass_APlatformSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<APlatformSpawner>()
{
	return APlatformSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformSpawner);
APlatformSpawner::~APlatformSpawner() {}
// End Class APlatformSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformSpawner, APlatformSpawner::StaticClass, TEXT("APlatformSpawner"), &Z_Registration_Info_UClass_APlatformSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformSpawner), 2940948543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_1610038566(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
