// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TooMuchForZblockCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTooMuchForZblockCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
TOOMUCHFORZBLOCK_API UClass* Z_Construct_UClass_ATooMuchForZblockCameraManager();
TOOMUCHFORZBLOCK_API UClass* Z_Construct_UClass_ATooMuchForZblockCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TooMuchForZblock();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATooMuchForZblockCameraManager *******************************************
void ATooMuchForZblockCameraManager::StaticRegisterNativesATooMuchForZblockCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATooMuchForZblockCameraManager;
UClass* ATooMuchForZblockCameraManager::GetPrivateStaticClass()
{
	using TClass = ATooMuchForZblockCameraManager;
	if (!Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TooMuchForZblockCameraManager"),
			Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.InnerSingleton,
			StaticRegisterNativesATooMuchForZblockCameraManager,
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
	return Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ATooMuchForZblockCameraManager_NoRegister()
{
	return ATooMuchForZblockCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "TooMuchForZblockCameraManager.h" },
		{ "ModuleRelativePath", "TooMuchForZblockCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATooMuchForZblockCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_TooMuchForZblock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::ClassParams = {
	&ATooMuchForZblockCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATooMuchForZblockCameraManager()
{
	if (!Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.OuterSingleton, Z_Construct_UClass_ATooMuchForZblockCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATooMuchForZblockCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATooMuchForZblockCameraManager);
ATooMuchForZblockCameraManager::~ATooMuchForZblockCameraManager() {}
// ********** End Class ATooMuchForZblockCameraManager *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockCameraManager_h__Script_TooMuchForZblock_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATooMuchForZblockCameraManager, ATooMuchForZblockCameraManager::StaticClass, TEXT("ATooMuchForZblockCameraManager"), &Z_Registration_Info_UClass_ATooMuchForZblockCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATooMuchForZblockCameraManager), 2790340710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockCameraManager_h__Script_TooMuchForZblock_1728598892(TEXT("/Script/TooMuchForZblock"),
	Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockCameraManager_h__Script_TooMuchForZblock_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TooMuchForZblock_TooMuchForZblock_Source_TooMuchForZblock_TooMuchForZblockCameraManager_h__Script_TooMuchForZblock_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
