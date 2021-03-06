//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFViewController.h"

#import "PromotionCenterDelegate-Protocol.h"

@class DTRpcAsyncCaller, NSArray, NSDictionary, NSMutableData, NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface TFToCardSucceedViewController : TFViewController <PromotionCenterDelegate>
{
    DTRpcAsyncCaller *_queryTransferProgressCaller;
    DTRpcAsyncCaller *_queryTransferAdCaller;
    _Bool _resultReady;
    _Bool _hasTocardResult;
    NSDictionary *_resultDict;
    NSMutableData *_resultData;
    NSString *_tradeNo;
    NSString *_money;
    NSString *_instaID;
    NSDictionary *_externalDict;
    UIScrollView *_resultView;
    UIView *_section1View;
    UILabel *_successLabel;
    UILabel *_tipLabel;
    UILabel *_bankInfoLabel;
    UILabel *_amountLabel;
    UIBarButtonItem *_barDoneItem;
    UIImageView *_statusImageView;
    NSString *_buttonTitle;
    NSString *_actionType;
    NSString *_uri;
    UIImageView *_arrowImageView;
    NSString *_paySuccessTime;
    NSString *_arriveTime;
    NSString *_transferStatus;
    NSString *_receiveCardLastNo;
    NSString *_receiveInstName;
    NSString *_gmtSuccessDes;
    UIView *_bannerView;
    UIButton *_goBillBtn;
    NSArray *_adResults;
    UIView *_line;
}

@property(nonatomic) _Bool hasTocardResult; // @synthesize hasTocardResult=_hasTocardResult;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) _Bool resultReady; // @synthesize resultReady=_resultReady;
@property(retain, nonatomic) NSArray *adResults; // @synthesize adResults=_adResults;
@property(retain, nonatomic) UIButton *goBillBtn; // @synthesize goBillBtn=_goBillBtn;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSString *gmtSuccessDes; // @synthesize gmtSuccessDes=_gmtSuccessDes;
@property(retain, nonatomic) NSString *receiveInstName; // @synthesize receiveInstName=_receiveInstName;
@property(retain, nonatomic) NSString *receiveCardLastNo; // @synthesize receiveCardLastNo=_receiveCardLastNo;
@property(retain, nonatomic) NSString *transferStatus; // @synthesize transferStatus=_transferStatus;
@property(retain, nonatomic) NSString *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(retain, nonatomic) NSString *paySuccessTime; // @synthesize paySuccessTime=_paySuccessTime;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIBarButtonItem *barDoneItem; // @synthesize barDoneItem=_barDoneItem;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *bankInfoLabel; // @synthesize bankInfoLabel=_bankInfoLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) UIView *section1View; // @synthesize section1View=_section1View;
@property(retain, nonatomic) UIScrollView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSDictionary *externalDict; // @synthesize externalDict=_externalDict;
@property(retain, nonatomic) NSString *instaID; // @synthesize instaID=_instaID;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSMutableData *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
- (void).cxx_destruct;
- (void)goBillBtnAction:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)postAdMsg;
- (void)popToRoot;
- (void)doneAction;
- (void)setupRightItem:(id)arg1;
- (void)refreshBannerViewFrame;
- (void)showToCardResultUI;
- (void)queryProgressInfoRefreshView;
- (void)addPromotionAd;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithTransferRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

