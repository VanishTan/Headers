//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "TBInAppPushBizConfigProtocol-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TBMessageCenterInnerPushManager : MKTMsgBusHelp <TBInAppPushBizConfigProtocol>
{
    NSObject<OS_dispatch_queue> *_pushQueue;
    double _innerPushRangeTime;
    long long _innerPushRangeShowCount;
    double _innerPushRangeInterval;
    double _rangeBeginTime;
    double _rangeHitCount;
    double _lastSendTime;
    unsigned long long _dbDataIndexHead;
    unsigned long long _dbDataIndexTail;
}

+ (id)sharedManager;
@property(nonatomic) unsigned long long dbDataIndexTail; // @synthesize dbDataIndexTail=_dbDataIndexTail;
@property(nonatomic) unsigned long long dbDataIndexHead; // @synthesize dbDataIndexHead=_dbDataIndexHead;
@property(nonatomic) double lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property(nonatomic) double rangeHitCount; // @synthesize rangeHitCount=_rangeHitCount;
@property(nonatomic) double rangeBeginTime; // @synthesize rangeBeginTime=_rangeBeginTime;
@property(nonatomic) double innerPushRangeInterval; // @synthesize innerPushRangeInterval=_innerPushRangeInterval;
@property(nonatomic) long long innerPushRangeShowCount; // @synthesize innerPushRangeShowCount=_innerPushRangeShowCount;
@property(nonatomic) double innerPushRangeTime; // @synthesize innerPushRangeTime=_innerPushRangeTime;
- (void).cxx_destruct;
- (id)loadFromDb;
- (void)saveToDb:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (_Bool)needMergedPushMessage;
- (id)disableOnViewControllers;
- (long long)pushStyle;
- (id)mergedPushMessageTitle:(id)arg1;
- (id)mergedPushMessageActionUrl;
- (id)mergedPushMessageHeadUrl;
- (id)bizId;
- (void)dealDbNotify;
- (void)receivePushNotify:(id)arg1;
- (void)sendPushNotify:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

