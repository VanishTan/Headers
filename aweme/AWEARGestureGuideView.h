//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, YYAnimatedImageView;

@interface AWEARGestureGuideView : UIView
{
    YYAnimatedImageView *_animatedImageView;
    UILabel *_guideTipLabel;
}

@property(retain, nonatomic) UILabel *guideTipLabel; // @synthesize guideTipLabel=_guideTipLabel;
@property(retain, nonatomic) YYAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
- (void).cxx_destruct;
- (void)guideTipLableStartAnimating;
- (void)trackARGestureGuideData;
- (void)showPinchGestureGuide;
- (void)showTapGestureGuide;
- (void)hideGestureGuide;
- (void)showGestureGuide;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

