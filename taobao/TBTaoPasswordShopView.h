//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class TPShopResult, UIButton, UIImageView, UILabel, UIView;

@interface TBTaoPasswordShopView : TBTaoPasswordBaseView
{
    UIImageView *_shopSignImageView;
    UIImageView *_shopSmallImageView;
    UILabel *_contentLabel;
    UIImageView *_rankLevelImageView;
    UIButton *_bottomButton;
    UIView *_shareUserView;
    TPShopResult *_model;
}

@property(retain, nonatomic) TPShopResult *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *shareUserView; // @synthesize shareUserView=_shareUserView;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIImageView *rankLevelImageView; // @synthesize rankLevelImageView=_rankLevelImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *shopSmallImageView; // @synthesize shopSmallImageView=_shopSmallImageView;
@property(retain, nonatomic) UIImageView *shopSignImageView; // @synthesize shopSignImageView=_shopSignImageView;
- (void).cxx_destruct;
- (void)bottomButtonTapped:(id)arg1;
- (struct CGRect)getShowViewRect;
- (struct CGPoint)getCloseButtonOrigin;
- (void)createUI;
- (id)initWithModel:(id)arg1;

@end
