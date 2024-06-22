// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest_again_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_test_again;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_test_again()
	{
		if (!Z_Registration_Info_UPackage__Script_test_again.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/test_again",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x770FB21B,
				0x777B5812,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_test_again.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_test_again.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_test_again(Z_Construct_UPackage__Script_test_again, TEXT("/Script/test_again"), Z_Registration_Info_UPackage__Script_test_again, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x770FB21B, 0x777B5812));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
