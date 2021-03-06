//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBCommentListTableViewCellDelegate-Protocol.h"

@class NSString, WBCommentListTableViewCell;

@interface WBPageProductSingleCommentView : WBPageCardViewBase <WBCommentListTableViewCellDelegate>
{
    WBCommentListTableViewCell *_commentCell;
}

+ (double)heightOfDataObject:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsViewOutsideRealWithClass:(Class)arg1 data:(id)arg2;
@property(retain, nonatomic) WBCommentListTableViewCell *commentCell; // @synthesize commentCell=_commentCell;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didPressUserScreenName:(id)arg1 inCell:(id)arg2;
- (void)didPressUserScreenNameLabel:(id)arg1 inCell:(id)arg2;
- (void)didPressReplyButtonInCell:(id)arg1;
- (void)cell:(id)arg1 didPressAvatarViewWithUser:(id)arg2;
- (void)showUser:(id)arg1;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (void)resetSubViewRects;
- (void)setPageCard:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

