// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef OBSTACLEPUZZLE_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define OBSTACLEPUZZLE_PlayerPawn_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerPawn(APlayerPawn&&); \
	APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn) \
	NO_API virtual ~APlayerPawn();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_13_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
