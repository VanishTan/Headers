//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APWealthBaseScrollViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class APAuthCodeBox, APButton, NSString;

@interface TransterCheckSmsController : APWealthBaseScrollViewController <UITextFieldDelegate>
{
    NSString *_tairKey;
    NSString *_phoneNumber;
    APAuthCodeBox *_authCodeField;
    APButton *_submitButton;
}

- (void).cxx_destruct;
- (void)createSubViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
