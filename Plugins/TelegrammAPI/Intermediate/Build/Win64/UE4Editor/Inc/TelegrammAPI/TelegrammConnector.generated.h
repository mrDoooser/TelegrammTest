// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTelegrammMessageInfo;
struct FTelegrammUserInfo;
struct FTelegrammChatInfo;
#ifdef TELEGRAMMAPI_TelegrammConnector_generated_h
#error "TelegrammConnector.generated.h already included, missing '#pragma once' in TelegrammConnector.h"
#endif
#define TELEGRAMMAPI_TelegrammConnector_generated_h

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTelegrammMessageInfo_Statics; \
	TELEGRAMMAPI_API static class UScriptStruct* StaticStruct();


template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<struct FTelegrammMessageInfo>();

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTelegrammUserInfo_Statics; \
	TELEGRAMMAPI_API static class UScriptStruct* StaticStruct();


template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<struct FTelegrammUserInfo>();

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTelegrammChatInfo_Statics; \
	TELEGRAMMAPI_API static class UScriptStruct* StaticStruct();


template<> TELEGRAMMAPI_API UScriptStruct* StaticStruct<struct FTelegrammChatInfo>();

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_222_DELEGATE \
struct _Script_TelegrammAPI_eventOnMessageUpdated_Parms \
{ \
	FTelegrammMessageInfo MessageInfo; \
}; \
static inline void FOnMessageUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMessageUpdated, FTelegrammMessageInfo MessageInfo) \
{ \
	_Script_TelegrammAPI_eventOnMessageUpdated_Parms Parms; \
	Parms.MessageInfo=MessageInfo; \
	OnMessageUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_221_DELEGATE \
struct _Script_TelegrammAPI_eventOnUserUpdated_Parms \
{ \
	FTelegrammUserInfo UserInfo; \
}; \
static inline void FOnUserUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnUserUpdated, FTelegrammUserInfo UserInfo) \
{ \
	_Script_TelegrammAPI_eventOnUserUpdated_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	OnUserUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_220_DELEGATE \
struct _Script_TelegrammAPI_eventOnChatUpdated_Parms \
{ \
	FTelegrammChatInfo ChatInfo; \
}; \
static inline void FOnChatUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnChatUpdated, FTelegrammChatInfo ChatInfo) \
{ \
	_Script_TelegrammAPI_eventOnChatUpdated_Parms Parms; \
	Parms.ChatInfo=ChatInfo; \
	OnChatUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_219_DELEGATE \
static inline void FOnAuthorizationStateWaitTdlibParameters_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitTdlibParameters) \
{ \
	OnAuthorizationStateWaitTdlibParameters.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_218_DELEGATE \
static inline void FOnAuthorizationStateWaitEncryptionKey_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitEncryptionKey) \
{ \
	OnAuthorizationStateWaitEncryptionKey.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_217_DELEGATE \
static inline void FOnAuthorizationStateWaitPhoneNumber_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitPhoneNumber) \
{ \
	OnAuthorizationStateWaitPhoneNumber.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_216_DELEGATE \
static inline void FOnAuthorizationStateWaitPassword_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitPassword) \
{ \
	OnAuthorizationStateWaitPassword.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_215_DELEGATE \
static inline void FOnAuthorizationStateWaitRegistration_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitRegistration) \
{ \
	OnAuthorizationStateWaitRegistration.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_214_DELEGATE \
static inline void FOnAuthorizationStateWaitCode_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateWaitCode) \
{ \
	OnAuthorizationStateWaitCode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_213_DELEGATE \
static inline void FOnAuthorizationStateClosed_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateClosed) \
{ \
	OnAuthorizationStateClosed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_212_DELEGATE \
static inline void FOnAuthorizationStateClosing_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateClosing) \
{ \
	OnAuthorizationStateClosing.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_211_DELEGATE \
static inline void FOnAuthorizationStateLoggingOut_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateLoggingOut) \
{ \
	OnAuthorizationStateLoggingOut.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_210_DELEGATE \
static inline void FOnAuthorizationStateReady_DelegateWrapper(const FMulticastScriptDelegate& OnAuthorizationStateReady) \
{ \
	OnAuthorizationStateReady.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_209_DELEGATE \
static inline void FOnCallbackMaked_DelegateWrapper(const FMulticastScriptDelegate& OnCallbackMaked) \
{ \
	OnCallbackMaked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTextMessage) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_chatId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY(UInt64Property,Z_Param_replyToMessageID); \
		P_GET_UBOOL(Z_Param_disableNotifications); \
		P_GET_UBOOL(Z_Param_fromBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendTextMessage(Z_Param_chatId,Z_Param_message,Z_Param_replyToMessageID,Z_Param_disableNotifications,Z_Param_fromBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatHistory) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_chatId); \
		P_GET_PROPERTY(UInt64Property,Z_Param_fromMessageId); \
		P_GET_PROPERTY(UInt64Property,Z_Param_offset); \
		P_GET_PROPERTY(UInt64Property,Z_Param_limit); \
		P_GET_UBOOL(Z_Param_onlyLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetChatHistory(Z_Param_chatId,Z_Param_fromMessageId,Z_Param_offset,Z_Param_limit,Z_Param_onlyLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateTdlibParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateTdlibParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateEncryptionKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateEncryptionKey(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStatePhoneNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_phone_number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStatePhoneNumber(Z_Param_phone_number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStatePassword) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStatePassword(Z_Param_password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateRegistration) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_first_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_last_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateRegistration(Z_Param_first_name,Z_Param_last_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationCode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_code); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationCode(Z_Param_code); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Loop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeCallbackFunctions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeCallbackFunctions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitTD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitTD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Initialized(); \
		P_NATIVE_END; \
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTextMessage) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_chatId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY(UInt64Property,Z_Param_replyToMessageID); \
		P_GET_UBOOL(Z_Param_disableNotifications); \
		P_GET_UBOOL(Z_Param_fromBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendTextMessage(Z_Param_chatId,Z_Param_message,Z_Param_replyToMessageID,Z_Param_disableNotifications,Z_Param_fromBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatHistory) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_chatId); \
		P_GET_PROPERTY(UInt64Property,Z_Param_fromMessageId); \
		P_GET_PROPERTY(UInt64Property,Z_Param_offset); \
		P_GET_PROPERTY(UInt64Property,Z_Param_limit); \
		P_GET_UBOOL(Z_Param_onlyLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetChatHistory(Z_Param_chatId,Z_Param_fromMessageId,Z_Param_offset,Z_Param_limit,Z_Param_onlyLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateTdlibParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateTdlibParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateEncryptionKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateEncryptionKey(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStatePhoneNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_phone_number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStatePhoneNumber(Z_Param_phone_number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStatePassword) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStatePassword(Z_Param_password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationStateRegistration) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_first_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_last_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationStateRegistration(Z_Param_first_name,Z_Param_last_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAuthorizationCode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_code); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAuthorizationCode(Z_Param_code); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Loop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeCallbackFunctions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeCallbackFunctions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitTD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitTD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Initialized(); \
		P_NATIVE_END; \
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelegrammConnector(); \
	friend struct Z_Construct_UClass_UTelegrammConnector_Statics; \
public: \
	DECLARE_CLASS(UTelegrammConnector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammConnector)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUTelegrammConnector(); \
	friend struct Z_Construct_UClass_UTelegrammConnector_Statics; \
public: \
	DECLARE_CLASS(UTelegrammConnector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammConnector)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelegrammConnector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelegrammConnector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammConnector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammConnector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammConnector(UTelegrammConnector&&); \
	NO_API UTelegrammConnector(const UTelegrammConnector&); \
public:


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammConnector(UTelegrammConnector&&); \
	NO_API UTelegrammConnector(const UTelegrammConnector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammConnector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammConnector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTelegrammConnector)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isListening() { return STRUCT_OFFSET(UTelegrammConnector, isListening); }


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_227_PROLOG
#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_RPC_WRAPPERS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_INCLASS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_INCLASS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TELEGRAMMAPI_API UClass* StaticClass<class UTelegrammConnector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammConnector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
