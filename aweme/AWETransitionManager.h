//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UINavigationController, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface AWETransitionManager : NSObject <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint aweStartLocation;
@property(retain, nonatomic) UIPanGestureRecognizer *aweTransitionPanGestureRecognizer;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *aweInteractiveTransition;
- (void)handleGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

