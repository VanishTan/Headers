//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMediaSmallAnimationProtocol-Protocol.h"
#import "AWEPhotoEditorSliderViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWECameraFilterConfiguration, AWEFilterModel, AWEPhotoEditorModel, AWEPhotoEditorSliderView, AWERecordFilterCollectionView, IESImageProcess, NSString, UIImageView, UIView;

@interface AWEPhotoEditorFilterViewController : UIViewController <AWEMediaSmallAnimationProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWEPhotoEditorSliderViewDelegate>
{
    _Bool _hasSelectedFilterIntensity;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _willDismissBlock;
    UIView *_mediaContainerView;
    UIImageView *_originImageView;
    UIView *_bottomView;
    UIView *_intensityChooseView;
    UIView *_bottomToolContainerView;
    UIView *_intensityChooseViewToolView;
    UIImageView *_compareView;
    AWECameraFilterConfiguration *_filterConfiguration;
    AWERecordFilterCollectionView *_filterCollectionView;
    AWEFilterModel *_currentSelectedFilter;
    double _currentSelectedFilterIntensity;
    AWEPhotoEditorModel *_pictureEditorModel;
    AWEPhotoEditorSliderView *_pictureEditorSliderView;
    IESImageProcess *_imageProcess;
}

@property(retain, nonatomic) IESImageProcess *imageProcess; // @synthesize imageProcess=_imageProcess;
@property(retain, nonatomic) AWEPhotoEditorSliderView *pictureEditorSliderView; // @synthesize pictureEditorSliderView=_pictureEditorSliderView;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel; // @synthesize pictureEditorModel=_pictureEditorModel;
@property(nonatomic) _Bool hasSelectedFilterIntensity; // @synthesize hasSelectedFilterIntensity=_hasSelectedFilterIntensity;
@property(nonatomic) double currentSelectedFilterIntensity; // @synthesize currentSelectedFilterIntensity=_currentSelectedFilterIntensity;
@property(retain, nonatomic) AWEFilterModel *currentSelectedFilter; // @synthesize currentSelectedFilter=_currentSelectedFilter;
@property(retain, nonatomic) AWERecordFilterCollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) AWECameraFilterConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
@property(retain, nonatomic) UIImageView *compareView; // @synthesize compareView=_compareView;
@property(retain, nonatomic) UIView *intensityChooseViewToolView; // @synthesize intensityChooseViewToolView=_intensityChooseViewToolView;
@property(retain, nonatomic) UIView *bottomToolContainerView; // @synthesize bottomToolContainerView=_bottomToolContainerView;
@property(retain, nonatomic) UIView *intensityChooseView; // @synthesize intensityChooseView=_intensityChooseView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
@property(retain, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
- (void).cxx_destruct;
- (void)didLeaveCompareButton;
- (void)didTouchCompareButton;
- (void)compareGesture:(id)arg1;
- (void)pictureEditorSliderView:(id)arg1 touchEnd:(double)arg2;
- (void)pictureEditorSliderView:(id)arg1 touchMoved:(double)arg2;
- (void)pictureEditorSliderView:(id)arg1 touchBegin:(double)arg2;
- (void)applyFilter:(id)arg1 intensity:(double)arg2;
- (void)dismissIntensityChooseView;
- (void)showIntensityChooseView;
- (void)didClickedIntensityCancelButton;
- (void)didClickedIntensitySaveButton;
- (void)didClickedSaveButton;
- (void)didClickedCancelButton;
- (double)mediaSmallBottomViewHeight;
- (id)mediaSmallBottomView;
- (struct CGRect)mediaSmallMediaContainerFrame;
- (id)mediaSmallMediaContainer;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImageProcess:(id)arg1 pictureEditorModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

