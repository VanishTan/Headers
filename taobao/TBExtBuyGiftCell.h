//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuySelectableCell.h"

@class NSMutableString, TBTradeActivityModel;

@interface TBExtBuyGiftCell : TBExtBuySelectableCell
{
    TBTradeActivityModel *_model;
    NSMutableString *_voiceOverStr;
}

@property(retain, nonatomic) NSMutableString *voiceOverStr; // @synthesize voiceOverStr=_voiceOverStr;
@property(nonatomic) __weak TBTradeActivityModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)initCell;

@end
