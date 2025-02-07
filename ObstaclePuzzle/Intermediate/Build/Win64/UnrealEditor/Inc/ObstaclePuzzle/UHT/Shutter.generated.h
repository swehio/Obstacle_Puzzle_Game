// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shutter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_Shutter_generated_h
#error "Shutter.generated.h already included, missing '#pragma once' in Shutter.h"
#endif
#define OBSTACLEPUZZLE_Shutter_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComparePhase);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShutter(); \
	friend struct Z_Construct_UClass_AShutter_Statics; \
public: \
	DECLARE_CLASS(AShutter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(AShutter)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShutter(AShutter&&); \
	AShutter(const AShutter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShutter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShutter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShutter) \
	NO_API virtual ~AShutter();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_9_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class AShutter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_Shutter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
