//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSUnifiedPlayerInterface.h"

#import "DWPlayerLifecycleProtocol-Protocol.h"
#import "TBSNSUnifiedPlayerManagerDelegate-Protocol.h"

@class DWInstance, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView;

@interface TBSNSILVideoPlayer : TBSNSUnifiedPlayerInterface <DWPlayerLifecycleProtocol, TBSNSUnifiedPlayerManagerDelegate>
{
    DWInstance *_dwInstance;
    UIView *_view;
    UIView *_bgViewForError;
    UIButton *_playButton;
    UIImageView *_coverImageView;
    UITapGestureRecognizer *_tapView;
    UITapGestureRecognizer *_tapError;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapError; // @synthesize tapError=_tapError;
@property(retain, nonatomic) UITapGestureRecognizer *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *bgViewForError; // @synthesize bgViewForError=_bgViewForError;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) DWInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
- (void).cxx_destruct;
- (_Bool)isSharePlayerToFloatView;
- (void)stopAndDestroyPlayer;
- (void)onBgViewClicked;
- (void)onVideoError:(id)arg1;
- (void)onVideoTapToPlay;
- (void)onVideoViewTapAtPlayedTime:(double)arg1;
- (void)onVideoPause;
- (void)onVideoComplete;
- (void)onVideoPlay;
- (id)getView;
- (_Bool)isFullScreen;
- (void)destroyPlayer;
- (double)getCurrentTime;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)play;
- (void)showStaticView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 parentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
