//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class UIButton, UILabel, UIView, WBContentImageView, WBStatus;

@interface WBVideoSocialPlayerTrendCell : WBTableViewCell
{
    _Bool _isLastCell;
    WBStatus *_status;
    CDUnknownBlockType _didDismissActionSheetCallBlock;
    CDUnknownBlockType _didShowActionSheetCallBlock;
    WBContentImageView *_contentImageView;
    UILabel *_contentLabel;
    UILabel *_metaInfoLabel;
    UILabel *_screenNameLabel;
    UILabel *_screenNameSeperatorLabel;
    UILabel *_playCountLabel;
    UIView *_durationMaskLabel;
    UILabel *_durationLabel;
    UIButton *_shareButton;
    UIView *_bottomSeperatorView;
}

+ (id)pictureForPageInfo:(id)arg1;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIView *durationMaskLabel; // @synthesize durationMaskLabel=_durationMaskLabel;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *screenNameSeperatorLabel; // @synthesize screenNameSeperatorLabel=_screenNameSeperatorLabel;
@property(retain, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) UILabel *metaInfoLabel; // @synthesize metaInfoLabel=_metaInfoLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WBContentImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(copy, nonatomic) CDUnknownBlockType didShowActionSheetCallBlock; // @synthesize didShowActionSheetCallBlock=_didShowActionSheetCallBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissActionSheetCallBlock; // @synthesize didDismissActionSheetCallBlock=_didDismissActionSheetCallBlock;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)shareAction:(id)arg1;
- (void)openRepostComposerForCurrentStatus;
- (void)updateDisplay;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;

@end

