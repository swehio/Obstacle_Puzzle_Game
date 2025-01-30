// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef OBSTACLEPUZZLE_PlatformSpawner_generated_h
#error "PlatformSpawner.generated.h already included, missing '#pragma once' in PlatformSpawner.h"
#endif
#define OBSTACLEPUZZLE_PlatformSpawner_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVoidSpawnRandomPlatform); \
	DECLARE_FUNCTION(execSpawnRandomPlatform); \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformSpawner(); \
	friend struct Z_Construct_UClass_APlatformSpawner_Statics; \
public: \
	DECLARE_CLASS(APlatformSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(APlatformSpawner)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlatformSpawner(APlatformSpawner&&); \
	APlatformSpawner(const APlatformSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformSpawner) \
	NO_API virtual ~APlatformSpawner();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_11_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class APlatformSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
