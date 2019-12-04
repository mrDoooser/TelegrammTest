#pragma once
#include "UETdApiStructs.h"
#include "Delegate.hpp"
#include <functional>
#include <mutex>
//#include "UETdApi.h"
//#include "pch.h"

#define DLL_EXPORT __declspec(dllexport)	

class UETdApi;

#ifdef __cplusplus		
extern "C"
{
#endif
	class UETdApiLibrary
	{
	public:
		__declspec(dllexport) UETdApiLibrary();
		
		__declspec(dllexport) ~UETdApiLibrary();

		__declspec(dllexport) bool Initialized();

		__declspec(dllexport) void Initialize(FTdApiInitParams *init_params);

		__declspec(dllexport) void ReadData();

		//__declspec(dllexport) void SetFunc(std::function<void(void)> &func);

		//__declspec(dllexport) std::function<void(void)>* GetFunc();

		//__declspec(dllexport) void SetCallbackFunc(void (*func)());
		//
		//__declspec(dllexport) void SetCallbackFunc(std::function<void()>func);

		//__declspec(dllexport) void CallbackFunc();

		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateReady();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateLoggingOut();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateClosing();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateClosed();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitCode();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitRegistration();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitPassword();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitPhoneNumber();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitEncryptionKey();
		//__declspec(dllexport) Delegate* GetDelegateAuthorizationStateWaitTdlibParameters();
	private:
		void SetCallbackFunctions();

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

	private:
		UETdApi* API;

		std::mutex EventController;
	public:
		//std::function<void(void)> func;

		std::function<void(void)> OnAuthorizationStateReady;
		std::function<void(void)> OnAuthorizationStateLoggingOut;
		std::function<void(void)> OnAuthorizationStateClosing;
		std::function<void(void)> OnAuthorizationStateClosed;
		std::function<void(void)> OnAuthorizationStateWaitCode;
		std::function<void(void)> OnAuthorizationStateWaitRegistration;
		std::function<void(void)> OnAuthorizationStateWaitPassword;
		std::function<void(void)> OnAuthorizationStateWaitPhoneNumber;
		std::function<void(void)> OnAuthorizationStateWaitEncryptionKey;
		std::function<void(void)> OnAuthorizationStateWaitTdlibParameters;

		// Authorizations
		__declspec(dllexport) void SetAuthorizationCode(std::string *code);
		__declspec(dllexport) void SetAuthorizationStateRegistration(std::string *first_name, std::string *last_name);
		__declspec(dllexport) void SetAuthorizationStatePassword(std::string *password);
		__declspec(dllexport) void SetAuthorizationStatePhoneNumber(std::string *phone_number);
		__declspec(dllexport) void SetAuthorizationStateEncryptionKey(std::string *key);
		__declspec(dllexport) void SetAuthorizationStateDestroy();
		__declspec(dllexport) void SetAuthorizationStateTdlibParameters();
	};
#ifdef __cplusplus
}
#endif





