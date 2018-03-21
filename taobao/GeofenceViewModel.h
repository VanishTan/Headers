//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol-Protocol.h"

@class GeofenceDataModel, NSString;

@interface GeofenceViewModel : NXViewModel <NXStoreProtocol>
{
    double _latitude;
    double _longitude;
    GeofenceDataModel *_model;
}

@property(retain, nonatomic) GeofenceDataModel *model; // @synthesize model=_model;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)parameterMapper;
- (void)parse:(id)arg1;
- (Class)modelClass;
- (struct NSDictionary *)api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
