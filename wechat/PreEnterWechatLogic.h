//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IAppViewControllerManagerExt-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "PreEnterStepDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class LaunchImage, NSMutableArray, NSString, NSURL, PreEnterShowGlobalAlertStep, ShowRatingAchive;

@interface PreEnterWechatLogic : MMObject <IMMFacebookMgrExt, PreEnterStepDelegate, IAppViewControllerManagerExt, MMConfigMgrExt, MessageObserverDelegate, UIAlertViewDelegate, MMKernelExt, IMsgExt>
{
    vector_a9c0768e m_vecMesssageIdToListen;
    NSURL *m_nsFeedBackUrl;
    _Bool m_bCalledPreEnterWechatDone;
    _Bool m_bRunning;
    ShowRatingAchive *m_oShowingRating;
    unsigned int m_uiShouldCheckShowRating;
    NSMutableArray *m_nsArrSteps;
    PreEnterShowGlobalAlertStep *m_GlobalAlert;
    LaunchImage *m_launchImage;
    _Bool m_hasShownPrivacy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onGetUpdateInfoOk;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delayLoadAndCheck;
- (void)checkUpdateTabbarBadgeNum;
- (void)checkUpdateNewVersionTip:(_Bool)arg1;
- (void)preLoadContacts;
- (void)restoreContactDraft;
- (void)fixContactPlugin;
- (void)openFeedBackWapPage:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)callPreEnterWechatDone;
- (void)onMMDynamicConfigUpdated;
- (void)onTabBarRootViewControllerDidAppear;
- (void)enterForeground;
- (void)checkTimeChange;
- (void)onPreEnterStepDone:(id)arg1;
- (void)dealloc;
- (void)checkStartSteps;
- (void)addStep:(id)arg1;
- (void)startSteps:(id)arg1 FromReg:(_Bool)arg2;
- (id)init;
- (void)goNext;
- (void)initSeviceObject;
- (void)initMessageIdToListen;
- (void)onForFeedbackYes;
- (void)onForFeedbackNo;
- (void)onFirstAskNo;
- (void)onFirstAskYes;
- (void)onFirstAskForRatingNo;
- (void)onFirstAskForRatingYes;
- (void)onRatingReport:(unsigned int)arg1;
- (void)onShowRatingDone;
- (void)checkShowRating;
- (void)updateShowRating;
- (void)updateStrategy;
- (void)checkShouldCheckShowRating:(id)arg1;
- (void)setShouldCheckShowRating;
- (void)checkShowRatingFromTabbarShow;
- (void)checkShowRatingFromBackgound;
- (void)cleanSetting;
- (_Bool)useNewShowRatingStrategy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
