//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBBuyStrikeLabel, TBTradeDirectDeliver, UIImageView, UILabel;

@interface TBExtBuyDirectDeliverCell : TBExtBuyBaseCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    TBBuyStrikeLabel *_originPriceLabel;
    UIImageView *_deliverImageView;
    TBTradeDirectDeliver *_directDeliver;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) TBTradeDirectDeliver *directDeliver; // @synthesize directDeliver=_directDeliver;
@property(retain, nonatomic) UIImageView *deliverImageView; // @synthesize deliverImageView=_deliverImageView;
@property(retain, nonatomic) TBBuyStrikeLabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

