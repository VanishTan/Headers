//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoBaseCardView.h"

#import "WBMediaPlaybackSourceView-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImage, UIImageView, UILabel, WBContentImageView, WBSlideGradientColorView, WBStatus, WBTimelinePageInfo, WBUIControl;
@protocol WBMediaPlaybackItem;

@interface WBPageInfoStoryCardView : WBPageInfoBaseCardView <WBMediaPlaybackSourceView>
{
    _Bool _isClicked;
    _Bool _isVideoPlaying;
    _Bool _syncCachedImageLoading;
    UIImage *_placeholderImage;
    WBSlideGradientColorView *_maskView;
    WBContentImageView *_iconView;
    UIImageView *_waterMarkImageView;
    UILabel *_titleLabel;
    WBUIControl *_maskButton;
    UIButton *_playButton;
}

+ (double)heightConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
+ (_Bool)timelineNeedsBackgroundBorder;
+ (struct UIEdgeInsets)timelineBackgroundBorderEdgeInsetsWithPageInfo:(id)arg1;
+ (_Bool)timelineIntegratable;
+ (struct CGSize)sizeConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
+ (id)pictureForPageInfo:(id)arg1 andDisplayType:(long long)arg2;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WBUIControl *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *waterMarkImageView; // @synthesize waterMarkImageView=_waterMarkImageView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WBSlideGradientColorView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool syncCachedImageLoading; // @synthesize syncCachedImageLoading=_syncCachedImageLoading;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
- (_Bool)supportsSlidesPicture;
- (_Bool)supportsSlidesVideo;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (id)mediaAutoPlaySourceViews;
- (void)layoutSubviews;
- (void)cacheSlides;
- (id)nickNameWithPageInfo:(id)arg1;
- (id)avatarUrlWithPageInfo:(id)arg1;
- (_Bool)needRefreshImageViewForImageURL:(id)arg1 reusing:(_Bool)arg2;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)clearViewsForAsyncLoading;
- (void)mediaPlayerViewDidRemove:(id)arg1;
- (void)mediaPlayerViewDidAttach:(id)arg1;
- (void)buttonPressed;
- (id)imageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

