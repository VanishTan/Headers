//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSBuyConfig;

@interface KSExchangeManager : NSObject
{
    KSBuyConfig *_config;
}

+ (id)sharedKSExchangeManager;
@property(retain, nonatomic) KSBuyConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)requestConfigOnSuccess:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)didEnterBackground;
- (id)yellowZuanWithKCoin:(id)arg1;
- (id)kCoinWithYellowZuan:(id)arg1;
- (id)kCoinWithFen:(id)arg1;
- (id)fenWithKCoin:(id)arg1;
- (void)refreshStatusIfNeed;
- (void)dealloc;
- (id)init;

@end
