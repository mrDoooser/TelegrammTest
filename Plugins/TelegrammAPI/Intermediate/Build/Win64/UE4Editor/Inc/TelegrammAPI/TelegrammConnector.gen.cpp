// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TelegrammAPI/Public/TelegrammConnector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelegrammConnector() {}
// Cross Module References
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TelegrammAPI();
	TELEGRAMMAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTelegrammMessageInfo();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature();
	TELEGRAMMAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTelegrammUserInfo();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature();
	TELEGRAMMAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTelegrammChatInfo();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammConnector_NoRegister();
	TELEGRAMMAPI_API UClass* Z_Construct_UClass_UTelegrammConnector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_Clear();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_GetChatHistory();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_Initialized();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_InitTD();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_Loop();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters();
	TELEGRAMMAPI_API UFunction* Z_Construct_UFunction_UTelegrammConnector_StopListening();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics
	{
		struct _Script_TelegrammAPI_eventOnMessageUpdated_Parms
		{
			FTelegrammMessageInfo MessageInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::NewProp_MessageInfo = { "MessageInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TelegrammAPI_eventOnMessageUpdated_Parms, MessageInfo), Z_Construct_UScriptStruct_FTelegrammMessageInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::NewProp_MessageInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnMessageUpdated__DelegateSignature", sizeof(_Script_TelegrammAPI_eventOnMessageUpdated_Parms), Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics
	{
		struct _Script_TelegrammAPI_eventOnUserUpdated_Parms
		{
			FTelegrammUserInfo UserInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TelegrammAPI_eventOnUserUpdated_Parms, UserInfo), Z_Construct_UScriptStruct_FTelegrammUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::NewProp_UserInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnUserUpdated__DelegateSignature", sizeof(_Script_TelegrammAPI_eventOnUserUpdated_Parms), Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics
	{
		struct _Script_TelegrammAPI_eventOnChatUpdated_Parms
		{
			FTelegrammChatInfo ChatInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::NewProp_ChatInfo = { "ChatInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TelegrammAPI_eventOnChatUpdated_Parms, ChatInfo), Z_Construct_UScriptStruct_FTelegrammChatInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::NewProp_ChatInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnChatUpdated__DelegateSignature", sizeof(_Script_TelegrammAPI_eventOnChatUpdated_Parms), Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitTdlibParameters__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitEncryptionKey__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitPhoneNumber__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitPassword__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitRegistration__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateWaitCode__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateClosed__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateClosing__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateLoggingOut__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnAuthorizationStateReady__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TelegrammAPI, nullptr, "OnCallbackMaked__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FTelegrammMessageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TELEGRAMMAPI_API uint32 Get_Z_Construct_UScriptStruct_FTelegrammMessageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTelegrammMessageInfo, Z_Construct_UPackage__Script_TelegrammAPI(), TEXT("TelegrammMessageInfo"), sizeof(FTelegrammMessageInfo), Get_Z_Construct_UScriptStruct_FTelegrammMessageInfo_Hash());
	}
	return Singleton;
}
template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<FTelegrammMessageInfo>()
{
	return FTelegrammMessageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTelegrammMessageInfo(FTelegrammMessageInfo::StaticStruct, TEXT("/Script/TelegrammAPI"), TEXT("TelegrammMessageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammMessageInfo
{
	FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammMessageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TelegrammMessageInfo")),new UScriptStruct::TCppStructOps<FTelegrammMessageInfo>);
	}
} ScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammMessageInfo;
	struct Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaAlbumId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MediaAlbumId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Views_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Views;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthorSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViaBotUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViaBotUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TtlExpiresIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TtlExpiresIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ttl_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ttl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplyToMessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReplyToMessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Date;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainsUnreadMention_MetaData[];
#endif
		static void NewProp_ContainsUnreadMention_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContainsUnreadMention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChannelPost_MetaData[];
#endif
		static void NewProp_IsChannelPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChannelPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDeletedForAllUsers_MetaData[];
#endif
		static void NewProp_CanBeDeletedForAllUsers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDeletedForAllUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDeletedOnlyForSelf_MetaData[];
#endif
		static void NewProp_CanBeDeletedOnlyForSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDeletedOnlyForSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeForwarded_MetaData[];
#endif
		static void NewProp_CanBeForwarded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeForwarded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeEdited_MetaData[];
#endif
		static void NewProp_CanBeEdited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeEdited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOutgoing_MetaData[];
#endif
		static void NewProp_IsOutgoing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOutgoing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ChatId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SenderUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTelegrammMessageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_MediaAlbumId_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_MediaAlbumId = { "MediaAlbumId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, MediaAlbumId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_MediaAlbumId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_MediaAlbumId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Views_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Views = { "Views", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, Views), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Views_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Views_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_AuthorSignature_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_AuthorSignature = { "AuthorSignature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, AuthorSignature), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_AuthorSignature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_AuthorSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ViaBotUserId_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "If non-zero, the user identifier of the bot through which this message was sent." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ViaBotUserId = { "ViaBotUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, ViaBotUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ViaBotUserId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ViaBotUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TtlExpiresIn_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Time left before the message expires, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TtlExpiresIn = { "TtlExpiresIn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, TtlExpiresIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TtlExpiresIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TtlExpiresIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Ttl_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "For self-destructing messages, the message's TTL (Time To Live), in seconds; 0 if none. TDLib will send updateDeleteMessages or updateMessageContent once the TTL expires." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Ttl = { "Ttl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, Ttl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Ttl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Ttl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ReplyToMessageId_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "If non-zero, the identifier of the message this message is replying to; can be the identifier of a deleted message." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ReplyToMessageId = { "ReplyToMessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, ReplyToMessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ReplyToMessageId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ReplyToMessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_EditDate_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Point in time (Unix timestamp) when the message was last edited.\nint32 EditDate;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_EditDate = { "EditDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, EditDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_EditDate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_EditDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Point in time (Unix timestamp) when the message was sent.\nint32 Date;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Date_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Date_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message contains an unread mention for the current user." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->ContainsUnreadMention = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention = { "ContainsUnreadMention", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message is a channel post. All messages to channels are channel posts, all other messages are not channel posts." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->IsChannelPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost = { "IsChannelPost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message can be deleted for all users." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->CanBeDeletedForAllUsers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers = { "CanBeDeletedForAllUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message can be deleted only for the current user while other users will continue to see it." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->CanBeDeletedOnlyForSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf = { "CanBeDeletedOnlyForSelf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message can be forwarded." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->CanBeForwarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded = { "CanBeForwarded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message can be edited. For live location and poll messages this fields shows, whether editMessageLiveLocation or stopPoll can be used with this message by the client." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->CanBeEdited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited = { "CanBeEdited", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "True, if the message is outgoing." },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing_SetBit(void* Obj)
	{
		((FTelegrammMessageInfo*)Obj)->IsOutgoing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing = { "IsOutgoing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammMessageInfo), &Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ChatId_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Chat identifier." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ChatId = { "ChatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, ChatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ChatId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ChatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_SenderUserId_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Identifier of the user who sent the message; 0 if unknown. Currently, it is unknown for channel posts and for channel posts automatically forwarded to discussion group." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_SenderUserId = { "SenderUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, SenderUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_SenderUserId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_SenderUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TextContent_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, TextContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TextContent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TextContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "TelegrammMessageInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammMessageInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_MediaAlbumId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Views,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_AuthorSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ViaBotUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TtlExpiresIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Ttl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ReplyToMessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_EditDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Date,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ContainsUnreadMention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsChannelPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedForAllUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeDeletedOnlyForSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeForwarded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_CanBeEdited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_IsOutgoing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_ChatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_SenderUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_TextContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
		nullptr,
		&NewStructOps,
		"TelegrammMessageInfo",
		sizeof(FTelegrammMessageInfo),
		alignof(FTelegrammMessageInfo),
		Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTelegrammMessageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTelegrammMessageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TelegrammAPI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TelegrammMessageInfo"), sizeof(FTelegrammMessageInfo), Get_Z_Construct_UScriptStruct_FTelegrammMessageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTelegrammMessageInfo_Hash() { return 2658875353U; }
class UScriptStruct* FTelegrammUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TELEGRAMMAPI_API uint32 Get_Z_Construct_UScriptStruct_FTelegrammUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTelegrammUserInfo, Z_Construct_UPackage__Script_TelegrammAPI(), TEXT("TelegrammUserInfo"), sizeof(FTelegrammUserInfo), Get_Z_Construct_UScriptStruct_FTelegrammUserInfo_Hash());
	}
	return Singleton;
}
template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<FTelegrammUserInfo>()
{
	return FTelegrammUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTelegrammUserInfo(FTelegrammUserInfo::StaticStruct, TEXT("/Script/TelegrammAPI"), TEXT("TelegrammUserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammUserInfo
{
	FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammUserInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TelegrammUserInfo")),new UScriptStruct::TCppStructOps<FTelegrammUserInfo>);
	}
} ScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammUserInfo;
	struct Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveAccess_MetaData[];
#endif
		static void NewProp_HaveAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HaveAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsScam_MetaData[];
#endif
		static void NewProp_IsScam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictionReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RestrictionReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSupport_MetaData[];
#endif
		static void NewProp_IsSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVerified_MetaData[];
#endif
		static void NewProp_IsVerified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVerified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhoneNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTelegrammUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LanguageCode_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, LanguageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LanguageCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LanguageCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess_SetBit(void* Obj)
	{
		((FTelegrammUserInfo*)Obj)->HaveAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess = { "HaveAccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammUserInfo), &Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam_SetBit(void* Obj)
	{
		((FTelegrammUserInfo*)Obj)->IsScam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam = { "IsScam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammUserInfo), &Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_RestrictionReason_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_RestrictionReason = { "RestrictionReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, RestrictionReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_RestrictionReason_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_RestrictionReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport_SetBit(void* Obj)
	{
		((FTelegrammUserInfo*)Obj)->IsSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport = { "IsSupport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammUserInfo), &Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified_SetBit(void* Obj)
	{
		((FTelegrammUserInfo*)Obj)->IsVerified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified = { "IsVerified", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammUserInfo), &Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_PhoneNumber_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_PhoneNumber = { "PhoneNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, PhoneNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_PhoneNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_PhoneNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_Username_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LastName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_FirstName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TelegrammUserInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammUserInfo, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LanguageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_HaveAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsScam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_RestrictionReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_IsVerified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_PhoneNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
		nullptr,
		&NewStructOps,
		"TelegrammUserInfo",
		sizeof(FTelegrammUserInfo),
		alignof(FTelegrammUserInfo),
		Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTelegrammUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTelegrammUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TelegrammAPI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TelegrammUserInfo"), sizeof(FTelegrammUserInfo), Get_Z_Construct_UScriptStruct_FTelegrammUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTelegrammUserInfo_Hash() { return 969454806U; }
class UScriptStruct* FTelegrammChatInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TELEGRAMMAPI_API uint32 Get_Z_Construct_UScriptStruct_FTelegrammChatInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTelegrammChatInfo, Z_Construct_UPackage__Script_TelegrammAPI(), TEXT("TelegrammChatInfo"), sizeof(FTelegrammChatInfo), Get_Z_Construct_UScriptStruct_FTelegrammChatInfo_Hash());
	}
	return Singleton;
}
template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<FTelegrammChatInfo>()
{
	return FTelegrammChatInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTelegrammChatInfo(FTelegrammChatInfo::StaticStruct, TEXT("/Script/TelegrammAPI"), TEXT("TelegrammChatInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammChatInfo
{
	FScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammChatInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TelegrammChatInfo")),new UScriptStruct::TCppStructOps<FTelegrammChatInfo>);
	}
} ScriptStruct_TelegrammAPI_StaticRegisterNativesFTelegrammChatInfo;
	struct Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedMessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PinnedMessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnreadMentionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UnreadMentionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReadOutboxMessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastReadOutboxMessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReadInboxMessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastReadInboxMessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnreadCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UnreadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDisableNotification_MetaData[];
#endif
		static void NewProp_DefaultDisableNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultDisableNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeReported_MetaData[];
#endif
		static void NewProp_CanBeReported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeReported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDeletedForAllUsers_MetaData[];
#endif
		static void NewProp_CanBeDeletedForAllUsers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDeletedForAllUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDeletedOnlyForSelf_MetaData[];
#endif
		static void NewProp_CanBeDeletedOnlyForSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDeletedOnlyForSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSponsored_MetaData[];
#endif
		static void NewProp_IsSponsored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSponsored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMarkedAsUnread_MetaData[];
#endif
		static void NewProp_IsMarkedAsUnread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMarkedAsUnread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPinned_MetaData[];
#endif
		static void NewProp_IsPinned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Order;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTelegrammChatInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_ClientData_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_ClientData = { "ClientData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, ClientData), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_ClientData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_ClientData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_PinnedMessageId_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_PinnedMessageId = { "PinnedMessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, PinnedMessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_PinnedMessageId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_PinnedMessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadMentionCount_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadMentionCount = { "UnreadMentionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, UnreadMentionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadMentionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadMentionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadOutboxMessageId_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadOutboxMessageId = { "LastReadOutboxMessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, LastReadOutboxMessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadOutboxMessageId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadOutboxMessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadInboxMessageId_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadInboxMessageId = { "LastReadInboxMessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, LastReadInboxMessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadInboxMessageId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadInboxMessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadCount_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadCount = { "UnreadCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, UnreadCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->DefaultDisableNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification = { "DefaultDisableNotification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->CanBeReported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported = { "CanBeReported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->CanBeDeletedForAllUsers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers = { "CanBeDeletedForAllUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->CanBeDeletedOnlyForSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf = { "CanBeDeletedOnlyForSelf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->IsSponsored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored = { "IsSponsored", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->IsMarkedAsUnread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread = { "IsMarkedAsUnread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned_SetBit(void* Obj)
	{
		((FTelegrammChatInfo*)Obj)->IsPinned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned = { "IsPinned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTelegrammChatInfo), &Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, Order), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Order_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Order_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "TelegrammChatInfo" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTelegrammChatInfo, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_ClientData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_PinnedMessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadMentionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadOutboxMessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_LastReadInboxMessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_UnreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_DefaultDisableNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeReported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedForAllUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_CanBeDeletedOnlyForSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsSponsored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsMarkedAsUnread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_IsPinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
		nullptr,
		&NewStructOps,
		"TelegrammChatInfo",
		sizeof(FTelegrammChatInfo),
		alignof(FTelegrammChatInfo),
		Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTelegrammChatInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTelegrammChatInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TelegrammAPI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TelegrammChatInfo"), sizeof(FTelegrammChatInfo), Get_Z_Construct_UScriptStruct_FTelegrammChatInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTelegrammChatInfo_Hash() { return 2953050591U; }
	void UTelegrammConnector::StaticRegisterNativesUTelegrammConnector()
	{
		UClass* Class = UTelegrammConnector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UTelegrammConnector::execClear },
			{ "GetChatHistory", &UTelegrammConnector::execGetChatHistory },
			{ "InitializeCallbackFunctions", &UTelegrammConnector::execInitializeCallbackFunctions },
			{ "Initialized", &UTelegrammConnector::execInitialized },
			{ "InitTD", &UTelegrammConnector::execInitTD },
			{ "Loop", &UTelegrammConnector::execLoop },
			{ "SetAuthorizationCode", &UTelegrammConnector::execSetAuthorizationCode },
			{ "SetAuthorizationStateDestroy", &UTelegrammConnector::execSetAuthorizationStateDestroy },
			{ "SetAuthorizationStateEncryptionKey", &UTelegrammConnector::execSetAuthorizationStateEncryptionKey },
			{ "SetAuthorizationStatePassword", &UTelegrammConnector::execSetAuthorizationStatePassword },
			{ "SetAuthorizationStatePhoneNumber", &UTelegrammConnector::execSetAuthorizationStatePhoneNumber },
			{ "SetAuthorizationStateRegistration", &UTelegrammConnector::execSetAuthorizationStateRegistration },
			{ "SetAuthorizationStateTdlibParameters", &UTelegrammConnector::execSetAuthorizationStateTdlibParameters },
			{ "StopListening", &UTelegrammConnector::execStopListening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTelegrammConnector_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "Clear", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics
	{
		struct TelegrammConnector_eventGetChatHistory_Parms
		{
			int64 chatId;
			int64 fromMessageId;
			int64 offset;
			int64 limit;
			bool onlyLocal;
		};
		static void NewProp_onlyLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onlyLocal;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_offset;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_fromMessageId;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_chatId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_onlyLocal_SetBit(void* Obj)
	{
		((TelegrammConnector_eventGetChatHistory_Parms*)Obj)->onlyLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_onlyLocal = { "onlyLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TelegrammConnector_eventGetChatHistory_Parms), &Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_onlyLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventGetChatHistory_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventGetChatHistory_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_fromMessageId = { "fromMessageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventGetChatHistory_Parms, fromMessageId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_chatId = { "chatId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventGetChatHistory_Parms, chatId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_onlyLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_fromMessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::NewProp_chatId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Chats and messages commands" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "GetChatHistory", sizeof(TelegrammConnector_eventGetChatHistory_Parms), Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_GetChatHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_GetChatHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "InitializeCallbackFunctions", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics
	{
		struct TelegrammConnector_eventInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TelegrammConnector_eventInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TelegrammConnector_eventInitialized_Parms), &Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "Initialized", sizeof(TelegrammConnector_eventInitialized_Parms), Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_Initialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_Initialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "InitTD", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_InitTD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_InitTD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_Loop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_Loop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_Loop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "Loop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_Loop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_Loop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_Loop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_Loop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics
	{
		struct TelegrammConnector_eventSetAuthorizationCode_Parms
		{
			FString code;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationCode_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::NewProp_code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
		{ "ToolTip", "Authorization commands" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationCode", sizeof(TelegrammConnector_eventSetAuthorizationCode_Parms), Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStateDestroy", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics
	{
		struct TelegrammConnector_eventSetAuthorizationStateEncryptionKey_Parms
		{
			FString key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationStateEncryptionKey_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStateEncryptionKey", sizeof(TelegrammConnector_eventSetAuthorizationStateEncryptionKey_Parms), Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics
	{
		struct TelegrammConnector_eventSetAuthorizationStatePassword_Parms
		{
			FString password;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationStatePassword_Parms, password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::NewProp_password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStatePassword", sizeof(TelegrammConnector_eventSetAuthorizationStatePassword_Parms), Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics
	{
		struct TelegrammConnector_eventSetAuthorizationStatePhoneNumber_Parms
		{
			FString phone_number;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_phone_number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::NewProp_phone_number = { "phone_number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationStatePhoneNumber_Parms, phone_number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::NewProp_phone_number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStatePhoneNumber", sizeof(TelegrammConnector_eventSetAuthorizationStatePhoneNumber_Parms), Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics
	{
		struct TelegrammConnector_eventSetAuthorizationStateRegistration_Parms
		{
			FString first_name;
			FString last_name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_last_name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_first_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::NewProp_last_name = { "last_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationStateRegistration_Parms, last_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::NewProp_first_name = { "first_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TelegrammConnector_eventSetAuthorizationStateRegistration_Parms, first_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::NewProp_last_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::NewProp_first_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStateRegistration", sizeof(TelegrammConnector_eventSetAuthorizationStateRegistration_Parms), Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "SetAuthorizationStateTdlibParameters", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelegrammConnector, nullptr, "StopListening", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTelegrammConnector_StopListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTelegrammConnector_StopListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTelegrammConnector_NoRegister()
	{
		return UTelegrammConnector::StaticClass();
	}
	struct Z_Construct_UClass_UTelegrammConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitTdlibParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitTdlibParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitEncryptionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitEncryptionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitPhoneNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitPhoneNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitRegistration_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitRegistration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateWaitCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateWaitCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateClosing_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateClosing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateLoggingOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateLoggingOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthorizationStateReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthorizationStateReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallbackMaked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallbackMaked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isListening_MetaData[];
#endif
		static void NewProp_isListening_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isListening;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelegrammConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TelegrammAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTelegrammConnector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelegrammConnector_Clear, "Clear" }, // 317946456
		{ &Z_Construct_UFunction_UTelegrammConnector_GetChatHistory, "GetChatHistory" }, // 2622386288
		{ &Z_Construct_UFunction_UTelegrammConnector_InitializeCallbackFunctions, "InitializeCallbackFunctions" }, // 671744221
		{ &Z_Construct_UFunction_UTelegrammConnector_Initialized, "Initialized" }, // 1700822131
		{ &Z_Construct_UFunction_UTelegrammConnector_InitTD, "InitTD" }, // 719290828
		{ &Z_Construct_UFunction_UTelegrammConnector_Loop, "Loop" }, // 1646748631
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationCode, "SetAuthorizationCode" }, // 2562696240
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateDestroy, "SetAuthorizationStateDestroy" }, // 2048941844
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateEncryptionKey, "SetAuthorizationStateEncryptionKey" }, // 694272199
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePassword, "SetAuthorizationStatePassword" }, // 1740498842
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStatePhoneNumber, "SetAuthorizationStatePhoneNumber" }, // 3478242622
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateRegistration, "SetAuthorizationStateRegistration" }, // 1667403657
		{ &Z_Construct_UFunction_UTelegrammConnector_SetAuthorizationStateTdlibParameters, "SetAuthorizationStateTdlibParameters" }, // 3995591582
		{ &Z_Construct_UFunction_UTelegrammConnector_StopListening, "StopListening" }, // 1046927441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TelegrammConnector.h" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnMessageUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnMessageUpdated = { "OnMessageUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnMessageUpdated), Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnMessageUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnMessageUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnUserUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnUserUpdated = { "OnUserUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnUserUpdated), Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnUserUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnUserUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnChatUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnChatUpdated = { "OnChatUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnChatUpdated), Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnChatUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnChatUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitTdlibParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitTdlibParameters = { "OnAuthorizationStateWaitTdlibParameters", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitTdlibParameters), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitTdlibParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitTdlibParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitEncryptionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitEncryptionKey = { "OnAuthorizationStateWaitEncryptionKey", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitEncryptionKey), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitEncryptionKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitEncryptionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPhoneNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPhoneNumber = { "OnAuthorizationStateWaitPhoneNumber", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitPhoneNumber), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPhoneNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPhoneNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPassword_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPassword = { "OnAuthorizationStateWaitPassword", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitPassword), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPassword_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitRegistration_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitRegistration = { "OnAuthorizationStateWaitRegistration", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitRegistration), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitRegistration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitRegistration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitCode = { "OnAuthorizationStateWaitCode", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateWaitCode), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosed = { "OnAuthorizationStateClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateClosed), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosing_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosing = { "OnAuthorizationStateClosing", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateClosing), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateLoggingOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateLoggingOut = { "OnAuthorizationStateLoggingOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateLoggingOut), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateLoggingOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateLoggingOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateReady = { "OnAuthorizationStateReady", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnAuthorizationStateReady), Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateReady_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnCallbackMaked_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnCallbackMaked = { "OnCallbackMaked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTelegrammConnector, OnCallbackMaked), Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnCallbackMaked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnCallbackMaked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening_MetaData[] = {
		{ "Category", "TelegrammConnector" },
		{ "ModuleRelativePath", "Public/TelegrammConnector.h" },
	};
#endif
	void Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening_SetBit(void* Obj)
	{
		((UTelegrammConnector*)Obj)->isListening = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening = { "isListening", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTelegrammConnector), &Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelegrammConnector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnMessageUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnUserUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnChatUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitTdlibParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitEncryptionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPhoneNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitRegistration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateWaitCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateClosing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateLoggingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnAuthorizationStateReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_OnCallbackMaked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelegrammConnector_Statics::NewProp_isListening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelegrammConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelegrammConnector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelegrammConnector_Statics::ClassParams = {
		&UTelegrammConnector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTelegrammConnector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTelegrammConnector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTelegrammConnector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTelegrammConnector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTelegrammConnector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTelegrammConnector, 2706253766);
	template<> TELEGRAMMAPI_API UClass* StaticClass<UTelegrammConnector>()
	{
		return UTelegrammConnector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelegrammConnector(Z_Construct_UClass_UTelegrammConnector, &UTelegrammConnector::StaticClass, TEXT("/Script/TelegrammAPI"), TEXT("UTelegrammConnector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelegrammConnector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
