//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBLifeCircleCacheService, TBLifeCircleLocationItem;

@interface TBLifeCircleLocationService : NSObject
{
    TBLifeCircleLocationItem *_location;
    TBLifeCircleCacheService *_cacheService;
}

+ (id)defaultService;
@property(retain, nonatomic) TBLifeCircleCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(retain, nonatomic) TBLifeCircleLocationItem *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)updateCurrentLocation:(id)arg1;
- (id)lastLocation;
- (void)switchLocationForTriger:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)switchLocationDictionaryForTriger:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)switchLocation;
- (_Bool)isLocationServiceEnabled;
- (void)requestCurrentLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)postLocationLoadingStatusNotificationForStatus:(long long)arg1;
- (void)requestAddressInfoByLocationItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAddrInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)cacheLocation;
- (id)currentLocation;

@end
