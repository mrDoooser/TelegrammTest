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

		std::thread listener(&UTelegrammConnector::Loop, this);
		listener.detach();
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

void UTelegrammConnector::Clear()
{
	StopListening();
	if(lib != nullptr)
		delete lib;
}

void UTelegrammConnector::Loop()
{
	while (isListening)
	{
		if (isListening && lib)
		{
			lib->ReadData();
		}
		else
		{ 
			return;
		}

		//UE_LOG(LogTemp, Warning, TEXT("UTelegrammConnector UE API - READ DATA"));
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
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

	lib->OnChatUpdated = (std::bind(&UTelegrammConnector::ChatUpdated, this, std::placeholders::_1));
	lib->OnUserUpdated = (std::bind(&UTelegrammConnector::UserUpdated, this, std::placeholders::_1));

	lib->OnMessgaeUpdated = (std::bind(&UTelegrammConnector::MessageUpdated, this, std::placeholders::_1));
}

void UTelegrammConnector::AuthorizationStateReady()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateReady..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateReady.Broadcast();
	});
	lib->UpdateChatlist();
}
void UTelegrammConnector::AuthorizationStateLoggingOut()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateLoggingOut..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateLoggingOut.Broadcast();
	});
}
void UTelegrammConnector::AuthorizationStateClosing()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosing..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateClosing.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateClosed()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateClosed..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateClosed.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitCode()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitCode..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitCode.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitRegistration()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitRegistration..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitRegistration.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitPassword()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPassword..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitPassword.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitPhoneNumber()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitPhoneNumber..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitPhoneNumber.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitEncryptionKey()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitEncryptionKey..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitEncryptionKey.Broadcast();
	});

}
void UTelegrammConnector::AuthorizationStateWaitTdlibParameters()
{
	UE_LOG(LogTemp, Warning, TEXT("TdLibTest callback - AuthorizationStateWaitTdlibParameters..."));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnAuthorizationStateWaitTdlibParameters.Broadcast();
	});

}

void UTelegrammConnector::SetAuthorizationCode(FString code)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStatePassword - code: %s"), *code);
	lib->SetAuthorizationCode(ConvertCharParam(code));
}

void UTelegrammConnector::SetAuthorizationStateRegistration(FString first_name, FString last_name)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStateRegistration - first_name: %s last_name: %s"), *first_name, *last_name);
	lib->SetAuthorizationStateRegistration(ConvertCharParam(first_name), ConvertCharParam(last_name));
}

void UTelegrammConnector::SetAuthorizationStatePassword(FString password)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStatePassword - password: %s"), *password);
	lib->SetAuthorizationStatePassword(ConvertCharParam(password));
}

void UTelegrammConnector::SetAuthorizationStatePhoneNumber(FString phone_number)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStatePhoneNumber - phone_number: %s"), *phone_number);
	lib->SetAuthorizationStatePhoneNumber(ConvertCharParam(phone_number));
}

void UTelegrammConnector::SetAuthorizationStateEncryptionKey(FString key)
{
	UE_LOG(LogTemp, Warning, TEXT("SetAuthorizationStateEncryptionKey - Key: %s"), *key);
	lib->SetAuthorizationStateEncryptionKey(ConvertCharParam(key));
}

void UTelegrammConnector::SetAuthorizationStateDestroy()
{
	lib->SetAuthorizationStateDestroy();
}

void UTelegrammConnector::SetAuthorizationStateTdlibParameters()
{
	lib->SetAuthorizationStateTdlibParameters();
}

char* UTelegrammConnector::ConvertCharParam(FString inString)
{
	std::string strParam = FStringToSTDString(inString);

	char* charParam = new char[strParam.size() + 1];
	std::copy(strParam.begin(), strParam.end(), charParam);
	charParam[strParam.size()] = '\0';

	return charParam;
}

void UTelegrammConnector::ChatUpdated(FChatInfo chatInfo)
{
	FTelegrammChatInfo NewData(chatInfo);
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnChatUpdated.Broadcast(NewData);
	});
}

void UTelegrammConnector::UserUpdated(FUserInfo UserInfo)
{
	FTelegrammUserInfo NewData(UserInfo);
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnUserUpdated.Broadcast(NewData);
	});
}

void UTelegrammConnector::MessageUpdated(FMessage message)
{
	FTelegrammMessageInfo NewData(message);
	UE_LOG(LogTemp, Warning, TEXT("MessageUpdated - Sender:%i Text: %s"), NewData.SenderUserId, *NewData.TextContent);
	//OnMessageUpdated.Broadcast(NewData);
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		OnMessageUpdated.Broadcast(NewData);
	});
}

//void UTelegrammConnector::GetChatHistory(std::int64_t chatId, std::int64_t fromMessageId, std::int32_t offset, std::int32_t limit, bool onlyLocal)
void UTelegrammConnector::GetChatHistory(int64 chatId, int64 fromMessageId, int64 offset, int64 limit, bool onlyLocal)
{
	lib->GetChatHistory(chatId, fromMessageId, offset, limit, onlyLocal);
}