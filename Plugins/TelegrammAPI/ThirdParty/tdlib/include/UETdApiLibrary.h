#pragma once
#include "UETdApiStructs.h"
#include "Delegate.hpp"
#include <functional>
#include <mutex>
#include <map>

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
		// Callbacks
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
		__declspec(dllexport) void SetAuthorizationCode(char* code);
		__declspec(dllexport) void SetAuthorizationStateRegistration(char* first_name, char* last_name);
		__declspec(dllexport) void SetAuthorizationStatePassword(char* password);
		__declspec(dllexport) void SetAuthorizationStatePhoneNumber(char* phone_number);
		__declspec(dllexport) void SetAuthorizationStateEncryptionKey(char* key);
		__declspec(dllexport) void SetAuthorizationStateDestroy();
		__declspec(dllexport) void SetAuthorizationStateTdlibParameters();

	public:
		// Chats
		__declspec(dllexport) void UpdateChatlist();
		__declspec(dllexport) std::map<std::int64_t, FChatInfo>* GetChatlist();
		//void ChatlistUpdated(std::vector<FChatInfo>);
		void ChatlistUpdated();
		void ChatUpdated(FChatInfo);
		void UserUpdated(FUserInfo UserInfo);

		//Callbacks
		std::function<void(void)> OnChatlistUpdated;
		std::function<void(FChatInfo)> OnChatUpdated;
		std::function<void(FUserInfo)> OnUserUpdated;

	public:
		// Commands
		__declspec(dllexport) void GetChatHistory(std::int64_t chatId, std::int64_t fromMessageId, std::int32_t offset, std::int32_t limit, bool onlyLocal);

		// Messages
		void MessageUpdated(FMessage message);


		//Callbacks
		std::function<void(FMessage message)> OnMessgaeUpdated;
	};
#ifdef __cplusplus
}
#endif






