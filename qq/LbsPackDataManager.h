//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface LbsPackDataManager : NSObject
{
    NSMutableDictionary *_lbsNickDataCache;
    NSObject<OS_dispatch_queue> *_queue_lbs_req_nick;
    NSMutableDictionary *_lbsConfigCache;
    NSObject<OS_dispatch_queue> *_queue_lbs_pack_config;
    NSDictionary *_threadConfDict;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSDictionary *threadConfDict; // @synthesize threadConfDict=_threadConfDict;
- (void).cxx_destruct;
- (id)lbsPackSynGetNickFromCache:(id)arg1;
- (void)lbsPackNickAsynLoadToCache;
- (void)lbsPackAsynSaveNickData:(id)arg1 forKey:(id)arg2;
- (void)reqRPackSenderNick:(id)arg1 cmpBlock:(CDUnknownBlockType)arg2;
- (id)parseGreetingConfigStr:(id)arg1;
- (id)showActivityGreeting:(id)arg1;
- (id)getCfgStrValueForKey:(id)arg1;
- (id)lbsPackSynGetValueForKey:(id)arg1;
- (void)lbsPackConfigAsynLoadToCache;
- (void)lbsPackAsynSaveConfig:(id)arg1;
- (void)lbsPackResetAccountRelated;
- (id)init;

@end
