// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DronePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
struct FInputActionValue;
#ifdef OBSTACLEPUZZLE_DronePawn_generated_h
#error "DronePawn.generated.h already included, missing '#pragma once' in DronePawn.h"
#endif
#define OBSTACLEPUZZLE_DronePawn_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMoveUD); \
	DECLARE_FUNCTION(execMoveXY); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOperateHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADronePawn(); \
	friend struct Z_Construct_UClass_ADronePawn_Statics; \
public: \
	DECLARE_CLASS(ADronePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(ADronePawn)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADronePawn(ADronePawn&&); \
	ADronePawn(const ADronePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADronePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADronePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADronePawn) \
	NO_API virtual ~ADronePawn();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_14_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class ADronePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DronePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
