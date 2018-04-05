//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKRidingUnlockRequest : MBKMobikeRequest
{
    _Bool _bycode;
    long long _biketype;
    NSString *_bikecode;
    NSString *_epdata;
    NSString *_timestamp;
    long long _btEnabled;
    NSString *_warnCodes;
    double _latitude;
    double _longitude;
    NSString *_citycode;
    NSString *_channel;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *warnCodes; // @synthesize warnCodes=_warnCodes;
@property(nonatomic) long long btEnabled; // @synthesize btEnabled=_btEnabled;
@property(nonatomic) _Bool bycode; // @synthesize bycode=_bycode;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *epdata; // @synthesize epdata=_epdata;
@property(copy, nonatomic) NSString *bikecode; // @synthesize bikecode=_bikecode;
@property(nonatomic) long long biketype; // @synthesize biketype=_biketype;
- (void).cxx_destruct;
- (id)init;

@end

