//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TTFCheckInvitationCodeButton, TTFInputInvitationCodeTextField, TTFantasyButton;

@interface TTFInputInvitationCodeView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _ttf_beginCheckInvitationCode;
    TTFantasyButton *_maskView;
    UIView *_hostView;
    TTFInputInvitationCodeTextField *_inputView;
    TTFCheckInvitationCodeButton *_checkInvitationCodeButton;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) TTFCheckInvitationCodeButton *checkInvitationCodeButton; // @synthesize checkInvitationCodeButton=_checkInvitationCodeButton;
@property(retain, nonatomic) TTFInputInvitationCodeTextField *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) TTFantasyButton *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType ttf_beginCheckInvitationCode; // @synthesize ttf_beginCheckInvitationCode=_ttf_beginCheckInvitationCode;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)checkInvitationCodeButtonDidClicked:(id)arg1;
- (void)maskViewDidClicked:(id)arg1;
- (void)keyboardAnimationWithNotification:(id)arg1 isShow:(_Bool)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)ttf_showExceptionShakeAnimation;
- (void)ttf_addObserver;
- (void)ttf_checkInvitationCode;
- (void)ttf_setupViews;
- (void)fillDefaultInviteCode:(id)arg1;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

