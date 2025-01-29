// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePlatform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_BasePlatform_generated_h
#error "BasePlatform.generated.h already included, missing '#pragma once' in BasePlatform.h"
#endif
#define OBSTACLEPUZZLE_BasePlatform_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlatform(); \
	friend struct Z_Construct_UClass_ABasePlatform_Statics; \
public: \
	DECLARE_CLASS(ABasePlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(ABasePlatform) \
	virtual UObject* _getUObject() const override { return const_cast<ABasePlatform*>(this); }


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlatform(ABasePlatform&&); \
	ABasePlatform(const ABasePlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlatform) \
	NO_API virtual ~ABasePlatform();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_13_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_16_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class ABasePlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_BasePlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
