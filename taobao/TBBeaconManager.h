//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TBBeaconManager : NSObject <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    _Bool _active;
    _Bool _running;
    _Bool _bluetoothReady;
    _Bool _authReady;
    float _scanTime;
    long long _dataType;
    CBCentralManager *_centralManager;
    CLLocationManager *_locationManager;
    NSMutableArray *_beaconRegions;
    NSMutableDictionary *_nearbyBeacons;
    unsigned long long _phoneStatus;
    NSArray *_uuidList;
    CDUnknownBlockType _ibeaconBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType ibeaconBlock; // @synthesize ibeaconBlock=_ibeaconBlock;
@property(retain, nonatomic) NSArray *uuidList; // @synthesize uuidList=_uuidList;
@property(nonatomic) unsigned long long phoneStatus; // @synthesize phoneStatus=_phoneStatus;
@property(nonatomic, getter=isAuthReady) _Bool authReady; // @synthesize authReady=_authReady;
@property(nonatomic, getter=isbluetoothReady) _Bool bluetoothReady; // @synthesize bluetoothReady=_bluetoothReady;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableDictionary *nearbyBeacons; // @synthesize nearbyBeacons=_nearbyBeacons;
@property(retain, nonatomic) NSMutableArray *beaconRegions; // @synthesize beaconRegions=_beaconRegions;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) float scanTime; // @synthesize scanTime=_scanTime;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (_Bool)hardwareSupported;
- (_Bool)systemSupported;
- (_Bool)bleSupported;
- (unsigned long long)getCurrentPhoneStatus;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stopRanging;
- (void)startRanging;
- (void)setupMonitoringRegion:(id)arg1;
- (void)stopScan;
- (void)doScan;
- (void)startScan:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)Deinit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
