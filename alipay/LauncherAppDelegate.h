//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString, UIViewController;

@interface LauncherAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
}

@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)switchFromActionType:(id)arg1 toActionType:(id)arg2;
- (void)switchTabWithInfo:(id)arg1 fromLaunch:(_Bool)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

