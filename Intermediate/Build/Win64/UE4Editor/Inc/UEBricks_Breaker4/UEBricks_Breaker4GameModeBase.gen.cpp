// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBricks_Breaker4/UEBricks_Breaker4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEBricks_Breaker4GameModeBase() {}
// Cross Module References
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_AUEBricks_Breaker4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEBricks_Breaker4();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_APaddle_NoRegister();
// End Cross Module References
	void AUEBricks_Breaker4GameModeBase::StaticRegisterNativesAUEBricks_Breaker4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_NoRegister()
	{
		return AUEBricks_Breaker4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEBricks_Breaker4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEBricks_Breaker4GameModeBase.h" },
		{ "ModuleRelativePath", "UEBricks_Breaker4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::NewProp_Paddle_MetaData[] = {
		{ "Comment", "//The Inventory of this Actor\n" },
		{ "ModuleRelativePath", "UEBricks_Breaker4GameModeBase.h" },
		{ "ToolTip", "The Inventory of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUEBricks_Breaker4GameModeBase, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::NewProp_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::NewProp_Paddle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::NewProp_Paddle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEBricks_Breaker4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::ClassParams = {
		&AUEBricks_Breaker4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEBricks_Breaker4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEBricks_Breaker4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEBricks_Breaker4GameModeBase, 2791988118);
	template<> UEBRICKS_BREAKER4_API UClass* StaticClass<AUEBricks_Breaker4GameModeBase>()
	{
		return AUEBricks_Breaker4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEBricks_Breaker4GameModeBase(Z_Construct_UClass_AUEBricks_Breaker4GameModeBase, &AUEBricks_Breaker4GameModeBase::StaticClass, TEXT("/Script/UEBricks_Breaker4"), TEXT("AUEBricks_Breaker4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEBricks_Breaker4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
