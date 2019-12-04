// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"


//class ITelegrammAPIWindows;
//#include <td/telegram/Client.h>

//typedef TSharedPtr<ITelegrammAPIInterface, ESPMode::ThreadSafe> FTelegrammAPIInterfacePtr;

class FTelegrammAPIModule : public IModuleInterface
{
public:
	

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual void PostLoadCallback() override;

//protected:
//	FTelegrammAPIInterfacePtr TelegrammAPIInterface;
};


