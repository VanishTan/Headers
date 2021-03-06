//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusComposeViewController.h"

@class NSDictionary;

@interface WBShareViaStatusComposeViewController : WBStatusComposeViewController
{
    _Bool _statusbarVisible;
    NSDictionary *_defaultJobParameters;
}

+ (_Bool)handleOpenURLWithExistingController;
+ (long long)compositionType;
@property(retain, nonatomic) NSDictionary *defaultJobParameters; // @synthesize defaultJobParameters=_defaultJobParameters;
@property(nonatomic) _Bool statusbarVisible; // @synthesize statusbarVisible=_statusbarVisible;
- (void).cxx_destruct;
- (id)defaultComposeTitle;
- (void)prepareJobForSaving;
- (void)viewDidLoad;
- (void)initComposeDatas;
- (_Bool)showsStatusBar;
- (unsigned long long)composeToolbarType;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;

@end

