// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTelegrammConnector;
#ifdef TELEGRAMMAPI_TelegrammManager_generated_h
#error "TelegrammManager.generated.h already included, missing '#pragma once' in TelegrammManager.h"
#endif
#define TELEGRAMMAPI_TelegrammManager_generated_h

#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTelegrammConnector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTelegrammConnector**)Z_Param__Result=UTelegrammManager::GetTelegrammConnector(); \
		P_NATIVE_END; \
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTelegrammConnector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTelegrammConnector**)Z_Param__Result=UTelegrammManager::GetTelegrammConnector(); \
		P_NATIVE_END; \
	}


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelegrammManager(); \
	friend struct Z_Construct_UClass_UTelegrammManager_Statics; \
public: \
	DECLARE_CLASS(UTelegrammManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammManager)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTelegrammManager(); \
	friend struct Z_Construct_UClass_UTelegrammManager_Statics; \
public: \
	DECLARE_CLASS(UTelegrammManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TelegrammAPI"), NO_API) \
	DECLARE_SERIALIZER(UTelegrammManager)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelegrammManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelegrammManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammManager(UTelegrammManager&&); \
	NO_API UTelegrammManager(const UTelegrammManager&); \
public:


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelegrammManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTelegrammManager(UTelegrammManager&&); \
	NO_API UTelegrammManager(const UTelegrammManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelegrammManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelegrammManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelegrammManager)


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_PRIVATE_PROPERTY_OFFSET
#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_11_PROLOG
#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_RPC_WRAPPERS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_INCLASS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_PRIVATE_PROPERTY_OFFSET \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_INCLASS_NO_PURE_DECLS \
	TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TELEGRAMMAPI_API UClass* StaticClass<class UTelegrammManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TelegrammTest_Plugins_TelegrammAPI_Source_TelegrammAPI_Public_TelegrammManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
