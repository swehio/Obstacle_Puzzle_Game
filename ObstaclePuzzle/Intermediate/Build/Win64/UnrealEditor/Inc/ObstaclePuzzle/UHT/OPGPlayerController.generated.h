// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPGPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSTACLEPUZZLE_OPGPlayerController_generated_h
#error "OPGPlayerController.generated.h already included, missing '#pragma once' in OPGPlayerController.h"
#endif
#define OBSTACLEPUZZLE_OPGPlayerController_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPGPlayerController(); \
	friend struct Z_Construct_UClass_AOPGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AOPGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(AOPGPlayerController)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOPGPlayerController(AOPGPlayerController&&); \
	AOPGPlayerController(const AOPGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOPGPlayerController) \
	NO_API virtual ~AOPGPlayerController();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_12_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class AOPGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_OPGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
