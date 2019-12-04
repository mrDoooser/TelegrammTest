#include "TelegrammAPIWindows.h"
#include <functional>
#include <thread>
#include <chrono>

//TelegrammAPIWindows::TelegrammAPIWindows()
//{
//	//td::Client::execute({ 0, td_api::make_object<td_api::setLogVerbosityLevel>(1) });
//	//td::Client::execute({ 0, td::td_api::make_object<td_api::setLogVerbosityLevel>(1) });
//	//Client = std::make_unique<td::Client>();
//
//	//TdExample example;
//	//example.loop();
//}
//
//TelegrammAPIWindows::~TelegrammAPIWindows()
//{
//	//Client.release();
//}
//
//void TelegrammAPIWindows::SendTextMessage(long UserID, char Message)
//{
//
//}

void UTelegrammAPIWindows::InitTD()
{
	UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - InitTD started"));

	if (!lib)
	{
		lib = new UETdApiLibrary();
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows created"));
	}


	if (lib == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows lib == nullptr"));
	}
	else
	{
		FTdApiInitParams* params_ = new FTdApiInitParams();
		params_->api_hash_ = "bb8f4331914e98f512c8bae1deed523e";
		params_->api_id_ = 1168701;

		UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - Set callback"));



		//auto callback3 = std::bind(&UTelegrammAPIWindows::AuthorizationStateReady, this);
		//lib->SetFunc(callback3);

		//lib->GetAuthorizationStateReady()->Connect(this, &UTelegrammAPIWindows::Callback);
		
		//lib->GetDelegateAuthorizationStateReady()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateReady);
		//lib->GetDelegateAuthorizationStateLoggingOut()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateLoggingOut);
		//lib->GetDelegateAuthorizationStateClosing()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateClosing);
		//lib->GetDelegateAuthorizationStateClosed()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateClosed);
		//lib->GetDelegateAuthorizationStateWaitCode()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitCode);
		//lib->GetDelegateAuthorizationStateWaitRegistration()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitRegistration);
		//lib->GetDelegateAuthorizationStateWaitPassword()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitPassword);
		//lib->GetDelegateAuthorizationStateWaitPhoneNumber()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitPhoneNumber);
		//lib->GetDelegateAuthorizationStateWaitEncryptionKey()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitEncryptionKey);
		//lib->GetDelegateAuthorizationStateWaitTdlibParameters()->Connect(this, &UTelegrammAPIWindows::AuthorizationStateWaitTdlibParameters);

		std::function<void(void)> f = (std::bind(&UTelegrammAPIWindows::AuthorizationStateReady, this));
		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - callback prepared"));
		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - checking..."));
		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - checking..."));
		//int a = 10;
		//int b = 20;
		//int c = 50;
		//c = a + b;
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - Set"));
		//lib->func = f;

		//int a1 = 10;
		//int b1 = 20;
		//int c1 = 50;
		//c = a1 + b1;

		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - checking..."));
		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - checking..."));

		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - Initialize"));
		lib->Initialize(params_);





		if (lib->Initialized())
		{
			UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - INITIALIZED!"));
		}

		isListening = true;

		//	after conection initialization call this
		std::thread listener(&UTelegrammAPIWindows::Loop, this);
		listener.detach();
	}
}

void UTelegrammAPIWindows::StopListening()
{
	isListening = false;
}

void UTelegrammAPIWindows::Loop()
{
	while (isListening)
	{
		if (isListening)
		{
			lib->ReadData();
		}
		UE_LOG(LogTemp, Warning, TEXT("UTelegrammAPIWindows UE API - READ DATA"));
		std::cout << "UTelegrammAPIWindows UE API - READ DATA" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
}

void UTelegrammAPIWindows::AuthorizationStateReady()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateReady..."));
}
void UTelegrammAPIWindows::AuthorizationStateLoggingOut()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateLoggingOut..."));
}
void UTelegrammAPIWindows::AuthorizationStateClosing()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosing..."));
}
void UTelegrammAPIWindows::AuthorizationStateClosed()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosed..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitCode()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitCode..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitRegistration()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitRegistration..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitPassword()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPassword..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitPhoneNumber()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPhoneNumber..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitEncryptionKey()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitEncryptionKey..."));
}
void UTelegrammAPIWindows::AuthorizationStateWaitTdlibParameters()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitTdlibParameters..."));
}