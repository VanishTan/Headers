//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class CADisplayLink, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

@interface TBShopVCInteractiveSwitchDriver : NSObject <UIViewControllerInteractiveTransitioning>
{
    _Bool _isInteracting;
    double _percentComplete;
    id <UIViewControllerAnimatedTransitioning> _animator;
    double _completionSpeed;
    long long _animationCurve;
    id <UIViewControllerContextTransitioning> _transitionContext;
    CADisplayLink *_displayLink;
    struct CGPoint _velocity;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (void)removeFakeView:(id)arg1;
- (void)transitionFinished;
- (double)timeOffset;
- (void)tickAnimation;
- (void)completeTransition;
- (void)setTimeOffset:(double)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
@property(readonly, nonatomic) double duration;
- (id)init;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

