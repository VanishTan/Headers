//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSTimer;

@interface QQWalletMsgDispather : NSObject
{
    NSMutableDictionary *_aapayPushModels;
    NSMutableArray *_pushDealGoldMsgModels;
    NSTimer *_pushDealGoldMsgTimer;
    long long _spareTimeCounter;
    NSMutableDictionary *_messages;
    NSDate *_lastCacheTime;
}

+ (id)shareManager;
@property(retain, nonatomic) NSDate *lastCacheTime; // @synthesize lastCacheTime=_lastCacheTime;
@property(retain, nonatomic) NSMutableDictionary *messages; // @synthesize messages=_messages;
@property(nonatomic) long long spareTimeCounter; // @synthesize spareTimeCounter=_spareTimeCounter;
@property(retain, nonatomic) NSTimer *pushDealGoldMsgTimer; // @synthesize pushDealGoldMsgTimer=_pushDealGoldMsgTimer;
@property(retain, nonatomic) NSMutableArray *pushDealGoldMsgModels; // @synthesize pushDealGoldMsgModels=_pushDealGoldMsgModels;
@property(retain, nonatomic) NSMutableDictionary *aapayPushModels; // @synthesize aapayPushModels=_aapayPushModels;
- (void).cxx_destruct;
- (void)handleDidEnterBackgroundNotification;
- (void)restoreAAPayPushModelsFromDisk;
- (void)saveAAPayPushModelToDisk;
- (void)aapayPushReceived:(id)arg1;
- (id)pushModelFromPB:(struct CPBMessageDecoder *)arg1;
- (void)_innerReceivedGoldMsgPush:(id)arg1;
- (void)didReceivedGoldMsgPush:(struct CPBMessageDecoder *)arg1;
- (void)removeMsgesIfNeeded:(id)arg1;
- (_Bool)isDuplicatedMsg:(const void *)arg1 nLenght:(int)arg2;
- (void)didReceivedOfflineMsg:(struct CPBMessageDecoder *)arg1;
- (void)didReceivedOnlineMsg:(struct CPBMessageDecoder *)arg1;
- (void)didReceived2DBarCodeMsg:(const void *)arg1 nLength:(int)arg2;
- (void)didReceivedMsgOrigin:(const void *)arg1 nLength:(int)arg2 isOnline:(_Bool)arg3;
- (id)init;

@end

