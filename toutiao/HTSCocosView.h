//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CCHTSLog-Protocol.h"

@class CCEAGLView, HTSLiveCocosMessageNodeFactory, NSError, NSString;

@interface HTSCocosView : UIView <CCHTSLog>
{
    CCEAGLView *_glView;
    long long _designatedState;
    HTSLiveCocosMessageNodeFactory *_nodeFactory;
    _Bool _enableDebugLog;
    UIView *_playground;
    NSError *_lastGLError;
}

@property(readonly, nonatomic) NSError *lastGLError; // @synthesize lastGLError=_lastGLError;
@property(nonatomic) _Bool enableDebugLog; // @synthesize enableDebugLog=_enableDebugLog;
@property(readonly, nonatomic) UIView *playground; // @synthesize playground=_playground;
- (void).cxx_destruct;
- (void)dispatchDoodleMessage:(id)arg1;
- (void)clearDoodles;
- (void)removeLastDoodle:(unsigned long long)arg1;
- (void)addDoodle:(id)arg1;
- (void)dispatchBarrigeMessage:(id)arg1;
- (void)dispatchDiggMessage:(id)arg1;
- (void)dispatchEnterMessage:(id)arg1;
- (void)dispatchGiftMessage:(id)arg1;
- (void)__willEnterForeground;
- (void)__didEnterBackground;
- (void)__didBecomeActive;
- (void)__resignActive;
- (void)_registerAppStateNotification;
- (id)checkLastGLError;
- (void)logGLError:(int)arg1 desc:(id)arg2;
- (void)purgeAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)invalidate;
- (id)initWithPlayground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

