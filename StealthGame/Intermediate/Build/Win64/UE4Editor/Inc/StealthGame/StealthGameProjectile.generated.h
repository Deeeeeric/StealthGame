// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STEALTHGAME_StealthGameProjectile_generated_h
#error "StealthGameProjectile.generated.h already included, missing '#pragma once' in StealthGameProjectile.h"
#endif
#define STEALTHGAME_StealthGameProjectile_generated_h

#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_SPARSE_DATA
#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthGameProjectile(); \
	friend struct Z_Construct_UClass_AStealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AStealthGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStealthGameProjectile(); \
	friend struct Z_Construct_UClass_AStealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AStealthGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameProjectile(AStealthGameProjectile&&); \
	NO_API AStealthGameProjectile(const AStealthGameProjectile&); \
public:


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameProjectile(AStealthGameProjectile&&); \
	NO_API AStealthGameProjectile(const AStealthGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthGameProjectile)


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AStealthGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AStealthGameProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AStealthGameProjectile, ExplosionEffect); }


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_12_PROLOG
#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_INCLASS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_StealthGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AStealthGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_StealthGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
