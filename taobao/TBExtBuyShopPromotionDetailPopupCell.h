//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBExtBuyShopPromotionRowView, UIView;

@interface TBExtBuyShopPromotionDetailPopupCell : TBExtBuyBaseCell
{
    TBExtBuyShopPromotionRowView *_rowView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) TBExtBuyShopPromotionRowView *rowView; // @synthesize rowView=_rowView;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

