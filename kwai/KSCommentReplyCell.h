//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "KSFeedCommentComponentCell-Protocol.h"
#import "KSFoldableLabelDelegate-Protocol.h"

@class KSCommentReplyContentView, KSFeedAttributeConfiguration, NSString, UIView;
@protocol KSFeedCommentCellDelegate;

@interface KSCommentReplyCell : UITableViewCell <KSFoldableLabelDelegate, KSFeedCommentComponentCell>
{
    KSFeedAttributeConfiguration *_attributeConfiguration;
    _Bool _showingHighlightTint;
    _Bool _halfHeightVerticalLine;
    id <KSFeedCommentCellDelegate> _delegate;
    KSCommentReplyContentView *_commentView;
    UIView *_verticalLine;
    UIView *_horizontalLine;
}

+ (double)heightWithViewModel:(id)arg1;
+ (void)fillHeightInfoForViewModel:(id)arg1;
+ (double)contentLabelWidth;
@property(readonly, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(readonly, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(readonly, nonatomic) KSCommentReplyContentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) _Bool halfHeightVerticalLine; // @synthesize halfHeightVerticalLine=_halfHeightVerticalLine;
@property(nonatomic) __weak id <KSFeedCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapUnfoldOfFoldableLabel:(id)arg1;
- (void)didTapFoldOfFoldableLabel:(id)arg1;
- (void)hideHighlightTint;
- (void)showHighlightTint;
- (void)applyAttributeConfiguration:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (id)viewModel;
- (void)didTapNickname:(id)arg1;
- (void)didTapAvatar:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutLines;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
