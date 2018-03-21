//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVCinemaListViewController, MVCinemaModel, NSMutableArray, NSString, UIColor, UIView;

@interface MVCinemaRow : MVTableRow
{
    NSMutableArray *tagModelArray_;
    NSMutableArray *tagStackViewModelArray_;
    _Bool _presaleRedeemMode;
    _Bool _autoAdjust;
    _Bool _ignore3DVersionLabel;
    _Bool _isToday;
    MVCinemaModel *_cinema;
    long long _rowType;
    UIView *_attachedView;
    UIColor *_backgroundColor;
    NSString *_regionName;
    double _floatRowHeight;
    MVCinemaListViewController *_listVC;
    double _activityStackViewHeight;
}

@property(nonatomic) double activityStackViewHeight; // @synthesize activityStackViewHeight=_activityStackViewHeight;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) __weak MVCinemaListViewController *listVC; // @synthesize listVC=_listVC;
@property(nonatomic) double floatRowHeight; // @synthesize floatRowHeight=_floatRowHeight;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(nonatomic) _Bool ignore3DVersionLabel; // @synthesize ignore3DVersionLabel=_ignore3DVersionLabel;
@property(nonatomic) _Bool autoAdjust; // @synthesize autoAdjust=_autoAdjust;
@property(nonatomic) _Bool presaleRedeemMode; // @synthesize presaleRedeemMode=_presaleRedeemMode;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property(retain, nonatomic) MVCinemaModel *cinema; // @synthesize cinema=_cinema;
- (void).cxx_destruct;
- (id)minSeatPriceString;
- (_Bool)cinemaHasActivity;
- (id)specialActivityTag;
- (id)saleActivityTag;
- (id)activeActivityTag;
- (void)resetTagModeArray;
- (_Bool)isCinemaGroupbuyEnable;
- (_Bool)priceLabelHiddenInDefaultType;
- (double)cellHeight;
- (id)buildMinPriceStringWithString:(id)arg1;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)autoLayoutView;
- (_Bool)autoAdjustCellHeight;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)resetRowType;
- (id)initWithRowType:(long long)arg1;
- (id)cellReuseIdentifier;

@end
