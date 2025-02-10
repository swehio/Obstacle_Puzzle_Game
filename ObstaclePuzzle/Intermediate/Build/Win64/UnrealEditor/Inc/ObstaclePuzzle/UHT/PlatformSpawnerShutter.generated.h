// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformSpawnerShutter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_PlatformSpawnerShutter_generated_h
#error "PlatformSpawnerShutter.generated.h already included, missing '#pragma once' in PlatformSpawnerShutter.h"
#endif
#define OBSTACLEPUZZLE_PlatformSpawnerShutter_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComparePhase);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformSpawnerShutter(); \
	friend struct Z_Construct_UClass_APlatformSpawnerShutter_Statics; \
public: \
	DECLARE_CLASS(APlatformSpawnerShutter, APlatformSpawner, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(APlatformSpawnerShutter)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlatformSpawnerShutter(APlatformSpawnerShutter&&); \
	APlatformSpawnerShutter(const APlatformSpawnerShutter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformSpawnerShutter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformSpawnerShutter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformSpawnerShutter) \
	NO_API virtual ~APlatformSpawnerShutter();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_12_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class APlatformSpawnerShutter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawnerShutter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
