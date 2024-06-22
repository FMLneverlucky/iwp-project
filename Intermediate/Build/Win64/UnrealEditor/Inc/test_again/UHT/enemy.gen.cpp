// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test_again/Private/enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TEST_AGAIN_API UClass* Z_Construct_UClass_Aenemy();
	TEST_AGAIN_API UClass* Z_Construct_UClass_Aenemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_test_again();
// End Cross Module References
	void Aenemy::StaticRegisterNativesAenemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aenemy);
	UClass* Z_Construct_UClass_Aenemy_NoRegister()
	{
		return Aenemy::StaticClass();
	}
	struct Z_Construct_UClass_Aenemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_test_again,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "enemy.h" },
		{ "ModuleRelativePath", "Private/enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aenemy_Statics::ClassParams = {
		&Aenemy::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_Statics::Class_MetaDataParams), Z_Construct_UClass_Aenemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Aenemy()
	{
		if (!Z_Registration_Info_UClass_Aenemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aenemy.OuterSingleton, Z_Construct_UClass_Aenemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aenemy.OuterSingleton;
	}
	template<> TEST_AGAIN_API UClass* StaticClass<Aenemy>()
	{
		return Aenemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemy);
	Aenemy::~Aenemy() {}
	struct Z_CompiledInDeferFile_FID_Users_jingj_OneDrive_Documents_Unreal_Projects_test_again_Source_test_again_Private_enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jingj_OneDrive_Documents_Unreal_Projects_test_again_Source_test_again_Private_enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aenemy, Aenemy::StaticClass, TEXT("Aenemy"), &Z_Registration_Info_UClass_Aenemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aenemy), 784493034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jingj_OneDrive_Documents_Unreal_Projects_test_again_Source_test_again_Private_enemy_h_3285357825(TEXT("/Script/test_again"),
		Z_CompiledInDeferFile_FID_Users_jingj_OneDrive_Documents_Unreal_Projects_test_again_Source_test_again_Private_enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jingj_OneDrive_Documents_Unreal_Projects_test_again_Source_test_again_Private_enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
