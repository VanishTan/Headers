//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

@class UIImageView;

@interface AMapNaviCarAnnotationView : MAAnnotationView
{
    _Bool _showCompass;
    double _carDirection;
    double _compassDirection;
    UIImageView *_carImageView;
    UIImageView *_compassImageView;
    double _carRadians;
    double _compassRadians;
    double _mapCameraDegree;
}

@property(nonatomic) double mapCameraDegree; // @synthesize mapCameraDegree=_mapCameraDegree;
@property(nonatomic) double compassRadians; // @synthesize compassRadians=_compassRadians;
@property(nonatomic) double carRadians; // @synthesize carRadians=_carRadians;
@property(retain, nonatomic) UIImageView *compassImageView; // @synthesize compassImageView=_compassImageView;
@property(retain, nonatomic) UIImageView *carImageView; // @synthesize carImageView=_carImageView;
@property(nonatomic) double compassDirection; // @synthesize compassDirection=_compassDirection;
@property(nonatomic) double carDirection; // @synthesize carDirection=_carDirection;
@property(nonatomic) _Bool showCompass; // @synthesize showCompass=_showCompass;
- (void).cxx_destruct;
- (void)setCompassImage:(id)arg1;
- (void)setCarImage:(id)arg1;
- (void)updateCameraDegree;
- (void)initProperties;
- (void)buildCarAnnotationView;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)mapView;

@end

