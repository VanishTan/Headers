//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "TBIctAddWeexCallbackProtocol-Protocol.h"

@class AliDetailVideoCoverView, AliDetailVideoInfo, DWInstance, NSString, UIImage;
@protocol AliDetailVideoPlayerViewDelegate, TBDetailIctAddWeexCallbackDelegate;

@interface AliDetailVideoPlayerView : UIView <DWPlayerLifecycleProtocol, TBIctAddWeexCallbackProtocol>
{
    _Bool _isCompleteOnce;
    _Bool _isMutedMode;
    _Bool _disableInteractions;
    _Bool _hadPlayedOnce;
    _Bool _needFullScreenAbility;
    _Bool _showBackCover;
    _Bool _hideCoverPlayButton;
    _Bool _showCoverTitles;
    _Bool _isFullScreen;
    double _videoDuration;
    double _videoPlayedTime;
    id _weakOwner;
    id <AliDetailVideoPlayerViewDelegate> _delegate;
    id <TBDetailIctAddWeexCallbackDelegate> _weexCallbackDelegate;
    AliDetailVideoInfo *_videoInfo;
    unsigned long long _memoryMode;
    DWInstance *_videoInstance;
    unsigned long long _playState;
    unsigned long long _pauseReason;
    UIImage *_thumbnailImage;
    CDUnknownBlockType _playActionHandler;
    CDUnknownBlockType _autoPlayFailedHandler;
    AliDetailVideoCoverView *_coverView;
}

@property(retain, nonatomic) AliDetailVideoCoverView *coverView; // @synthesize coverView=_coverView;
@property(copy, nonatomic) CDUnknownBlockType autoPlayFailedHandler; // @synthesize autoPlayFailedHandler=_autoPlayFailedHandler;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool showCoverTitles; // @synthesize showCoverTitles=_showCoverTitles;
@property(nonatomic) _Bool hideCoverPlayButton; // @synthesize hideCoverPlayButton=_hideCoverPlayButton;
@property(nonatomic) _Bool showBackCover; // @synthesize showBackCover=_showBackCover;
@property(nonatomic) _Bool needFullScreenAbility; // @synthesize needFullScreenAbility=_needFullScreenAbility;
@property(copy, nonatomic) CDUnknownBlockType playActionHandler; // @synthesize playActionHandler=_playActionHandler;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool hadPlayedOnce; // @synthesize hadPlayedOnce=_hadPlayedOnce;
@property(nonatomic) _Bool disableInteractions; // @synthesize disableInteractions=_disableInteractions;
@property(nonatomic) unsigned long long pauseReason; // @synthesize pauseReason=_pauseReason;
@property(nonatomic) unsigned long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) DWInstance *videoInstance; // @synthesize videoInstance=_videoInstance;
@property(nonatomic) unsigned long long memoryMode; // @synthesize memoryMode=_memoryMode;
@property(retain, nonatomic) AliDetailVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) __weak id <TBDetailIctAddWeexCallbackDelegate> weexCallbackDelegate; // @synthesize weexCallbackDelegate=_weexCallbackDelegate;
@property(nonatomic) __weak id <AliDetailVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id weakOwner; // @synthesize weakOwner=_weakOwner;
@property(readonly, nonatomic) _Bool isCompleteOnce; // @synthesize isCompleteOnce=_isCompleteOnce;
- (void).cxx_destruct;
- (void)showCoverView;
- (void)setupDWInstance;
@property(nonatomic, setter=setMutedMode:) _Bool isMutedMode; // @synthesize isMutedMode=_isMutedMode;
@property(readonly, nonatomic) _Bool isCompletePlay;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) double videoPlayedTime; // @synthesize videoPlayedTime=_videoPlayedTime;
@property(nonatomic) _Bool fullScreen;
- (void)coverViewDidTouchPlayButton:(id)arg1;
- (void)setupCoverView;
- (void)onWXCmpDismiss:(id)arg1;
- (void)onWXCmpExistOrNot:(id)arg1;
- (void)onVideoControlBarHidden:(_Bool)arg1;
- (void)onVideoTimeChanged:(double)arg1;
- (void)onVideoComplete;
- (void)onVideoError:(id)arg1;
- (void)onVideoFullScreen;
- (void)onVideoNormalScreen;
- (void)onVideoViewTapAtPlayedTime:(double)arg1;
- (void)onVideoTapToPlay;
- (void)onVideoPlay;
- (void)onVideoTapToPause;
- (void)onVideoPause;
- (void)onVideoPrepared;
- (void)onVideoResignActive;
- (void)supportFullScreen:(_Bool)arg1;
- (void)pauseWithMode:(unsigned long long)arg1;
- (void)pauseWithReason:(unsigned long long)arg1;
- (void)pause;
- (void)seekToTime:(double)arg1;
- (void)playButtonPress;
- (void)play;
- (_Bool)canSeekToTime:(double)arg1;
- (void)_preparePlayer;
- (_Bool)canPlay;
- (_Bool)startAutoPlay:(_Bool)arg1;
- (void)hideLikeBtn:(_Bool)arg1;
- (void)hideInteractive:(_Bool)arg1;
- (void)autoPlayFailedHandler:(CDUnknownBlockType)arg1;
- (void)setupWithModel:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

