//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseSendSMSRichViewController.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface CFT_UISendSMSInRechargeRichViewController : CFT_UIBaseSendSMSRichViewController <UIAlertViewDelegate, UITextFieldDelegate>
{
    _Bool _isTouchRecharge;
}

@property(nonatomic) _Bool isTouchRecharge; // @synthesize isTouchRecharge=_isTouchRecharge;
- (void)showResultController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

