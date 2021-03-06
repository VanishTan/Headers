//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMShape.h"

@interface MMMultiPoint : MMShape
{
    struct CLLocationCoordinate2D *_coordinates;
    unsigned long long _pointCount;
}

- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long pointCount;
- (struct CLLocationCoordinate2D *)coordinates;
- (struct CLLocationCoordinate2D *)coordinatesForMapPoints:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2;

@end

