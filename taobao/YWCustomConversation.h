//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWConversation.h"

@class NSString;

@interface YWCustomConversation : YWConversation
{
    NSString *_customId;
}

+ (id)makeConversationWithWWSession:(id)arg1 baseContext:(id)arg2;
+ (id)fetchConversationByConversationId:(id)arg1 creatIfNotExist:(_Bool)arg2 baseContext:(id)arg3;
@property(copy, nonatomic) NSString *customId; // @synthesize customId=_customId;
- (void).cxx_destruct;
- (id)wwsession;
- (id)wwsessionId;
- (void)clearContentChangeBlocks;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)fetchedObjects;
- (void)markMessageAsReadWithMessageIds:(id)arg1;
- (void)removeMessageWithMessageId:(id)arg1;
- (void)autoRoamChatLogWithConversationId:(id)arg1 endTime:(id)arg2 count:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)roamChatLogWithConversationId:(id)arg1 endTime:(id)arg2 count:(unsigned long long)arg3 nextKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setupFetchedResultsControllerWithLimit:(unsigned long long)arg1 existMore:(_Bool *)arg2;
- (void)_asyncForwardMessage:(id)arg1 controlParameters:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)asyncResendMessage:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_asyncSendMessageBody:(id)arg1 controlParameters:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMessageReceiveFlag:(long long)arg1;
- (id)searchMessagesWithKeyword:(id)arg1;
- (id)conversationLatestMessageContent;
- (id)conversationUnreadMessagesCount;
- (id)conversationLatestMessageTime;
- (id)conversationLatestMessage;
- (id)conversationId;
- (id)initWithConversationId:(id)arg1 baseContext:(id)arg2;
- (void)modifyUnreadCount:(id)arg1 latestContent:(id)arg2 latestTime:(id)arg3;

@end
