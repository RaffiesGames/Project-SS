// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_SS/Project_SSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_SSGameMode() {}
// Cross Module References
	PROJECT_SS_API UClass* Z_Construct_UClass_AProject_SSGameMode_NoRegister();
	PROJECT_SS_API UClass* Z_Construct_UClass_AProject_SSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_SS();
// End Cross Module References
	void AProject_SSGameMode::StaticRegisterNativesAProject_SSGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject_SSGameMode_NoRegister()
	{
		return AProject_SSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_SSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_SSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_SS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_SSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_SSGameMode.h" },
		{ "ModuleRelativePath", "Project_SSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_SSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_SSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_SSGameMode_Statics::ClassParams = {
		&AProject_SSGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProject_SSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_SSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_SSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_SSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_SSGameMode, 1552870057);
	template<> PROJECT_SS_API UClass* StaticClass<AProject_SSGameMode>()
	{
		return AProject_SSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_SSGameMode(Z_Construct_UClass_AProject_SSGameMode, &AProject_SSGameMode::StaticClass, TEXT("/Script/Project_SS"), TEXT("AProject_SSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_SSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
