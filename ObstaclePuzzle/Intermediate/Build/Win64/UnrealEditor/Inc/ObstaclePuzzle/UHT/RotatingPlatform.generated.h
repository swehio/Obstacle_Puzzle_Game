// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotatingPlatform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_RotatingPlatform_generated_h
#error "RotatingPlatform.generated.h already included, missing '#pragma once' in RotatingPlatform.h"
#endif
#define OBSTACLEPUZZLE_RotatingPlatform_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotatingPlatform(); \
	friend struct Z_Construct_UClass_ARotatingPlatform_Statics; \
public: \
	DECLARE_CLASS(ARotatingPlatform, ABasePlatform, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(ARotatingPlatform)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARotatingPlatform(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARotatingPlatform(ARotatingPlatform&&); \
	ARotatingPlatform(const ARotatingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotatingPlatform) \
	NO_API virtual ~ARotatingPlatform();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_9_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class ARotatingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_RotatingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
