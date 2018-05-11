// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UE4_Udemy_1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_Udemy_1GameModeBase() {}
// Cross Module References
	UE4_UDEMY_1_API UClass* Z_Construct_UClass_AUE4_Udemy_1GameModeBase_NoRegister();
	UE4_UDEMY_1_API UClass* Z_Construct_UClass_AUE4_Udemy_1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4_Udemy_1();
// End Cross Module References
	void AUE4_Udemy_1GameModeBase::StaticRegisterNativesAUE4_Udemy_1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE4_Udemy_1GameModeBase_NoRegister()
	{
		return AUE4_Udemy_1GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE4_Udemy_1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_UE4_Udemy_1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "UE4_Udemy_1GameModeBase.h" },
				{ "ModuleRelativePath", "UE4_Udemy_1GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUE4_Udemy_1GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUE4_Udemy_1GameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AUE4_Udemy_1GameModeBase, 4146825704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_Udemy_1GameModeBase(Z_Construct_UClass_AUE4_Udemy_1GameModeBase, &AUE4_Udemy_1GameModeBase::StaticClass, TEXT("/Script/UE4_Udemy_1"), TEXT("AUE4_Udemy_1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_Udemy_1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
