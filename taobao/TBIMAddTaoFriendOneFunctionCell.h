//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBIMAddTaoFriendFunctionCellModel, UILabel, UIView;
@protocol TBIMAddTaoFriendCellDelegate;

@interface TBIMAddTaoFriendOneFunctionCell : UITableViewCell
{
    TBIMAddTaoFriendFunctionCellModel *_cellModel;
    id <TBIMAddTaoFriendCellDelegate> _delegate;
    UILabel *_leftIconLabel;
    UILabel *_leftTitleLabel;
    UILabel *_leftSubTitleLabel;
    UILabel *_rightArrowLabel;
    UIView *_bottomLine;
    UIView *_leftIconLabelBc;
}

@property(retain, nonatomic) UIView *leftIconLabelBc; // @synthesize leftIconLabelBc=_leftIconLabelBc;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *rightArrowLabel; // @synthesize rightArrowLabel=_rightArrowLabel;
@property(retain, nonatomic) UILabel *leftSubTitleLabel; // @synthesize leftSubTitleLabel=_leftSubTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) UILabel *leftIconLabel; // @synthesize leftIconLabel=_leftIconLabel;
@property(nonatomic) __weak id <TBIMAddTaoFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBIMAddTaoFriendFunctionCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)tapGestureRecognizer:(id)arg1;
- (void)updateWithCellModel:(id)arg1 delegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

