// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TooMuchForZblockGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTooMuchForZblockGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOOMUCHFORZBLOCK_API UClass* Z_Construct_UClass_ATooMuchForZblockGameMode();
TOOMUCHFORZBLOCK_API UClass* Z_Construct_UClass_ATooMuchForZblockGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TooMuchForZblock();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATooMuchForZblockGameMode ************************************************
void ATooMuchForZblockGameMode::StaticRegisterNativesATooMuchForZblockGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATooMuchForZblockGameMode;
UClass* ATooMuchForZblockGameMode::GetPrivateStaticClass()
{
	using TClass = ATooMuchForZblockGameMode;
	if (!Z_Registration_Info_UClass_ATooMuchForZblockGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TooMuchForZblockGameMode"),
			Z_Registration_Info_UClass_ATooMuchForZblockGameMode.InnerSingleton,
			StaticRegisterNativesATooMuchForZblockGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATooMuchForZblockGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATooMuchForZblockGameMode_NoRegister()
{
	return ATooMuchForZblockGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATooMuchForZblockGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TooMuchForZblockGameMode.h" },
		{ "ModuleRelativePath", "TooMuchForZblockGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATooMuchForZblockGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TooMuchForZblock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::ClassParams = {
	&ATooMuchForZblockGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATooMuchForZblockGameMode()
{
	if (!Z_Registration_Info_UClass_ATooMuchForZblockGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATooMuchForZblockGameMode.OuterSingleton, Z_Construct_UClass_ATooMuchForZblockGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATooMuchForZblockGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATooMuchForZblockGameMode);
ATooMuchForZblockGameMode::~ATooMuchForZblockGameMode() {}
// ********** End Class ATooMuchForZblockGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockGameMode_h__Script_TooMuchForZblock_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATooMuchForZblockGameMode, ATooMuchForZblockGameMode::StaticClass, TEXT("ATooMuchForZblockGameMode"), &Z_Registration_Info_UClass_ATooMuchForZblockGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATooMuchForZblockGameMode), 1030447735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockGameMode_h__Script_TooMuchForZblock_3433799333(TEXT("/Script/TooMuchForZblock"),
	Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockGameMode_h__Script_TooMuchForZblock_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockGameMode_h__Script_TooMuchForZblock_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
