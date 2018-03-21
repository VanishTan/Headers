//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QZVideoPlayerViewDelegate-Protocol.h>
#import <QQMainProject/QZVideoStateViewDelegate-Protocol.h>

@class AVAsset, NSDictionary, NSString, NSValue, QQCircularProgressView, QZFeedVideoView, QZVideoPlayerToolbar, QZVideoPlayerView, QZVideoSectionInfo, QzoneFeedModel, QzoneFeedVideo, UIButton, UIImage, UIImageView, UIViewController, UIWindow;

@interface MQZVideoPlaybackViewController : QZoneViewController <QZVideoPlayerViewDelegate, QZVideoStateViewDelegate, QQAudioSessionManagerDelegate, IQZUrlDownloaderDelegate>
{
    QZVideoPlayerView *_playbackView;
    UIWindow *_qzMaskView;
    UIViewController *_parentCtrl;
    UIImageView *_bgImgViewOfPlaybackView;
    _Bool _isOldStatusBarHidden;
    _Bool _isOldNavigationBarHidden;
    _Bool _isAudioSessionObtained;
    UIButton *_bottomButton;
    QQCircularProgressView *_progressView;
    NSString *_localFileForOriginVideo;
    UIButton *_playButton;
    UIImageView *_learnMoreView;
    UIButton *_moreBottomBtn;
    UIImageView *_moreBtnImg;
    _Bool _isMoreButtonUnfolded;
    AVAsset *_videoAsset;
    struct CGSize _videoSize;
    NSValue *_startTimeValue;
    UIImage *_startImg;
    UIImage *_coverImage;
    NSValue *_startImgRectInScreenValue;
    NSString *_originURL;
    NSString *_clientKey;
    unsigned long long _originFileSize;
    _Bool _cyclePlay;
    NSString *_gdtURL;
    NSString *_shareVideoURL;
    NSDictionary *_cookie;
    long long _videoType;
    NSDictionary *_exrtaDic;
    double _seekTo;
    QZVideoPlayerToolbar *_toolbar;
    UIButton *_closeButton;
    struct CGSize _closeButtonSize;
    CDUnknownBlockType _miniVideoLoadBlock;
    _Bool _isBackground;
    _Bool _neeReloadVideo;
    NSString *_downloadFilePath;
    double _lastDragtime;
    _Bool _isManualPlayed;
    _Bool _isLoaded;
    _Bool _isInDealloc;
    _Bool _isHasOriginCache;
    _Bool _isSelectedOrigin;
    QZVideoSectionInfo *_sectionInfo;
    _Bool _originButtonClick;
    _Bool _isInMorePage;
    _Bool _isInWebContentMorePage;
    _Bool _isOriginVideoStop;
    _Bool _isNeedEnsureVideoState;
    NSString *_videoURL;
    long long _duration;
    long long _canPlayTime;
    long long _totalTime;
    QzoneFeedModel *_feedModel;
    QzoneFeedVideo *_feedVideo;
    QZFeedVideoView *_feedVideoView;
    unsigned long long _sourcePlaySessionID;
    double _timeEnterForeground;
    struct CGSize _playerSize;
}

@property(nonatomic) _Bool isNeedEnsureVideoState; // @synthesize isNeedEnsureVideoState=_isNeedEnsureVideoState;
@property(nonatomic) double timeEnterForeground; // @synthesize timeEnterForeground=_timeEnterForeground;
@property(nonatomic) unsigned long long sourcePlaySessionID; // @synthesize sourcePlaySessionID=_sourcePlaySessionID;
@property(nonatomic) __weak QZFeedVideoView *feedVideoView; // @synthesize feedVideoView=_feedVideoView;
@property(nonatomic) __weak QzoneFeedVideo *feedVideo; // @synthesize feedVideo=_feedVideo;
@property(nonatomic) __weak QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) long long canPlayTime; // @synthesize canPlayTime=_canPlayTime;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isOriginVideoStop; // @synthesize isOriginVideoStop=_isOriginVideoStop;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) struct CGSize playerSize; // @synthesize playerSize=_playerSize;
- (void).cxx_destruct;
- (id)getReportExtInfo;
- (void)reportPlayInfo:(_Bool)arg1;
- (void)reportQuality;
- (void)reportAll;
- (void)reportPlayStartWithManul:(_Bool)arg1;
- (void)setExtraData:(id)arg1;
- (void)videoStateTouchAction:(unsigned long long)arg1 param:(id)arg2;
- (void)playerViewIsWaitingData:(id)arg1 currentTime:(double)arg2;
- (void)playerView:(id)arg1 willLoadWithURL:(id)arg2 isStream:(_Bool)arg3 isLocalFile:(_Bool)arg4;
- (void)playerViewStopPlay:(id)arg1 playInfo:(id)arg2;
- (void)playerViewOneLoopToEnd:(id)arg1 playInfo:(id)arg2;
- (void)playerViewPausePlay:(id)arg1 playInfo:(id)arg2;
- (void)playerView:(id)arg1 currentTime:(double)arg2;
- (void)playerView:(id)arg1 loadSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerView:(id)arg1 playIsSuccess:(_Bool)arg2 error:(id)arg3;
- (_Bool)checkIsIllegal;
- (void)onNotifyCheckVideoIllegal:(id)arg1;
- (void)saveCurPlayInfo;
- (void)saveContinueplayStatus;
- (void)saveCurPlayInfoRecent;
- (void)changeMoreButtonState;
- (void)hideLearnMoreButton;
- (void)createLearnMoreButton;
- (void)showLearnMoreButton;
- (void)gdtPausePlay;
- (void)playbackEndBlock;
- (void)handleVideoLoadingInterrupt;
- (void)loadVideoPlaybackView;
- (void)showOriginVideoAction:(id)arg1;
- (void)requestProgress:(id)arg1 bytesOfThisTime:(unsigned long long)arg2 downloadedBytes:(long long)arg3 totalBytes:(long long)arg4;
- (void)reloadVideoWhenDownload;
- (void)requestFinished:(id)arg1;
- (void)qzSKStoreDidDisappearGDT;
- (void)jumpToGDTPage:(int)arg1;
- (void)bottomLearnMoreClicked;
- (void)jumpToWeb;
- (void)onIntterruptBegin;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)enableToolbar:(_Bool)arg1;
- (void)setVideoControlHidden:(id)arg1;
- (void)videoControlDelayHidden;
- (void)changeVideoControlState;
- (struct CGRect)convertRectFromHorizontalToVertical:(struct CGRect)arg1;
- (void)removeMaskView;
- (void)beginAnimationToRectWhenDismiss:(struct CGRect)arg1;
- (struct CGRect)landscapeAnimationImgViewFrame;
- (void)beginAnimationToRectWhenShow:(struct CGRect)arg1;
- (void)startVideoPlay:(id)arg1;
- (void)startVideoPlay:(id)arg1 isLandscape:(_Bool)arg2;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)reLayout:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)createBottomButton;
- (void)sliderEndSeek;
- (void)sliderValueChanged:(id)arg1;
- (void)toolbarBeginDragging;
- (void)createSlider;
- (void)setupToolbarDuration;
- (void)createCloseButton;
- (id)createBottomButtonWithTitle:(id)arg1 selector:(SEL)arg2;
- (id)drawWithBackgoundWith:(id)arg1;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(copy, nonatomic) NSDictionary *cookie; // @dynamic cookie;
@property(retain, nonatomic) UIImage *coverImage; // @dynamic coverImage;
@property(nonatomic) _Bool cyclePlay; // @dynamic cyclePlay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *gdtURL; // @dynamic gdtURL;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long originFileSize; // @dynamic originFileSize;
@property(copy, nonatomic) NSString *originURL; // @dynamic originURL;
@property(copy, nonatomic) NSString *shareVideoURL; // @dynamic shareVideoURL;
@property(retain, nonatomic) UIImage *startImg; // @dynamic startImg;
@property(retain, nonatomic) NSValue *startImgRectInScreenValue; // @dynamic startImgRectInScreenValue;
@property(retain, nonatomic) NSValue *startTimeValue; // @dynamic startTimeValue;
@property(readonly) Class superclass;
@property(retain, nonatomic) AVAsset *videoAsset; // @dynamic videoAsset;
@property(nonatomic) struct CGSize videoSize; // @dynamic videoSize;
@property(nonatomic) long long videoType; // @dynamic videoType;

@end
