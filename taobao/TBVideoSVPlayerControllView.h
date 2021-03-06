//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBVideoTweSVVC, UIButton, UILabel, UISlider;

@interface TBVideoSVPlayerControllView : UIView
{
    _Bool _isPlaying;
    _Bool _showFullScreenBtn;
    UIButton *_statusButton;
    UIButton *_fullScreenButton;
    UILabel *_progressLabel;
    UILabel *_durationLabel;
    UISlider *_progressView;
    TBVideoTweSVVC *_superVC;
}

@property(nonatomic) _Bool showFullScreenBtn; // @synthesize showFullScreenBtn=_showFullScreenBtn;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak TBVideoTweSVVC *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) UISlider *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
- (void).cxx_destruct;
- (void)dragSlider;
- (void)beginDragSlider;
- (void)clickFullScreenButton:(id)arg1;
- (void)togglePlayerControllView;
- (void)controlShowOrHidden;
- (void)playOrPauseVideo;
- (void)resetView;
- (void)updatePlayButtonPositon;
- (void)updateViewWithPortrait:(_Bool)arg1;
- (void)updateVideoProgress:(double)arg1 current:(double)arg2 duration:(double)arg3;
- (void)updateControllStatus:(_Bool)arg1;
- (id)setupProgressArea;
- (void)setupSubviews;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2 showFullScreenBtn:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2;

@end

