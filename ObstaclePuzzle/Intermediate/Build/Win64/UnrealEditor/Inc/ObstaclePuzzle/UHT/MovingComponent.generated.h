// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_MovingComponent_generated_h
#error "MovingComponent.generated.h already included, missing '#pragma once' in MovingComponent.h"
#endif
#define OBSTACLEPUZZLE_MovingComponent_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovingComponent(); \
	friend struct Z_Construct_UClass_UMovingComponent_Statics; \
public: \
	DECLARE_CLASS(UMovingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(UMovingComponent)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovingComponent(UMovingComponent&&); \
	UMovingComponent(const UMovingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovingComponent) \
	NO_API virtual ~UMovingComponent();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_7_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class UMovingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_MovingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
