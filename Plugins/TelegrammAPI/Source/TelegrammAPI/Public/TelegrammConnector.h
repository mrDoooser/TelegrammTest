
#pragma once
#include "EngineMinimal.h"
#include "Core.h"
#include "CoreMinimal.h"
#include "Misc/DateTime.h"

#include <UETdApiLibrary.h>
#include <UETdApiStructs.h>

#include "TelegrammConnector.generated.h"

USTRUCT(BlueprintType)
struct FTelegrammChatInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 id; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Order;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPinned; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMarkedAsUnread; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSponsored; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeDeletedOnlyForSelf; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeDeletedForAllUsers; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeReported; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DefaultDisableNotification; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 UnreadCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastReadInboxMessageId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastReadOutboxMessageId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 UnreadMentionCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 PinnedMessageId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientData;

	FTelegrammChatInfo() {};

	FTelegrammChatInfo(FChatInfo Info)
	{
		id = Info.id;
		Title = FString(UTF8_TO_TCHAR(Info.title));
		Order = Info.order;
		IsPinned = Info.isPinned;
		IsMarkedAsUnread = Info.isMarkedAsUnread;
		IsSponsored = Info.isSponsored;
		CanBeDeletedOnlyForSelf = Info.canBeDeletedOnlyForSelf;
		CanBeDeletedForAllUsers = Info.canBeDeletedForAllUsers;
		CanBeReported = Info.canBeReported;
		DefaultDisableNotification = Info.defaultDisableNotification;
		UnreadCount = Info.unreadCount;
		LastReadInboxMessageId = Info.lastReadInboxMessageId;
		LastReadOutboxMessageId = Info.lastReadOutboxMessageId;
		UnreadMentionCount = Info.unreadMentionCount;
		PinnedMessageId = Info.pinnedMessageId;
		ClientData = FString(UTF8_TO_TCHAR(Info.clientData));
	}
};

USTRUCT(BlueprintType)
struct FTelegrammUserInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FirstName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Username;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PhoneNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVerified;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSupport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RestrictionReason;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsScam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HaveAccess;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LanguageCode;

	FTelegrammUserInfo()
	{
	}

	FTelegrammUserInfo(FUserInfo Info)
	{
		id = Info.id;
		FirstName = FString(UTF8_TO_TCHAR(Info.firstName));
		LastName = FString(UTF8_TO_TCHAR(Info.lastName));
		Username = FString(UTF8_TO_TCHAR(Info.username));
		PhoneNumber = FString(UTF8_TO_TCHAR(Info.phoneNumber));
		IsVerified = Info.isVerified;
		IsSupport = Info.isSupport;
		RestrictionReason = FString(UTF8_TO_TCHAR(Info.restrictionReason));
		IsScam = Info.isScam;
		HaveAccess = Info.haveAccess;
		LanguageCode = FString(UTF8_TO_TCHAR(Info.languageCode));
	}
};

USTRUCT(BlueprintType)
struct FTelegrammMessageInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TextContent;
	/// Identifier of the user who sent the message; 0 if unknown. Currently, it is unknown for channel posts and for channel posts automatically forwarded to discussion group.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SenderUserId;
	/// Chat identifier.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ChatId;
	/// True, if the message is outgoing.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOutgoing; 
	/// True, if the message can be edited. For live location and poll messages this fields shows, whether editMessageLiveLocation or stopPoll can be used with this message by the client.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeEdited; 
	/// True, if the message can be forwarded.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeForwarded; 
	/// True, if the message can be deleted only for the current user while other users will continue to see it.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeDeletedOnlyForSelf;
	/// True, if the message can be deleted for all users.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeDeletedForAllUsers; 
	/// True, if the message is a channel post. All messages to channels are channel posts, all other messages are not channel posts.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsChannelPost; 
	/// True, if the message contains an unread mention for the current user.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ContainsUnreadMention; 
	/// Point in time (Unix timestamp) when the message was sent.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//int32 Date; 
	FDateTime Date;
	/// Point in time (Unix timestamp) when the message was last edited.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//int32 EditDate; 	
	FDateTime EditDate;
	/// If non-zero, the identifier of the message this message is replying to; can be the identifier of a deleted message.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ReplyToMessageId; 	
	/// For self-destructing messages, the message's TTL (Time To Live), in seconds; 0 if none. TDLib will send updateDeleteMessages or updateMessageContent once the TTL expires.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Ttl; 	
	/// Time left before the message expires, in seconds.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TtlExpiresIn; 
	/// If non-zero, the user identifier of the bot through which this message was sent.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ViaBotUserId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuthorSignature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Views; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 MediaAlbumId;

	FTelegrammMessageInfo() {}

	FTelegrammMessageInfo(FMessage message)
	{
		Id = message.id;
		TextContent = FString(UTF8_TO_TCHAR(message.textContent));
		SenderUserId = message.senderUserId;
		ChatId = message.chatId;
		IsOutgoing = message.isOutgoing;
		CanBeEdited = message.canBeEdited;
		CanBeForwarded = message.canBeForwarded;
		CanBeDeletedOnlyForSelf = message.canBeDeletedOnlyForSelf;
		CanBeDeletedForAllUsers = message.canBeDeletedForAllUsers;
		IsChannelPost = message.isChannelPost;
		ContainsUnreadMention = message.containsUnreadMention;
		Date = FDateTime::FromUnixTimestamp(message.date);
		EditDate = FDateTime::FromUnixTimestamp(message.editDate);
		ReplyToMessageId = message.replyToMessageId;
		Ttl = message.ttl;
		TtlExpiresIn = message.ttlExpiresIn;
		ViaBotUserId = message.viaBotUserId;
		AuthorSignature = FString(UTF8_TO_TCHAR(message.authorSignature));
		Views = message.views;
		MediaAlbumId = message.mediaAlbumId;
	}
};

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
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChatUpdated, FTelegrammChatInfo, ChatInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserUpdated, FTelegrammUserInfo, UserInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageUpdated, FTelegrammMessageInfo, MessageInfo);




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
		Clear();
	}

	UFUNCTION(BlueprintCallable)
	bool Initialized();

	UFUNCTION(BlueprintCallable)
	void InitTD();

	UFUNCTION(BlueprintCallable)
	void StopListening();

	UFUNCTION(BlueprintCallable)
	void Clear();

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

	// Chats and messages commands
	UFUNCTION(BlueprintCallable)
	void GetChatHistory(int64 chatId, int64 fromMessageId, int64 offset, int64 limit, bool onlyLocal);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isListening;

	std::string strPhone_number;

	std::string FStringToSTDString(FString inString) { return std::string (TCHAR_TO_UTF8(*inString)); }
	char* ConvertCharParam(FString inString);

	//UFUNCTION()
	void ChatUpdated(FChatInfo chatInfo);
	//UFUNCTION()
	void UserUpdated(FUserInfo UserInfo);

	void MessageUpdated(FMessage message);

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

	UPROPERTY(BlueprintAssignable)
	FOnChatUpdated OnChatUpdated;
	UPROPERTY(BlueprintAssignable)
	FOnUserUpdated OnUserUpdated;

	UPROPERTY(BlueprintAssignable)
	FOnMessageUpdated OnMessageUpdated;
};