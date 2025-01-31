// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestroyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef OBSTACLEPUZZLE_DestroyActor_generated_h
#error "DestroyActor.generated.h already included, missing '#pragma once' in DestroyActor.h"
#endif
#define OBSTACLEPUZZLE_DestroyActor_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlatformOverlap);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyActor(); \
	friend struct Z_Construct_UClass_ADestroyActor_Statics; \
public: \
	DECLARE_CLASS(ADestroyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), NO_API) \
	DECLARE_SERIALIZER(ADestroyActor)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADestroyActor(ADestroyActor&&); \
	ADestroyActor(const ADestroyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestroyActor) \
	NO_API virtual ~ADestroyActor();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_9_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class ADestroyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_DestroyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
