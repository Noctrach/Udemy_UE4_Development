// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Building_EscapeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding_EscapeGameModeBase() {}
// Cross Module References
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase_NoRegister();
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Building_Escape();
// End Cross Module References
	void ABuilding_EscapeGameModeBase::StaticRegisterNativesABuilding_EscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase_NoRegister()
	{
		return ABuilding_EscapeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Building_Escape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Building_EscapeGameModeBase.h" },
				{ "ModuleRelativePath", "Building_EscapeGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABuilding_EscapeGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABuilding_EscapeGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilding_EscapeGameModeBase, 2140212957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilding_EscapeGameModeBase(Z_Construct_UClass_ABuilding_EscapeGameModeBase, &ABuilding_EscapeGameModeBase::StaticClass, TEXT("/Script/Building_Escape"), TEXT("ABuilding_EscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding_EscapeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
