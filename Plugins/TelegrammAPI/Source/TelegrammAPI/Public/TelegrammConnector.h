
#pragma once
#include "EngineMinimal.h"
#include "Core.h"
#include "CoreMinimal.h"

#include <UETdApiLibrary.h>
#include <UETdApiStructs.h>

#include "TelegrammConnector.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCallbackMaked);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateReady);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateLoggingOut);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateClosing);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateClosed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitCode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitRegistration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitPassword);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitPhoneNumber);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitEncryptionKey);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateWaitTdlibParameters);


UCLASS(BlueprintType)
class TELEGRAMMAPI_API UTelegrammConnector : public UObject
{
	GENERATED_BODY()

protected:
	UETdApiLibrary* lib;

public:
	UTelegrammConnector()
		: isListening(false)
	{
	};

	~UTelegrammConnector()
	{
		isListening = false;
		StopListening();
		if(listener)
			listener->~thread();
		listener = nullptr;
		lib = nullptr;
	}

	UFUNCTION(BlueprintCallable)
	bool Initialized();

	UFUNCTION(BlueprintCallable)
	void InitTD();

	UFUNCTION(BlueprintCallable)
	void StopListening();

	UFUNCTION(BlueprintCallable)
	void InitializeCallbackFunctions();

	UFUNCTION(BlueprintCallable)
	void Loop();
	   
	// Authorization events
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

	// Authorization commands
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationCode(FString code);
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStateRegistration(FString first_name, FString last_name);
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStatePassword(FString password);
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStatePhoneNumber(FString phone_number);
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStateEncryptionKey(FString key);
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStateDestroy();
	UFUNCTION(BlueprintCallable)
	void SetAuthorizationStateTdlibParameters();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isListening;

	std::thread* listener;

	std::string FStringToSTDString(FString inString) { return std::string (TCHAR_TO_UTF8(*inString)); }

public:
	UPROPERTY(BlueprintAssignable)
	FOnCallbackMaked OnCallbackMaked;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateReady OnAuthorizationStateReady;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateLoggingOut OnAuthorizationStateLoggingOut;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateClosing OnAuthorizationStateClosing;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateClosed OnAuthorizationStateClosed;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitCode OnAuthorizationStateWaitCode;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitRegistration OnAuthorizationStateWaitRegistration;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitPassword OnAuthorizationStateWaitPassword;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitPhoneNumber OnAuthorizationStateWaitPhoneNumber;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitEncryptionKey OnAuthorizationStateWaitEncryptionKey;
	UPROPERTY(BlueprintAssignable)
	FOnAuthorizationStateWaitTdlibParameters OnAuthorizationStateWaitTdlibParameters;
};