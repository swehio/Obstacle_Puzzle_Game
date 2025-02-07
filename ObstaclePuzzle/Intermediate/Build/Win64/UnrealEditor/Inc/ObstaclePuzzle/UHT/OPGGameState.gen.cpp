// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/Public/OPGGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPGGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGGameState();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AOPGGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AOPGGameState Function EndLevel
struct Z_Construct_UFunction_AOPGGameState_EndLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGGameState_EndLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGGameState, nullptr, "EndLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGGameState_EndLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGGameState_EndLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGGameState_EndLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGGameState_EndLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGGameState::execEndLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndLevel();
	P_NATIVE_END;
}
// End Class AOPGGameState Function EndLevel

// Begin Class AOPGGameState Function OnGameOver
struct Z_Construct_UFunction_AOPGGameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGGameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGGameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGGameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGGameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGGameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGGameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGGameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class AOPGGameState Function OnGameOver

// Begin Class AOPGGameState Function StartGame
struct Z_Construct_UFunction_AOPGGameState_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOPGGameState_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOPGGameState, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOPGGameState_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOPGGameState_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOPGGameState_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOPGGameState_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOPGGameState::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class AOPGGameState Function StartGame

// Begin Class AOPGGameState
void AOPGGameState::StaticRegisterNativesAOPGGameState()
{
	UClass* Class = AOPGGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndLevel", &AOPGGameState::execEndLevel },
		{ "OnGameOver", &AOPGGameState::execOnGameOver },
		{ "StartGame", &AOPGGameState::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOPGGameState);
UClass* Z_Construct_UClass_AOPGGameState_NoRegister()
{
	return AOPGGameState::StaticClass();
}
struct Z_Construct_UClass_AOPGGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OPGGameState.h" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseDuration_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhase_MetaData[] = {
		{ "Category", "Phase" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/OPGGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PhaseDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPhase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOPGGameState_EndLevel, "EndLevel" }, // 1308632625
		{ &Z_Construct_UFunction_AOPGGameState_OnGameOver, "OnGameOver" }, // 3129022738
		{ &Z_Construct_UFunction_AOPGGameState_StartGame, "StartGame" }, // 2301395873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPGGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_PhaseDuration = { "PhaseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, PhaseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseDuration_MetaData), NewProp_PhaseDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, CurrentPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_MaxPhase = { "MaxPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, MaxPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhase_MetaData), NewProp_MaxPhase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOPGGameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOPGGameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOPGGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_PhaseDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_MaxPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOPGGameState_Statics::NewProp_LevelMapNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOPGGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPGGameState_Statics::ClassParams = {
	&AOPGGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOPGGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOPGGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPGGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPGGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPGGameState()
{
	if (!Z_Registration_Info_UClass_AOPGGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPGGameState.OuterSingleton, Z_Construct_UClass_AOPGGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPGGameState.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AOPGGameState>()
{
	return AOPGGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPGGameState);
AOPGGameState::~AOPGGameState() {}
// End Class AOPGGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPGGameState, AOPGGameState::StaticClass, TEXT("AOPGGameState"), &Z_Registration_Info_UClass_AOPGGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPGGameState), 2411073521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_32716720(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
