//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EmojiAssociateStore : NSObject <ISCListenerCallback, ISCBusinessCallback>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_cloudKeyWords;
    NSMutableDictionary *_cloudRequestTimeCache;
    _Bool isOpenCloudSearh;
    _Bool finishLoading;
}

+ (id)keywordConfigPath;
+ (id)GetInstance;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)saveRequestTime;
- (void)saveHistoryEmoji:(id)arg1 keyWord:(id)arg2;
- (void)saveCloudEmoji:(id)arg1 keyWord:(id)arg2;
- (void)addHistoryEmoji:(id)arg1;
- (void)dealWithEmojiInfokeyword:(id)arg1 show:(id)arg2 allEmojiInfos:(id)arg3 clearFlag:(_Bool)arg4 selectID:(id)arg5 historys:(id)arg6;
- (void)dealCloudKeyWords:(id)arg1;
- (void)dealCloudKeyWordsFile:(_Bool)arg1;
- (void)clearAllInfo;
- (void)initializeKeyWordData;
- (id)getEmojiAssociateQueue;
- (void)setCloudKeywordTime:(id)arg1;
- (_Bool)checkCloudKeywordTimeIsOK:(id)arg1;
- (id)queryEmojiAssociateResult:(id)arg1;
- (void)dealloc;
- (void)onVipChange;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
