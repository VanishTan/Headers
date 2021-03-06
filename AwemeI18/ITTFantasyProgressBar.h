//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAAnimation, CAGradientLayer, CALayer, NSString;

@interface ITTFantasyProgressBar : UIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    long long _mode;
    CALayer *_contentLayer;
    CAAnimation *_animation;
    CAGradientLayer *_gradientLayer;
    CALayer *_defaultLayer;
    CALayer *_displayLayer;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) CALayer *displayLayer; // @synthesize displayLayer=_displayLayer;
@property(retain, nonatomic) CALayer *defaultLayer; // @synthesize defaultLayer=_defaultLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)startAnimation:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

