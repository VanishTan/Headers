//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, SSThemedView;
@protocol FRThreadFooterCommonTipCellDelegate;

@interface FRThreadFooterCommonTipCell : SSThemedTableViewCell
{
    CDUnknownBlockType _enterFoldDescriptionButtonOnClick;
    unsigned long long _tipType;
    unsigned long long _cellType;
    id <FRThreadFooterCommonTipCellDelegate> _delegate;
    SSThemedView *_separatorView;
    SSThemedLabel *_descLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak id <FRThreadFooterCommonTipCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
@property(copy, nonatomic) CDUnknownBlockType enterFoldDescriptionButtonOnClick; // @synthesize enterFoldDescriptionButtonOnClick=_enterFoldDescriptionButtonOnClick;
- (void).cxx_destruct;
- (double)sizeWithFontSetting:(double)arg1;
- (void)configureCellType:(unsigned long long)arg1 tipType:(unsigned long long)arg2;
- (void)descButtonOnClick:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

