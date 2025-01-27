// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef OBSTACLEPUZZLE_PlatformInterface_generated_h
#error "PlatformInterface.generated.h already included, missing '#pragma once' in PlatformInterface.h"
#endif
#define OBSTACLEPUZZLE_PlatformInterface_generated_h

#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlatformEndOverlap); \
	DECLARE_FUNCTION(execOnPlatformOverlap);


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSTACLEPUZZLE_API UPlatformInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlatformInterface(UPlatformInterface&&); \
	UPlatformInterface(const UPlatformInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSTACLEPUZZLE_API, UPlatformInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterface) \
	OBSTACLEPUZZLE_API virtual ~UPlatformInterface();


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlatformInterface(); \
	friend struct Z_Construct_UClass_UPlatformInterface_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObstaclePuzzle"), OBSTACLEPUZZLE_API) \
	DECLARE_SERIALIZER(UPlatformInterface)


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlatformInterface() {} \
public: \
	typedef UPlatformInterface UClassType; \
	typedef IPlatformInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_10_PROLOG
#define FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSTACLEPUZZLE_API UClass* StaticClass<class UPlatformInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclePuzzle_Source_ObstaclePuzzle_Public_PlatformInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
