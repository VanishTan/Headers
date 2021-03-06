//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QMapView.h>

#import <QQMainProject/QMapViewDelegate-Protocol.h>

@class CLLocation, NSMutableArray, NSString, QAnnotationView, QGKitView;
@protocol QGMapViewDelegate;

@interface QGMapView : QMapView <QMapViewDelegate>
{
    _Bool _init;
    NSString *_currentAddress;
    QAnnotationView *_currentAnnotationView;
    _Bool isLoading;
    _Bool isLoadErr;
    _Bool isAlwaysDisplayName;
    id <QGMapViewDelegate> mapViewDelegate;
    NSMutableArray *poisArray;
    QGKitView *noticeView;
    CLLocation *currLocation;
}

@property(nonatomic) _Bool isAlwaysDisplayName; // @synthesize isAlwaysDisplayName;
@property(retain, nonatomic) NSString *currentAddress; // @synthesize currentAddress=_currentAddress;
@property(retain, nonatomic) CLLocation *currLocation; // @synthesize currLocation;
@property(nonatomic) _Bool isLoadErr; // @synthesize isLoadErr;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(retain, nonatomic) QGKitView *noticeView; // @synthesize noticeView;
@property(retain, nonatomic) NSMutableArray *poisArray; // @synthesize poisArray;
@property id <QGMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate;
- (_Bool)isSupportRightDragToGoBack;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setDefaultCenter:(struct CLLocationCoordinate2D)arg1;
- (void)repaintWithoutRecalculaterCenter;
- (void)repaint;
- (void)reCalculateCenter;
- (void)hideNoticeView;
- (void)setNoticeViewText:(id)arg1 isLoading:(_Bool)arg2;
- (void)removeAllPois;
- (id)addPoi:(struct CLLocationCoordinate2D)arg1;
- (id)getCurrLocationDot;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

