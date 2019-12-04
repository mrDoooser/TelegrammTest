// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TelegrammAPI.h"
#include "TelegrammAPIWindows.h"

#define LOCTEXT_NAMESPACE "FTelegrammAPIModule"

void FTelegrammAPIModule::StartupModule()
{
	//UTelegrammAPIWindows* api = new UTelegrammAPIWindows();
	//api->InitTD();
	//api.Test();
}

void FTelegrammAPIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FTelegrammAPIModule::PostLoadCallback()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTelegrammAPIModule, TelegrammAPI)


