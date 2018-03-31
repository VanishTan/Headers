//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;
@protocol OS_dispatch_semaphore;

@interface AwarenessBeaconBGExecutor : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_semaphore> *_pushlock;
    CLLocationManager *_locationManager;
}

+ (id)shareInstance;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)stopMonitoringInLocation:(id)arg1;
- (void)startMonitoringInLocation:(id)arg1;
- (void)unregisteredAllBeaconBGMoniting;
- (void)registeredBeaconBGMoniting:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
