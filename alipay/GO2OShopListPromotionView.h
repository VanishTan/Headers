//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GO2OShopListPromotion, UIImageView, UILabel;

@interface GO2OShopListPromotionView : UIView
{
    GO2OShopListPromotion *_promotion;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GO2OShopListPromotion *promotion; // @synthesize promotion=_promotion;
- (void).cxx_destruct;
- (void)updateWithPromotion:(id)arg1;
- (void)loadSubViews;
- (id)init;

@end

