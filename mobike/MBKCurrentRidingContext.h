//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKGiftBoxMPLInfo, MBKLocationCoordinate2D, NSDictionary;

@interface MBKCurrentRidingContext : NSObject
{
    _Bool _bikeIsNormalTypeAndHasNearbyPOIWhenUnlocking;
    _Bool _useBlueToothInUnlocking;
    _Bool _unlockByMqtt;
    _Bool _lockedByMqtt;
    MBKLocationCoordinate2D *_lastSelectedAnnotaionIdentifer;
    NSDictionary *_ridingParams;
    MBKGiftBoxMPLInfo *_giftBoxInfo;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool lockedByMqtt; // @synthesize lockedByMqtt=_lockedByMqtt;
@property(nonatomic) _Bool unlockByMqtt; // @synthesize unlockByMqtt=_unlockByMqtt;
@property(nonatomic) _Bool useBlueToothInUnlocking; // @synthesize useBlueToothInUnlocking=_useBlueToothInUnlocking;
@property(nonatomic) _Bool bikeIsNormalTypeAndHasNearbyPOIWhenUnlocking; // @synthesize bikeIsNormalTypeAndHasNearbyPOIWhenUnlocking=_bikeIsNormalTypeAndHasNearbyPOIWhenUnlocking;
@property(retain, nonatomic) MBKGiftBoxMPLInfo *giftBoxInfo; // @synthesize giftBoxInfo=_giftBoxInfo;
@property(retain, nonatomic) NSDictionary *ridingParams; // @synthesize ridingParams=_ridingParams;
- (void).cxx_destruct;
- (void)saveSelectedAnnotaionIdentifier:(id)arg1;
@property(readonly, nonatomic) MBKLocationCoordinate2D *lastSelectedAnnotaionIdentifer; // @synthesize lastSelectedAnnotaionIdentifer=_lastSelectedAnnotaionIdentifer;
- (_Bool)isCurrentAGiftBoxBike;
- (_Bool)isSpockBike;
- (_Bool)isCurrentARedPacketBike;
- (void)destroyInstance;
@property(readonly, nonatomic) long long ridingDuration;
@property(readonly, nonatomic) long long currentRidingTaskType;
- (id)init;

@end

