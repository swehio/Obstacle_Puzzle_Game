// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_OPGCharacter_generated_h
#error "OPGCharacter.generated.h already included, missing '#pragma once' in OPGCharacter.h"
#endif
#define OBSTACLEPUZZLE_OPGCharacter_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPGCharacter(); \
	friend struct Z_Construct_UClass_AOPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AOPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(AOPGCharacter)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOPGCharacter(AOPGCharacter&&); \
	AOPGCharacter(const AOPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOPGCharacter) \
	NO_API virtual ~AOPGCharacter();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_9_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class AOPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
