
#pragma once
#include "EngineMinimal.h"
#include "Core.h"
#include "CoreMinimal.h"

#include "TelegrammConnector.h"
#include "TelegrammManager.generated.h"


UCLASS(BlueprintType)
class TELEGRAMMAPI_API UTelegrammManager : public UObject
{
	GENERATED_BODY()

private:

	static UTelegrammConnector* CurrentTelegrammConnector;

public:
	UFUNCTION(BlueprintCallable)
	static UTelegrammConnector* GetTelegrammConnector()
	{
		UTelegrammConnector* CurrentTelegrammConnector_ = nullptr;

		if (!CurrentTelegrammConnector_)
			CurrentTelegrammConnector_ = NewObject<UTelegrammConnector>();

		return CurrentTelegrammConnector_;
	}
};