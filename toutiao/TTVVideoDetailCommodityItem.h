//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, TTVCommodityEntity, TTVVideoPlayerStateStore, UIButton, UIImageView, UILabel;
@protocol TTVVideoDetailCommodityItemDelegate;

@interface TTVVideoDetailCommodityItem : UIView
{
    _Bool _isFullScreen;
    _Bool _hasShowed;
    TTVCommodityEntity *_entity;
    NSObject<TTVVideoDetailCommodityItemDelegate> *_delegate;
    UIButton *_background;
    UIImageView *_imageView;
    UIView *_imageViewBorder;
    UIImageView *_recommandIcon;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_couponLabel;
    UIImageView *_redDot;
    TTVVideoPlayerStateStore *_playerStateStore;
}

@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *recommandIcon; // @synthesize recommandIcon=_recommandIcon;
@property(retain, nonatomic) UIView *imageViewBorder; // @synthesize imageViewBorder=_imageViewBorder;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *background; // @synthesize background=_background;
@property(nonatomic) __weak NSObject<TTVVideoDetailCommodityItemDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) TTVCommodityEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)openCommodity;
- (void)show;
- (void)ttv_showCommodityTrack;
- (void)ttv_clickCommodityTrack;
- (id)commonDic;
- (void)layoutSubviews;
- (void)reSetPriceLabelIfNeed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

