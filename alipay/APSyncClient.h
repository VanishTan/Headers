//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APSyncRequestDelegate-Protocol.h"
#import "SyncDelayRequestDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSString;

@interface APSyncClient : NSObject <APSyncRequestDelegate, SyncDelayRequestDelegate>
{
    NSMutableDictionary *_listenersHash;
    NSMutableDictionary *_requestHash;
    NSMutableDictionary *_delayRequestHash;
    long long _nextSyncSeq;
    NSLock *_lock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long nextSyncSeq; // @synthesize nextSyncSeq=_nextSyncSeq;
@property(retain, nonatomic) NSMutableDictionary *delayRequestHash; // @synthesize delayRequestHash=_delayRequestHash;
@property(retain, nonatomic) NSMutableDictionary *requestHash; // @synthesize requestHash=_requestHash;
@property(retain, nonatomic) NSMutableDictionary *listenersHash; // @synthesize listenersHash=_listenersHash;
- (void).cxx_destruct;
- (void)stopSendSyncAllSendingMsg;
@property(readonly, nonatomic) NSString *userId;
- (void)sendOpLogs;
- (void)resendAllSendingSyncMsg;
- (void)sendOpLogWithNextNumber:(long long)arg1;
- (void)syncRequestTimeOut:(id)arg1;
- (void)sendOpLogNextNumber;
- (void)sendedResponse:(id)arg1;
- (void)cancelSendSyncMsg:(id)arg1;
- (id)removeDeleyRequestForKey:(id)arg1;
- (void)addDeleySyncRequest:(id)arg1;
- (id)removeRequestForKey:(long long)arg1;
- (void)addSyncRequest:(id)arg1;
- (void)syncTime2Request:(id)arg1;
- (void)sendDelayOpLog:(id)arg1 delay:(double)arg2;
- (void)sendDelayOpLog:(id)arg1;
- (void)sendOpLogs:(id)arg1 retryCount:(long long)arg2;
- (id)listenerWithBiz:(id)arg1;
- (id)sendSyncMsg:(id)arg1 needCallback:(_Bool)arg2;
- (void)notifyBizHadSended:(id)arg1;
- (void)notifyAllRegisterBizHadSended;
- (_Bool)registerSendBiz:(id)arg1 callback:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
