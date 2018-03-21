//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ALBBLBSLocation : NSObject
{
    double _longitude;
    double _latitude;
    double _altitude;
    double _accuracy;
    double _speed;
    double _direction;
    NSArray *_wifiInfos;
    NSArray *_bluetoothDevices;
    NSArray *_gsmInfos;
    NSArray *_cdmaInfos;
    NSDictionary *_extraInfos;
    NSString *_os;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(retain, nonatomic) NSArray *cdmaInfos; // @synthesize cdmaInfos=_cdmaInfos;
@property(retain, nonatomic) NSArray *gsmInfos; // @synthesize gsmInfos=_gsmInfos;
@property(retain, nonatomic) NSArray *bluetoothDevices; // @synthesize bluetoothDevices=_bluetoothDevices;
@property(retain, nonatomic) NSArray *wifiInfos; // @synthesize wifiInfos=_wifiInfos;
@property(nonatomic) double direction; // @synthesize direction=_direction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (void)checkNan;

@end
