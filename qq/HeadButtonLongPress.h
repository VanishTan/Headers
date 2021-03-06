//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/HeadButton.h>

#import <QQMainProject/QQAvatarViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class CAAnimationGroup, NSString, QQAccountsMenuView, SideAccountGuideView;

@interface HeadButtonLongPress : HeadButton <UIGestureRecognizerDelegate, QQAvatarViewDelegate>
{
    _Bool supportLongPress;
    QQAccountsMenuView *_accountsMenuView;
    SideAccountGuideView *_sideGuideView;
    CAAnimationGroup *_scaleAnimation1;
    CAAnimationGroup *_scaleAnimation2;
}

- (void).cxx_destruct;
- (void)delayToCheckShowGuide;
- (void)onRecieveSAPushNotify:(id)arg1;
- (void)onForceOffline:(id)arg1;
- (void)onPressed;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)startHeadAnimation:(id)arg1;
- (void)dismissAccountsMenu;
- (void)showAccountsMenu:(id)arg1;
- (void)dismissSideAccountGuide;
- (void)checkToShowSideAccountGuide:(_Bool)arg1;
- (void)checkToShowSideAccountGuide;
- (void)afterLoadAvatar:(id)arg1 image:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)shouldSupportLongPress:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

