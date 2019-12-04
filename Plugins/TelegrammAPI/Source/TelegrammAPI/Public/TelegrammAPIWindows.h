
#pragma once
#include "EngineMinimal.h"
#include "Core.h"
#include "CoreMinimal.h"

#include <UETdApiLibrary.h>
#include <UETdApiStructs.h>

#include "TelegrammAPIWindows.generated.h"


//class ITelegrammAPIWindows : public IModuleInterface
UCLASS(BlueprintType)
//class TELEGRAMMAPI_API UTelegrammAPIWindows : public UObject// : public IModuleInterface
class TELEGRAMMAPI_API UTelegrammAPIWindows : public UObject // : public IModuleInterface
{
	GENERATED_BODY()

public:


	UETdApiLibrary* lib;

	//static UTelegrammAPIWindows* TelegrammAPIWindows;

	//static UTelegrammAPIWindows* GetTelegrammAPIWindows()
	//{
	//	if (!TelegrammAPIWindows)
	//		TelegrammAPIWindows = NewObject<UTelegrammAPIWindows>();

	//	return TelegrammAPIWindows;
	//}


	UTelegrammAPIWindows()
		: isListening(false)
	{
	};

	~UTelegrammAPIWindows()
	{
		isListening = false;
	}

	UFUNCTION(BlueprintCallable)
	void InitTD();

	UFUNCTION(BlueprintCallable)
	void StopListening();
	
	void AuthorizationStateReady();
	void AuthorizationStateLoggingOut();
	void AuthorizationStateClosing();
	void AuthorizationStateClosed();
	void AuthorizationStateWaitCode();
	void AuthorizationStateWaitRegistration();
	void AuthorizationStateWaitPassword();
	void AuthorizationStateWaitPhoneNumber();
	void AuthorizationStateWaitEncryptionKey();
	void AuthorizationStateWaitTdlibParameters();

	UFUNCTION(BlueprintCallable)
	void Loop();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isListening;
};