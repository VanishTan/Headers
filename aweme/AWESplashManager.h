//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAdSplashDelegate-Protocol.h"

@class NSString;

@interface AWESplashManager : NSObject <TTAdSplashDelegate>
{
}

+ (_Bool)hasEncounteredSigError;
+ (id)currentSplash;
+ (void)persistSplash:(id)arg1;
+ (void)clearSplash;
+ (void)fetchSplash;
+ (void)__show_splash:(CDUnknownBlockType)arg1;
+ (void)show;
+ (id)sharedInstance;
+ (void)load;
- (_Bool)enableSplashLog;
- (void)splashActionWithCondition:(id)arg1;
- (void)trackWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)splashViewDidDisappear;
- (void)splashViewWillAppear;
- (id)splashArrowImageName;
- (id)splashViewMoreImageName;
- (id)splashWifiImageName;
- (id)splashVideoLogoName;
- (id)splashBgImageName;
- (id)installId;
- (id)deviceId;
- (id)ntType;
- (id)splashNetwokType;
- (id)splashBaseUrl;
- (void)requestWithUrl:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)didFinishLaunch;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)isSplashShowing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
