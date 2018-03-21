//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSAnnularSegmentedProgressView, KSUBlurView, UIColor;

@interface KSCameraCaptureView : UIView
{
    KSAnnularSegmentedProgressView *_progressView;
    double _blurViewCoverAlpha;
    UIColor *_highlightColor;
    unsigned long long _status;
    KSUBlurView *_blurView;
    UIView *_blurViewCover;
    UIView *_innerView;
    UIView *_progressContainerView;
    KSUBlurView *_progressBackgroundView;
    UIView *_progressBackgroundViewCover;
}

@property(retain, nonatomic) UIView *progressBackgroundViewCover; // @synthesize progressBackgroundViewCover=_progressBackgroundViewCover;
@property(retain, nonatomic) KSUBlurView *progressBackgroundView; // @synthesize progressBackgroundView=_progressBackgroundView;
@property(retain, nonatomic) UIView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(readonly, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIView *blurViewCover; // @synthesize blurViewCover=_blurViewCover;
@property(readonly, nonatomic) KSUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) double blurViewCoverAlpha; // @synthesize blurViewCoverAlpha=_blurViewCoverAlpha;
@property(readonly, nonatomic) KSAnnularSegmentedProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetInnerView;
- (void)animateInnerViewToSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)endOuterViewAnimation;
- (void)startOuterViewAnimationWithMinScale:(double)arg1 maxScale:(double)arg2;
- (void)resetProgressView;
- (void)expandProgressViewToScale:(double)arg1 showBackground:(_Bool)arg2;
- (void)resetOuterView;
- (void)expandOuterViewToScale:(double)arg1;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)_createProgressViewMaskLayerWithRect:(struct CGRect)arg1 lineWidth:(double)arg2;
- (id)_createBlurViewCoverWithFrame:(struct CGRect)arg1;
- (id)_createBlurViewWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
