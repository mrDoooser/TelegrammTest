#include "TelegrammConnector.h"

#include <functional>
#include <thread>
#include <chrono>



void UTelegrammConnector::InitTD()
{
	UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - InitTD started"));

	if (lib != nullptr)
	{
		lib->~UETdApiLibrary();
	}

	lib = new UETdApiLibrary();
	UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector created"));

	if (lib == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector lib == nullptr"));
	}
	else
	{
		FTdApiInitParams* params_ = new FTdApiInitParams();
		params_->api_hash_ = "bb8f4331914e98f512c8bae1deed523e";
		params_->api_id_ = 1168701;

		UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - Set callback"));
		InitializeCallbackFunctions();

		lib->Initialize(params_);

		if (lib->Initialized())
		{
			UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - INITIALIZED!"));
		}

		isListening = true;

		listener = new std::thread(&UTelegrammConnector::Loop, this);
		listener->detach();
	}
}

bool UTelegrammConnector::Initialized()
{
	if (lib == nullptr)
		return false;
	else
		return lib->Initialized();
}

void UTelegrammConnector::StopListening()
{
	isListening = false;
	UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - StopListening"));
}

void UTelegrammConnector::Loop()
{
	while (isListening)
	{
		if (isListening)
		{
			lib->ReadData();
			//AsyncTask(ENamedThreads::GameThread, [&]()
			//{
			//	lib->ReadData();
			//});
		}
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - READ DATA"));
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}

void UTelegrammConnector::InitializeCallbackFunctions()
{
	lib->OnAuthorizationStateReady = (std::bind(&UTelegrammConnector::AuthorizationStateReady, this));
	lib->OnAuthorizationStateLoggingOut = (std::bind(&UTelegrammConnector::AuthorizationStateLoggingOut, this));
	lib->OnAuthorizationStateClosing = (std::bind(&UTelegrammConnector::AuthorizationStateClosing, this));
	lib->OnAuthorizationStateClosed = (std::bind(&UTelegrammConnector::AuthorizationStateClosed, this));
	lib->OnAuthorizationStateWaitCode = (std::bind(&UTelegrammConnector::AuthorizationStateWaitCode, this));
	lib->OnAuthorizationStateWaitRegistration = (std::bind(&UTelegrammConnector::AuthorizationStateWaitRegistration, this));
	lib->OnAuthorizationStateWaitPassword = (std::bind(&UTelegrammConnector::AuthorizationStateWaitPassword, this));
	lib->OnAuthorizationStateWaitPhoneNumber = (std::bind(&UTelegrammConnector::AuthorizationStateWaitPhoneNumber, this));
	lib->OnAuthorizationStateWaitEncryptionKey = (std::bind(&UTelegrammConnector::AuthorizationStateWaitEncryptionKey, this));
	lib->OnAuthorizationStateWaitTdlibParameters = (std::bind(&UTelegrammConnector::AuthorizationStateWaitTdlibParameters, this));

}

void UTelegrammConnector::AuthorizationStateReady()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateReady..."));
	OnAuthorizationStateReady.Broadcast();
}
void UTelegrammConnector::AuthorizationStateLoggingOut()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateLoggingOut..."));
	OnAuthorizationStateLoggingOut.Broadcast();
}
void UTelegrammConnector::AuthorizationStateClosing()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosing..."));
	OnAuthorizationStateClosing.Broadcast();
}
void UTelegrammConnector::AuthorizationStateClosed()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosed..."));
	OnAuthorizationStateClosed.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitCode()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitCode..."));
	OnAuthorizationStateWaitCode.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitRegistration()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitRegistration..."));
	OnAuthorizationStateWaitRegistration.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitPassword()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPassword..."));
	OnAuthorizationStateWaitPassword.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitPhoneNumber()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPhoneNumber..."));
	OnAuthorizationStateWaitPhoneNumber.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitEncryptionKey()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitEncryptionKey..."));
	OnAuthorizationStateWaitEncryptionKey.Broadcast();
}
void UTelegrammConnector::AuthorizationStateWaitTdlibParameters()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitTdlibParameters..."));
	OnAuthorizationStateWaitTdlibParameters.Broadcast();
}

void UTelegrammConnector::SetAuthorizationCode(FString code)
{
	std::string strCode = FStringToSTDString(code);
	lib->SetAuthorizationCode(&strCode);
}

void UTelegrammConnector::SetAuthorizationStateRegistration(FString first_name, FString last_name)
{
	std::string strFirst_name = FStringToSTDString(first_name);
	std::string strLast_name = FStringToSTDString(last_name);
	lib->SetAuthorizationStateRegistration(&strFirst_name, &strLast_name);
}

void UTelegrammConnector::SetAuthorizationStatePassword(FString password)
{
	std::string strPassword = FStringToSTDString(password);
	lib->SetAuthorizationStatePassword(&strPassword);
}

void UTelegrammConnector::SetAuthorizationStatePhoneNumber(FString phone_number)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStatePhoneNumber - phone_number: %s"), *phone_number);
	std::string strPhone_number = FStringToSTDString(phone_number);
	lib->SetAuthorizationStatePhoneNumber(&strPhone_number);
}

void UTelegrammConnector::SetAuthorizationStateEncryptionKey(FString key)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStateEncryptionKey - Key: %s"), *key);
	std::string strKey = FStringToSTDString(key);
	lib->SetAuthorizationStateEncryptionKey(&strKey);
}

void UTelegrammConnector::SetAuthorizationStateDestroy()
{
	lib->SetAuthorizationStateDestroy();
}

void UTelegrammConnector::SetAuthorizationStateTdlibParameters()
{
	lib->SetAuthorizationStateTdlibParameters();
}
