// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPGGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_OPGGameState_generated_h
#error "OPGGameState.generated.h already included, missing '#pragma once' in OPGGameState.h"
#endif
#define OBSTACLEPUZZLE_OPGGameState_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndLevel); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execOnGameOver);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPGGameState(); \
	friend struct Z_Construct_UClass_AOPGGameState_Statics; \
public: \
	DECLARE_CLASS(AOPGGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(AOPGGameState)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOPGGameState(AOPGGameState&&); \
	AOPGGameState(const AOPGGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPGGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPGGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOPGGameState) \
	NO_API virtual ~AOPGGameState();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_10_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class AOPGGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
