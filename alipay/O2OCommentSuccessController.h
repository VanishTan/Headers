//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OViewController.h"

#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "O2OCommonSchemeProtocol-Protocol.h"

@class APButton, APResultPageView, CDPSpaceView, NSString, O2OCommentPublicSuccessShareInfo, O2OCommentShareManager, O2OCommentSuccessModel, O2OMyOrderListViewController, UILabel, UIScrollView, UIView;

@interface O2OCommentSuccessController : O2OViewController <O2OCDPAdapterPromotionProtocol, O2OCommonSchemeProtocol>
{
    _Bool _showToBeCommented;
    _Bool _shutShareFun;
    _Bool _getShareInfoFailed;
    NSString *_commentId;
    UIScrollView *_scrollView;
    APResultPageView *_resultPage;
    UIView *_seperation;
    CDPSpaceView *_cdpView;
    UILabel *_tipLabel;
    O2OMyOrderListViewController *_toBeCommentedController;
    NSString *_tipText;
    APButton *_goMyComment;
    APButton *_goSharePad;
    O2OCommentShareManager *_shareInstance;
    O2OCommentPublicSuccessShareInfo *_shareInfo;
    O2OCommentSuccessModel *_commentSuccessModel;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool getShareInfoFailed; // @synthesize getShareInfoFailed=_getShareInfoFailed;
@property(retain, nonatomic) O2OCommentSuccessModel *commentSuccessModel; // @synthesize commentSuccessModel=_commentSuccessModel;
@property(nonatomic) _Bool shutShareFun; // @synthesize shutShareFun=_shutShareFun;
@property(retain, nonatomic) O2OCommentPublicSuccessShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) O2OCommentShareManager *shareInstance; // @synthesize shareInstance=_shareInstance;
@property(retain, nonatomic) APButton *goSharePad; // @synthesize goSharePad=_goSharePad;
@property(retain, nonatomic) APButton *goMyComment; // @synthesize goMyComment=_goMyComment;
@property(nonatomic) _Bool showToBeCommented; // @synthesize showToBeCommented=_showToBeCommented;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) O2OMyOrderListViewController *toBeCommentedController; // @synthesize toBeCommentedController=_toBeCommentedController;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) CDPSpaceView *cdpView; // @synthesize cdpView=_cdpView;
@property(retain, nonatomic) UIView *seperation; // @synthesize seperation=_seperation;
@property(retain, nonatomic) APResultPageView *resultPage; // @synthesize resultPage=_resultPage;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promitionEnd;
- (void)promotionStart;
- (id)pageSpm;
- (void)goSharePadAction;
- (void)goMyCommentAction;
- (void)close;
- (void)dealloc;
- (void)layout;
- (void)createSubViews;
- (void)viewDidLoad;
- (id)initWithTipText:(id)arg1 showToBeCommented:(_Bool)arg2;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
