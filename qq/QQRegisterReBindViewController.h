//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/IQSRegEngineObserver-Protocol.h>

@class NSString;

@interface QQRegisterReBindViewController : QQViewController <IQSRegEngineObserver>
{
    QQViewController *_ownerVC;
}

@property(nonatomic) QQViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
- (void)onLoginAfterRegState:(id)arg1;
- (void)notChangeButtonPress:(id)arg1;
- (void)changeButtonPress:(id)arg1;
- (void)onCloseButtonClick:(id)arg1;
- (void)notifyWTLoginReBindResponse:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

