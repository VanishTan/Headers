//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMSLSpotlightDescription, GMSx_PBMutableArray, NSString;

@interface GMSx_GMMMapTilePaintDescriptionProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int expirationInMinutes; // @dynamic expirationInMinutes;
@property(nonatomic) _Bool hasExpirationInMinutes; // @dynamic hasExpirationInMinutes;
@property(nonatomic) _Bool hasSpotlightAdsToken; // @dynamic hasSpotlightAdsToken;
@property(nonatomic) _Bool hasSpotlightDescription; // @dynamic hasSpotlightDescription;
@property(nonatomic) _Bool hasStylerDescriptionArray; // @dynamic hasStylerDescriptionArray;
@property(nonatomic) _Bool hasTileType; // @dynamic hasTileType;
@property(retain, nonatomic) NSString *spotlightAdsToken; // @dynamic spotlightAdsToken;
@property(retain, nonatomic) GMSx_GMSLSpotlightDescription *spotlightDescription; // @dynamic spotlightDescription;
@property(retain, nonatomic) GMSx_PBMutableArray *stylerDescriptionArray; // @dynamic stylerDescriptionArray;
@property(nonatomic) int tileType; // @dynamic tileType;

@end
