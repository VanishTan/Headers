//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseOrderDetailViewController.h>

@class NSMutableDictionary, NSString;

@interface CFT_UIRedGiftOrderDetailViewController : CFT_UIBaseOrderDetailViewController
{
    NSString *_skey;
    NSString *_skey_type;
    NSString *_pushData;
    NSString *_comefrom;
    NSString *_appInfo;
    NSMutableDictionary *_redgiftCofirmModel;
}

@property(retain, nonatomic) NSMutableDictionary *redgiftCofirmModel; // @synthesize redgiftCofirmModel=_redgiftCofirmModel;
@property(copy, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(copy, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(copy, nonatomic) NSString *pushData; // @synthesize pushData=_pushData;
@property(copy, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(copy, nonatomic) NSString *skey; // @synthesize skey=_skey;
- (void)actionGetUserInfo:(id)arg1;
- (void)onPaySuccNotify:(id)arg1;
- (void)nextBtnClicked;
- (void)layoutSubviews;
- (void)layoutNameLabel:(id)arg1;
- (void)initView;
- (void)cancel;
- (void)qpay_hb_pack_confirm;
- (void)requestRedGiftDataModel;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

@end

