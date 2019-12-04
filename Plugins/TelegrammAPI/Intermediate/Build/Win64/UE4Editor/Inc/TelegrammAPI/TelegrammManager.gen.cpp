// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TelegrammAPI/Public/TelegrammManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelegrammManager() {}
// Cross Module References
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammManager_NoRegister();
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TelegrammAPI();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector();
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammConnector_NoRegister();
// End Cross Module References
	void UTelegrammManager::StaticRegisterNativesUTelegrammManager()
	{
		UClass* Class = UTelegrammManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTelegrammConnector", &UTelegrammManager::execGetTelegrammConnector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics
	{
		struct TelegrammManager_eventGetTelegrammConnector_Parms
		{
			UTelegrammConnector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammManager_eventGetTelegrammConnector_Parms, ReturnValue), Z_Construct_UClass_UTelegrammConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammManager, nullptr, "GetTelegrammConnector", sizeof(TelegrammManager_eventGetTelegrammConnector_Parms), Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTelegrammManager_NoRegister()
	{
		return UTelegrammManager::StaticClass();
	}
	struct Z_Construct_UClass_UTelegrammManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelegrammManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTelegrammManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelegrammManager_GetTelegrammConnector, "GetTelegrammConnector" }, // 271740382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TelegrammManager.h" },
		{ "ModuleRelativePath", "Public/TelegrammManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelegrammManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelegrammManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelegrammManager_Statics::ClassParams = {
		&UTelegrammManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTelegrammManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTelegrammManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTelegrammManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTelegrammManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTelegrammManager, 1033878405);
	template<> TELEGRAMMAPI_API UClass* StaticClass<UTelegrammManager>()
	{
		return UTelegrammManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelegrammManager(Z_Construct_UClass_UTelegrammManager, &UTelegrammManager::StaticClass, TEXT("/Script/TelegrammAPI"), TEXT("UTelegrammManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelegrammManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
