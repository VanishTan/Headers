//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayHoneyPayBaseControlLogic.h"

#import "HoneyPayGetCreateTokenSignCgiDelegate-Protocol.h"
#import "HoneyPayModifyMaximumAmountViewControllerDelegate-Protocol.h"
#import "HoneyPayPayerDetailControlLogicDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCPayCheckHoneyPayerCgiDelegate-Protocol.h"
#import "WCPayCheckHoneyUserCgiDelegate-Protocol.h"
#import "WCPayCreateHoneyPayCardCgiDelegate-Protocol.h"
#import "WCPayGetPayPwdTokenCgiDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPaySelectSingleContactControlLogicDelegate-Protocol.h"

@class HoneyPayGetCreateTokenSignCgi, NSString, WCPayCheckHoneyPayerCgi, WCPayCheckHoneyUserCgi, WCPayCreateHoneyPayCardCgi, WCPayGetPayPwdTokenCgi;
@protocol HoneyPayCreateControlLogicDelegate;

@interface HoneyPayCreateControlLogic : WCPayHoneyPayBaseControlLogic <WCPayGetPayPwdTokenCgiDelegate, HoneyPayGetCreateTokenSignCgiDelegate, WCPayCheckHoneyUserCgiDelegate, WCPayCheckHoneyPayerCgiDelegate, WCPayCreateHoneyPayCardCgiDelegate, WCPaySelectSingleContactControlLogicDelegate, MMTipsViewControllerDelegate, HoneyPayModifyMaximumAmountViewControllerDelegate, WCPayPayPwdViewControllerDelegate, HoneyPayPayerDetailControlLogicDelegate>
{
    id <HoneyPayCreateControlLogicDelegate> _delegate;
    WCPayCheckHoneyPayerCgi *_checkPayerCgi;
    WCPayCheckHoneyUserCgi *_checkUserCgi;
    HoneyPayGetCreateTokenSignCgi *_getCreateTokenSignCgi;
    WCPayCreateHoneyPayCardCgi *_createCgi;
    WCPayGetPayPwdTokenCgi *_getPayPwdTokenCgi;
}

@property(retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi; // @synthesize getPayPwdTokenCgi=_getPayPwdTokenCgi;
@property(retain, nonatomic) WCPayCreateHoneyPayCardCgi *createCgi; // @synthesize createCgi=_createCgi;
@property(retain, nonatomic) HoneyPayGetCreateTokenSignCgi *getCreateTokenSignCgi; // @synthesize getCreateTokenSignCgi=_getCreateTokenSignCgi;
@property(retain, nonatomic) WCPayCheckHoneyUserCgi *checkUserCgi; // @synthesize checkUserCgi=_checkUserCgi;
@property(retain, nonatomic) WCPayCheckHoneyPayerCgi *checkPayerCgi; // @synthesize checkPayerCgi=_checkPayerCgi;
@property(nonatomic) __weak id <HoneyPayCreateControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)createHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)modifyMaximumAmountVC:(id)arg1 didClickNextWithAmount:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)verifyPassword;
- (void)gotoModifyMaximumAmount;
- (void)dealloc;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

