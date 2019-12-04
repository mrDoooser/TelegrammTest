// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TELEGRAMMAPI_TelegrammAPIWindows_generated_h
#error "TelegrammAPIWindows.generated.h already included, missing '#pragma once' in TelegrammAPIWindows.h"
#endif
#define TELEGRAMMAPI_TelegrammAPIWindows_generated_h

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Loop(); \
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
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Loop(); \
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
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelegrammAPIWindows(); \
	friend struct Z_Construct_UClass_UTelegrammAPIWindows_Statics; \
public: \
	DECLARE_CLASS(UTelegrammAPIWindows, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammAPIWindows)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTelegrammAPIWindows(); \
	friend struct Z_Construct_UClass_UTelegrammAPIWindows_Statics; \
public: \
	DECLARE_CLASS(UTelegrammAPIWindows, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammAPIWindows)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelegrammAPIWindows(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelegrammAPIWindows) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammAPIWindows); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammAPIWindows); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammAPIWindows(UTelegrammAPIWindows&&); \
	NO_API UTelegrammAPIWindows(const UTelegrammAPIWindows&); \
public:


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammAPIWindows(UTelegrammAPIWindows&&); \
	NO_API UTelegrammAPIWindows(const UTelegrammAPIWindows&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammAPIWindows); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammAPIWindows); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTelegrammAPIWindows)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_PRIVATE_PROPERTY_OFFSET
#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_14_PROLOG
#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_RPC_WRAPPERS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_INCLASS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_INCLASS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TELEGRAMMAPI_API UClass* StaticClass<class UTelegrammAPIWindows>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammAPIWindows_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
