#pragma once
//#include "pch.h"
#include <string>

// overloaded
namespace detail {
	template <class... Fs>
	struct overload;

	template <class F>
	struct overload<F> : public F {
		explicit overload(F f) : F(f) {
		}
	};
	template <class F, class... Fs>
	struct overload<F, Fs...>
		: public overload<F>
		, overload<Fs...> {
		overload(F f, Fs... fs) : overload<F>(f), overload<Fs...>(fs...) {
		}
		using overload<F>::operator();
		using overload<Fs...>::operator();
	};
}  // namespace detail

template <class... F>
auto overloaded(F... f) {
	return detail::overload<F...>(f...);
}

struct FTdApiInitParams
{
	int32_t api_id_;
	std::string api_hash_;
	std::string system_language_code_ = "en";
	std::string device_model_ = "Desktop";
	std::string system_version_ = "Unknown";
	std::string application_version_ = "1.0";
	std::string database_directory_ = "UEChatTest";

};


struct FChatInfo
{
	std::int64_t id; //std::int64_t id_ //Chat unique identifier.
	//object_ptr< ChatType > type_ //Type of the chat.
	char* title; //std::string 	title_  //Chat title.
	//object_ptr< chatPhoto > photo_ //Chat photo; may be null.
	//object_ptr< chatPermissions >	permissions_ //Actions that non - administrator chat members are allowed to take in the chat.
	//object_ptr< message > last_message_ //Last message in the chat; may be null.
	std::int64_t order; //std::int64_t 	order_ //Descending parameter by which chats are sorted in the main chat list.If the order number of two chats is the same, they must be sorted in descending order by ID.If 0, the position of the chat in the list is undetermined.
	bool isPinned; //bool 	is_pinned_ //True, if the chat is pinned.
	bool isMarkedAsUnread; //bool 	is_marked_as_unread_ //True, if the chat is marked as unread.
	bool isSponsored; //bool 	is_sponsored_ //True, if the chat is sponsored by the user's MTProxy server.
	bool canBeDeletedOnlyForSelf; //bool 	can_be_deleted_only_for_self_ //True, if the chat messages can be deleted only for the current user while other users will continue to see the messages.
	bool canBeDeletedForAllUsers; //bool 	can_be_deleted_for_all_users_ //True, if the chat messages can be deleted for all users.
	bool canBeReported; //bool 	can_be_reported_ //True, if the chat can be reported to Telegram moderators through reportChat.
	bool defaultDisableNotification; //bool 	default_disable_notification_ //Default value of the disable_notification parameter, used when a message is sent to the chat.
	std::int32_t unreadCount; //std::int32_t 	unread_count_ //Number of unread messages in the chat.
	std::int64_t lastReadInboxMessageId;//std::int64_t 	last_read_inbox_message_id_ //Identifier of the last read incoming message.
	std::int64_t lastReadOutboxMessageId; //std::int64_t 	last_read_outbox_message_id_ //Identifier of the last read outgoing message.
	std::int32_t unreadMentionCount; //std::int32_t 	unread_mention_count_ //Number of unread messages with a mention / reply in the chat.
	//object_ptr< chatNotificationSettings > 	notification_settings_ //Notification settings for this chat.
	std::int64_t pinnedMessageId; //std::int64_t 	pinned_message_id_ //Identifier of the pinned message in the chat; 0 if none.
	std::int64_t replyMarkupMessageId; //std::int64_t 	reply_markup_message_id_ //Identifier of the message from which reply markup needs to be used; 0 if there is no default custom reply markup in the chat.
	//object_ptr< draftMessage > 	draft_message_ //A draft of a message in the chat; may be null.
	char* clientData; //std::string 	client_data_ 
};

struct FUserInfo
{
	/// User identifier.
	std::int32_t id;//std::int32_t id_;
	/// First name of the user.
	char* firstName; //std::string first_name_;
	/// Last name of the user.
	char* lastName;//std::string last_name_;
	/// Username of the user.
	char* username;//std::string username_;
	/// Phone number of the user.
	char* phoneNumber;//std::string phone_number_;
	/// Current online status of the user.
	//object_ptr<UserStatus> status_;
	/// Profile photo of the user; may be null.
	//object_ptr<profilePhoto> profile_photo_;
	/// Relationship from the current user to the other user.
	//object_ptr<LinkState> outgoing_link_;
	/// Relationship from the other user to the current user.
	//object_ptr<LinkState> incoming_link_;
	/// True, if the user is verified.
	bool isVerified; //bool is_verified_;
	/// True, if the user is Telegram support account.
	bool isSupport; //bool is_support_;
	/// If non-empty, it contains the reason why access to this user must be restricted. The format of the string is &quot;{type}: {description}&quot;. {type} contains the type of the restriction and at least one of the suffixes &quot;-all&quot;, &quot;-ios&quot;, &quot;-android&quot;, or &quot;-wp&quot;, which describe the platforms on which access should be restricted. (For example, &quot;terms-ios-android&quot;. {description} contains a human-readable description of the restriction, which can be shown to the user.)
	char* restrictionReason;  //std::string restriction_reason_;
	/// True, if many users reported this user as a scam.
	bool isScam; //bool is_scam_;
	/// If false, the user is inaccessible, and the only information known about the user is inside this class. It can't be passed to any method except GetUser.
	bool haveAccess; //bool have_access_;
	/// Type of the user.
	//object_ptr<UserType> type_;
	/// IETF language tag of the user's language; only available to bots.
	char* languageCode;//std::string language_code_;

};

struct FMessage 
{
	/// Message identifier, unique for the chat to which the message belongs.
	std::int64_t id; //std::int64_t id_;
	/// Identifier of the user who sent the message; 0 if unknown. Currently, it is unknown for channel posts and for channel posts automatically forwarded to discussion group.
	std::int32_t senderUserId;//std::int32_t sender_user_id_;
	/// Chat identifier.
	std::int64_t chatId; //std::int64_t chat_id_;
	/// Information about the sending state of the message; may be null.
	//object_ptr<MessageSendingState> sending_state_;
	/// True, if the message is outgoing.
	bool isOutgoing; //bool is_outgoing_;
	/// True, if the message can be edited. For live location and poll messages this fields shows, whether editMessageLiveLocation or stopPoll can be used with this message by the client.
	bool canBeEdited; //bool can_be_edited_;
	/// True, if the message can be forwarded.
	bool canBeForwarded; //bool can_be_forwarded_;
	/// True, if the message can be deleted only for the current user while other users will continue to see it.
	bool canBeDeletedOnlyForSelf;//bool can_be_deleted_only_for_self_;
	/// True, if the message can be deleted for all users.
	bool canBeDeletedForAllUsers; //bool can_be_deleted_for_all_users_;
	/// True, if the message is a channel post. All messages to channels are channel posts, all other messages are not channel posts.
	bool isChannelPost; //bool is_channel_post_;
	/// True, if the message contains an unread mention for the current user.
	bool containsUnreadMention;//	bool contains_unread_mention_;
	/// Point in time (Unix timestamp) when the message was sent.
	std::int32_t date; //std::int32_t date_;
	/// Point in time (Unix timestamp) when the message was last edited.
	std::int32_t editDate; //std::int32_t edit_date_;
	/// Information about the initial message sender; may be null.
	//object_ptr<messageForwardInfo> forward_info_;
	/// If non-zero, the identifier of the message this message is replying to; can be the identifier of a deleted message.
	std::int64_t replyToMessageId; //std::int64_t reply_to_message_id_;
	/// For self-destructing messages, the message's TTL (Time To Live), in seconds; 0 if none. TDLib will send updateDeleteMessages or updateMessageContent once the TTL expires.
	std::int32_t ttl; //std::int32_t ttl_;
	/// Time left before the message expires, in seconds.
	double ttlExpiresIn; //double ttl_expires_in_;
	/// If non-zero, the user identifier of the bot through which this message was sent.
	std::int32_t viaBotUserId;//std::int32_t via_bot_user_id_;
	/// For channel posts, optional author signature.
	char* authorSignature;//std::string author_signature_;
	/// Number of times this message was viewed.
	std::int32_t views; //std::int32_t views_;
	/// Unique identifier of an album this message belongs to. Only photos and videos can be grouped together in albums.
	std::int64_t mediaAlbumId; //std::int64_t media_album_id_;
	/// Content of the message.
	//object_ptr<MessageContent> content_;
	char* textContent;
	/// Reply markup for the message; may be null.
	//object_ptr<ReplyMarkup> reply_markup_;
};