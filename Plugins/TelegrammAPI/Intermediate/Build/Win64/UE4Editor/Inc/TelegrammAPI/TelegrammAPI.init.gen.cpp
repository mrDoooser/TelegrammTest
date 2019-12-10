// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelegrammAPI_init() {}
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature();
	TELEGRAMMAPI_API UFunction* Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TelegrammAPI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnCallbackMaked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateReady__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateLoggingOut__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitCode__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitRegistration__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPassword__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitPhoneNumber__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitEncryptionKey__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnAuthorizationStateWaitTdlibParameters__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnChatUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnUserUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TelegrammAPI_OnMessageUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TelegrammAPI",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x44E015F4,
				0xE3DCA136,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
