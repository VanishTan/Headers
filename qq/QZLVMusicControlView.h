//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MusicInfoView, NSTimer, QZLVMusicManager, QZLVPhotoThumbView, UIButton, UIImageView, UILabel;
@protocol MusicControlDelegate;

@interface QZLVMusicControlView : UIView
{
    UIImageView *_musicControlView;
    UIImageView *_musicControlImage;
    UIView *_progressBg;
    UILabel *_progressLabel;
    QZLVPhotoThumbView *_coverImage;
    CAShapeLayer *_roundLayer;
    CAShapeLayer *_downloadLayer;
    UIButton *_originButton;
    UIView *_line1View;
    UIButton *_adjustButton;
    UIView *_line2View;
    UIButton *_wordButton;
    UIView *_line3View;
    UIButton *_controlButton;
    _Bool _isMusicDownloaded;
    _Bool _isNewToast;
    NSTimer *_downloadAnimationTimer;
    double _downloadOffset;
    double _downloadProgress;
    CAShapeLayer *_maskLayer;
    double _outPutProgressStep;
    _Bool _isAnimating;
    _Bool _isControlShow;
    MusicInfoView *_musicInfoView;
    UIButton *_cutSongButtom;
    _Bool _isMusicOn;
    UIView *_lyricContainer;
    id <MusicControlDelegate> _delegate;
    QZLVMusicManager *_musicManager;
}

@property(nonatomic) QZLVMusicManager *musicManager; // @synthesize musicManager=_musicManager;
@property(nonatomic) id <MusicControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIView *lyricContainer; // @synthesize lyricContainer=_lyricContainer;

@end
