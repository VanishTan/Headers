//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMMapViewDelegate-Protocol.h"

@class CADisplayLink, NSArray, NSMutableArray, NSString, QAnnotationView, QMAnnotationOverlay, QMMapView, QUserLocation, QUserLocationView, UILabel;
@protocol QMapViewDelegate;

@interface QMapView : UIView <QMMapViewDelegate>
{
    QAnnotationView *_longPressPointView;
    char groupIndexArray[100];
    _Bool _show3D;
    _Bool _longPressedEnabled;
    _Bool _keepCallout;
    _Bool _bViewAppear;
    _Bool _internalEnableExternalLocationDataSource;
    _Bool _needDelaySetupBaseMapView;
    id <QMapViewDelegate> _delegate;
    unsigned long long _mapType;
    QUserLocationView *_userLocationView;
    long long _lineWidth;
    QMMapView *_baseMapView;
    UIView *_loicview;
    CADisplayLink *_displayLink;
    QUserLocation *_curUserLocation;
    NSMutableArray *_annotationArray;
    NSMutableArray *_overlayArray;
    NSMutableArray *_overlayViewArray;
    QMAnnotationOverlay *_annotationOverlay;
    UILabel *_checkLabel;
    NSMutableArray *_textAnnotationArray;
    long long _lastZoomLevel;
}

+ (struct CLLocationCoordinate2D)coordinateOffset:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) _Bool needDelaySetupBaseMapView; // @synthesize needDelaySetupBaseMapView=_needDelaySetupBaseMapView;
@property(nonatomic) long long lastZoomLevel; // @synthesize lastZoomLevel=_lastZoomLevel;
@property(retain, nonatomic) NSMutableArray *textAnnotationArray; // @synthesize textAnnotationArray=_textAnnotationArray;
@property(nonatomic) _Bool internalEnableExternalLocationDataSource; // @synthesize internalEnableExternalLocationDataSource=_internalEnableExternalLocationDataSource;
@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(nonatomic) _Bool bViewAppear; // @synthesize bViewAppear=_bViewAppear;
@property(retain, nonatomic) QMAnnotationOverlay *annotationOverlay; // @synthesize annotationOverlay=_annotationOverlay;
@property(retain, nonatomic) NSMutableArray *overlayViewArray; // @synthesize overlayViewArray=_overlayViewArray;
@property(retain, nonatomic) NSMutableArray *overlayArray; // @synthesize overlayArray=_overlayArray;
@property(retain, nonatomic) NSMutableArray *annotationArray; // @synthesize annotationArray=_annotationArray;
@property(retain, nonatomic) QUserLocation *curUserLocation; // @synthesize curUserLocation=_curUserLocation;
@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *loicview; // @synthesize loicview=_loicview;
@property(retain, nonatomic) QMMapView *baseMapView; // @synthesize baseMapView=_baseMapView;
@property(nonatomic) long long lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) _Bool keepCallout; // @synthesize keepCallout=_keepCallout;
@property(retain, nonatomic) QUserLocationView *userLocationView; // @synthesize userLocationView=_userLocationView;
@property(nonatomic, getter=isLongPressedEnabled) _Bool longPressedEnabled; // @synthesize longPressedEnabled=_longPressedEnabled;
@property(nonatomic) _Bool show3D; // @synthesize show3D=_show3D;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) __weak id <QMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setRoutePassedPointIndex:(int)arg1 coordinates:(struct CLLocationCoordinate2D)arg2 routeOverlayGroup:(id)arg3 routeIndex:(long long)arg4 bClear:(_Bool)arg5;
- (void)setHighLightRoute:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setMapMaskColor:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 layer:(long long)arg5 curveType:(long long)arg6 animateSecond:(double)arg7;
- (void)autoAdjustTextAnnotation:(_Bool)arg1;
- (id)getImageFilePathFlag:(id)arg1;
- (void)addBezierRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 dispLevel:(unsigned long long)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 dispLevel:(unsigned long long)arg2;
- (void)addRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (id)calcuteBezierDefaultControlPoints:(id)arg1 orderOfBezier:(unsigned long long)arg2;
- (void)addRouteOverlayGroup:(id)arg1;
- (long long)findAvailableGroupIndex;
- (void)removeRouteOverlayGroupByIndex:(long long)arg1;
- (void)removeRouteOverlayGroup:(id)arg1;
- (void)setLineWidth:(long long)arg1 lineWidth:(double)arg2;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mapView:(id)arg1 annotationId:(void *)arg2 animationKey:(id)arg3 didFinishAnimation:(_Bool)arg4;
- (void)setRouteDrawTexture:(id)arg1 param2:(double)arg2 routeIndex:(long long)arg3 routeGroupIndex:(long long)arg4 routeDrawType:(unsigned long long)arg5;
- (void)setRouteDrawType:(unsigned long long)arg1 routeIndex:(long long)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawCap:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)enterBackground;
- (void)enterForeground;
- (void)willMoveToSuperview:(id)arg1;
- (void)regionWillChangeAnimated:(_Bool)arg1 gesture:(_Bool)arg2;
- (void)mapPositionChanged:(id)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)stopTrakingModeFollowWithHeading;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)updateAnnotation:(id)arg1 scale:(double)arg2 duration:(double)arg3 delay:(double)arg4 curveType:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateAnnotationDispLevel:(id)arg1 dispLevel:(unsigned long long)arg2;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateAnnotation:(id)arg1 mapPoint:(CDStruct_c3b9c2ee)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotation:(id)arg1 imageIcon:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)updateAnnotation:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)touchesWithOutCallout;
- (void)handleLongPressNotification:(id)arg1;
- (void)touchesEndedEvent;
- (void)touchesBeganEvent;
- (void)mapView:(id)arg1 didChangeScaleAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 willChangeRegionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didChangeRegionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 sender:(_Bool)arg3;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAnnotations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)removeAnnotations:(id)arg1;
- (void)showRoute:(struct CLLocationCoordinate2D *)arg1 withCount:(int)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)callDidAddAnnotationViewsAfterDelayWithAnnotationViews:(id)arg1;
- (_Bool)addAnnotations:(id)arg1 animated:(_Bool)arg2;
- (_Bool)addAnnotations:(id)arg1;
- (void)callDidAddAnnotationViewAfterDelayWithAnnotationView:(id)arg1;
- (_Bool)addAnnotationNoNeedReload:(id)arg1;
- (_Bool)addAnnotation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)addAnnotation:(id)arg1;
- (double)metersPerPointForZoomLevel:(double)arg1;
- (double)metersPerPointForCurrentZoomLevel;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;
@property(nonatomic) double headingFilter;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(readonly, nonatomic, getter=isUserLocationAvailable) _Bool userLocationAvailable;
@property(readonly, nonatomic) NSString *currentCity;
@property(readonly, nonatomic) QUserLocation *userLocation;
- (void)setUserTrackingMode:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long userTrackingMode;
@property(nonatomic) struct CGPoint anchorPointOfScale;
@property(nonatomic, getter=isStayCenteredDuringZoom) _Bool stayCenteredDuringZoom;
@property(nonatomic, getter=isPitchEnabled) _Bool pitchEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(nonatomic) double overlooking;
@property(nonatomic) double rotation;
@property(nonatomic) _Bool rotateInMapCenter;
@property(nonatomic) _Bool rotate2DEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(nonatomic) _Bool hideScaleView;
@property(nonatomic) _Bool showsCompass;
- (void)setUserLocationCenter;
- (void)showsUserLocation:(_Bool)arg1 withMapCenter:(_Bool)arg2;
@property(nonatomic) _Bool showsUserLocation;
@property(nonatomic) _Bool hideAccuracyCircle;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (CDStruct_02837cd9)mapRectFromAnnotations:(id)arg1 xScale:(double)arg2 yScale:(double)arg3;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 containsCalloutView:(_Bool)arg2 annotations:(id)arg3 edgePadding:(struct UIEdgeInsets)arg4;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 anchorPoint:(struct CGPoint)arg2 zoomLevel:(int)arg3 animated:(_Bool)arg4 curveType:(long long)arg5 duration:(double)arg6;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (_Bool)isZeroCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1;
- (long long)zoomLevelFitsRegion:(CDStruct_b7cb895d)arg1;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1;
- (long long)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_b7cb895d region;
- (void)zoomOutOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomInOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomOut;
- (void)zoomIn;
@property(nonatomic) double mapScale;
- (void)setZoomLevel:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long zoomLevel;
@property(nonatomic, getter=isDisable3DBuildingEffect) _Bool disable3DBuildingEffect;
- (void)setRotation:(double)arg1 overlooking:(double)arg2 animated:(_Bool)arg3;
- (void)setMapStatus:(CDStruct_5d1e480f)arg1 withAnimation:(_Bool)arg2 animationType:(long long)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) CDStruct_5d1e480f mapStatus;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)mapHibernate;
- (void)startAnimationTimer;
- (void)stopAnimationTimer;
- (void)animationLoop;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)setCompassYOffSet:(double)arg1;
- (void)setLogoOffSet:(struct CGPoint)arg1;
- (void)setScaleViewOffset:(struct CGPoint)arg1;
- (void)setScaleViewHidden:(_Bool)arg1;
- (_Bool)isScaleViewHidden;
- (void)setIsShowPillarIn3D:(_Bool)arg1;
- (_Bool)isShowPillarIn3D;
- (id)mapViewToUIImage;
- (void)setUpView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

