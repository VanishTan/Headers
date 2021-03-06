//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AVAsset, CADisplayLink, HTSVideoDataClipRange, HTSVideoImportProcess, IESMMImportAVPlayer, NSDictionary, NSMutableArray, NSString, NSURL, SSThemedLabel, SSThemedView, TTExportFullscreenLoadingView, TTVideoReencodeCompressHelper, UICollectionView, UIPanGestureRecognizer;
@protocol TTClipVideoViewControllerDelegate;

@interface TTClipVideoViewController : SSViewControllerBase <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _viewIsOnTop;
    _Bool _appIsActive;
    _Bool _needRemoveKVO;
    _Bool _clipFinished;
    id <TTClipVideoViewControllerDelegate> _delegate;
    NSURL *_videoURL;
    AVAsset *_inputAsset;
    SSThemedView *_clipView;
    UICollectionView *_coverCollectionView;
    SSThemedView *_playerView;
    SSThemedView *_toolbar;
    SSThemedView *_startPointBar;
    UIPanGestureRecognizer *_startPanGestureRecognizer;
    SSThemedView *_endPointBar;
    UIPanGestureRecognizer *_endPanGestureRecognizer;
    SSThemedView *_sliderTopBorder;
    SSThemedView *_sliderBottomBorder;
    SSThemedView *_sliderLeftShadow;
    SSThemedView *_sliderRightShadow;
    SSThemedView *_playTimeIndictator;
    SSThemedLabel *_hintLabel;
    TTExportFullscreenLoadingView *_loadingView;
    IESMMImportAVPlayer *_player;
    HTSVideoImportProcess *_videoMerger;
    HTSVideoDataClipRange *_videoClipRange;
    NSMutableArray *_covers;
    NSDictionary *_extraTrack;
    unsigned long long _recordViewStyle;
    TTVideoReencodeCompressHelper *_reencodeHelper;
    CADisplayLink *_reencodeDisplayLink;
    struct CGSize _inputVideoSize;
}

@property(retain, nonatomic) CADisplayLink *reencodeDisplayLink; // @synthesize reencodeDisplayLink=_reencodeDisplayLink;
@property(retain, nonatomic) TTVideoReencodeCompressHelper *reencodeHelper; // @synthesize reencodeHelper=_reencodeHelper;
@property(nonatomic) unsigned long long recordViewStyle; // @synthesize recordViewStyle=_recordViewStyle;
@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(nonatomic) _Bool clipFinished; // @synthesize clipFinished=_clipFinished;
@property(nonatomic) _Bool needRemoveKVO; // @synthesize needRemoveKVO=_needRemoveKVO;
@property(nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
@property(nonatomic) _Bool viewIsOnTop; // @synthesize viewIsOnTop=_viewIsOnTop;
@property(retain, nonatomic) NSMutableArray *covers; // @synthesize covers=_covers;
@property(retain, nonatomic) HTSVideoDataClipRange *videoClipRange; // @synthesize videoClipRange=_videoClipRange;
@property(retain, nonatomic) HTSVideoImportProcess *videoMerger; // @synthesize videoMerger=_videoMerger;
@property(retain, nonatomic) IESMMImportAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TTExportFullscreenLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SSThemedLabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SSThemedView *playTimeIndictator; // @synthesize playTimeIndictator=_playTimeIndictator;
@property(retain, nonatomic) SSThemedView *sliderRightShadow; // @synthesize sliderRightShadow=_sliderRightShadow;
@property(retain, nonatomic) SSThemedView *sliderLeftShadow; // @synthesize sliderLeftShadow=_sliderLeftShadow;
@property(retain, nonatomic) SSThemedView *sliderBottomBorder; // @synthesize sliderBottomBorder=_sliderBottomBorder;
@property(retain, nonatomic) SSThemedView *sliderTopBorder; // @synthesize sliderTopBorder=_sliderTopBorder;
@property(retain, nonatomic) UIPanGestureRecognizer *endPanGestureRecognizer; // @synthesize endPanGestureRecognizer=_endPanGestureRecognizer;
@property(retain, nonatomic) SSThemedView *endPointBar; // @synthesize endPointBar=_endPointBar;
@property(retain, nonatomic) UIPanGestureRecognizer *startPanGestureRecognizer; // @synthesize startPanGestureRecognizer=_startPanGestureRecognizer;
@property(retain, nonatomic) SSThemedView *startPointBar; // @synthesize startPointBar=_startPointBar;
@property(retain, nonatomic) SSThemedView *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) SSThemedView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UICollectionView *coverCollectionView; // @synthesize coverCollectionView=_coverCollectionView;
@property(retain, nonatomic) SSThemedView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) struct CGSize inputVideoSize; // @synthesize inputVideoSize=_inputVideoSize;
@property(retain, nonatomic) AVAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) __weak id <TTClipVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackWithV3Event:(id)arg1 extraDic:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)getTimeForX:(double)arg1;
- (id)getCurrentClipRange;
- (void)changeTimeRange;
- (void)handlePan:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)goBack:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)changeTimeRangeIfNeeded:(id)arg1;
- (void)createInitialRange;
- (void)generateCoverModels;
- (void)refreshSliderShadow;
- (void)createClipBar;
- (void)createToolbar;
- (void)refreshOnPresentState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)registerNotifications;
- (void)removeKVO;
- (void)addKVO;
- (void)viewDidLoad;
- (id)initWithVideoURL:(id)arg1 style:(unsigned long long)arg2 extraTrack:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

