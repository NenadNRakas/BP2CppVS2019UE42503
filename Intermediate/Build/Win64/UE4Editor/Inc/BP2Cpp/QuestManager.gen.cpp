// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP2Cpp/QuestManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}
// Cross Module References
	BP2CPP_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
	BP2CPP_API UClass* Z_Construct_UClass_AQuestManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BP2Cpp();
// End Cross Module References
	void AQuestManager::StaticRegisterNativesAQuestManager()
	{
	}
	UClass* Z_Construct_UClass_AQuestManager_NoRegister()
	{
		return AQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_AQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BP2Cpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestManager.h" },
		{ "ModuleRelativePath", "QuestManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestManager_Statics::ClassParams = {
		&AQuestManager::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestManager, 2132221636);
	template<> BP2CPP_API UClass* StaticClass<AQuestManager>()
	{
		return AQuestManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestManager(Z_Construct_UClass_AQuestManager, &AQuestManager::StaticClass, TEXT("/Script/BP2Cpp"), TEXT("AQuestManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
