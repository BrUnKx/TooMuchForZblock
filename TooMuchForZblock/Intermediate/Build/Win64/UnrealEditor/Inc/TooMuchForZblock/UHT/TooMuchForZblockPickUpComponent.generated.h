// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TooMuchForZblockPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATooMuchForZblockCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TOOMUCHFORZBLOCK_TooMuchForZblockPickUpComponent_generated_h
#error "TooMuchForZblockPickUpComponent.generated.h already included, missing '#pragma once' in TooMuchForZblockPickUpComponent.h"
#endif
#define TOOMUCHFORZBLOCK_TooMuchForZblockPickUpComponent_generated_h

#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_12_DELEGATE \
TOOMUCHFORZBLOCK_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ATooMuchForZblockCharacter* PickUpCharacter);


#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTooMuchForZblockPickUpComponent(); \
	friend struct Z_Construct_UClass_UTooMuchForZblockPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTooMuchForZblockPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TooMuchForZblock"), NO_API) \
	DECLARE_SERIALIZER(UTooMuchForZblockPickUpComponent)


#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTooMuchForZblockPickUpComponent(UTooMuchForZblockPickUpComponent&&); \
	UTooMuchForZblockPickUpComponent(const UTooMuchForZblockPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTooMuchForZblockPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTooMuchForZblockPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTooMuchForZblockPickUpComponent) \
	NO_API virtual ~UTooMuchForZblockPickUpComponent();


#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_14_PROLOG
#define FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOMUCHFORZBLOCK_API UClass* StaticClass<class UTooMuchForZblockPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
