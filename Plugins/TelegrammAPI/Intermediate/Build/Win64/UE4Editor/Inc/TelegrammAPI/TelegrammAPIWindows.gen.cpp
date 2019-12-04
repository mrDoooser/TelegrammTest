// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TelegrammAPI/Public/TelegrammAPIWindows.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelegrammAPIWindows() {}
// Cross Module References
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammAPIWindows_NoRegister();
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammAPIWindows();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TelegrammAPI();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_InitTD();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_Loop();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_StopListening();
// End Cross Module References
	void UTelegrammAPIWindows::StaticRegisterNativesUTelegrammAPIWindows()
	{
		UClass* Class = UTelegrammAPIWindows::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitTD", &UTelegrammAPIWindows::execInitTD },
			{ "Loop", &UTelegrammAPIWindows::execLoop },
			{ "StopListening", &UTelegrammAPIWindows::execStopListening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammAPIWindows.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammAPIWindows, nullptr, "InitTD", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_InitTD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammAPIWindows_InitTD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammAPIWindows.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammAPIWindows, nullptr, "Loop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_Loop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammAPIWindows_Loop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammAPIWindows.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammAPIWindows, nullptr, "StopListening", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammAPIWindows_StopListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammAPIWindows_StopListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTelegrammAPIWindows_NoRegister()
	{
		return UTelegrammAPIWindows::StaticClass();
	}
	struct Z_Construct_UClass_UTelegrammAPIWindows_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isListening_MetaData[];
#endif
		static void NewProp_isListening_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isListening;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelegrammAPIWindows_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTelegrammAPIWindows_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelegrammAPIWindows_InitTD, "InitTD" }, // 263626957
		{ &Z_Construct_UFunction_UTelegrammAPIWindows_Loop, "Loop" }, // 1133715633
		{ &Z_Construct_UFunction_UTelegrammAPIWindows_StopListening, "StopListening" }, // 2564978422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammAPIWindows_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TelegrammAPIWindows.h" },
		{ "ModuleRelativePath", "Public/TelegrammAPIWindows.h" },
		{ "ToolTip", "class ITelegrammAPIWindows : public IModuleInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening_MetaData[] = {
		{ "Category", "TelegrammAPIWindows" },
		{ "ModuleRelativePath", "Public/TelegrammAPIWindows.h" },
	};
#endif
	void Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening_SetBit(void* Obj)
	{
		((UTelegrammAPIWindows*)Obj)->isListening = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening = { "isListening", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTelegrammAPIWindows), &Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelegrammAPIWindows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammAPIWindows_Statics::NewProp_isListening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelegrammAPIWindows_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelegrammAPIWindows>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelegrammAPIWindows_Statics::ClassParams = {
		&UTelegrammAPIWindows::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTelegrammAPIWindows_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTelegrammAPIWindows_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTelegrammAPIWindows_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTelegrammAPIWindows_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTelegrammAPIWindows()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTelegrammAPIWindows_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTelegrammAPIWindows, 937560686);
	template<> TELEGRAMMAPI_API UClass* StaticClass<UTelegrammAPIWindows>()
	{
		return UTelegrammAPIWindows::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelegrammAPIWindows(Z_Construct_UClass_UTelegrammAPIWindows, &UTelegrammAPIWindows::StaticClass, TEXT("/Script/TelegrammAPI"), TEXT("UTelegrammAPIWindows"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelegrammAPIWindows);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
