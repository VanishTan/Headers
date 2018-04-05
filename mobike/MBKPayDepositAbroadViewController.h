//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class UIButton, UILabel, UIView;

@interface MBKPayDepositAbroadViewController : MBKBaseViewController
{
    CDUnknownBlockType _dismissBlock;
    UIView *_topView;
    UIView *_bottomView;
    UILabel *_pageTitleLabel;
    UIButton *_commitBtn;
}

+ (void)load;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) UILabel *pageTitleLabel; // @synthesize pageTitleLabel=_pageTitleLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)onTapCommit:(id)arg1;
- (void)setupView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createNavigationBar;
- (void)viewDidLoad;
- (_Bool)shouldHideNavigationBarShadow;

@end

