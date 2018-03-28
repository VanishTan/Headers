//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "SSImpressionProtocol-Protocol.h"
#import "TTAdDetailADViewDelegate-Protocol.h"
#import "TTCommentEmptyViewDelegate-Protocol.h"
#import "TTCommentFooterCellDelegate-Protocol.h"
#import "TTVCommentCellDelegate-Protocol.h"
#import "TTVCommentViewControllerProtocol-Protocol.h"
#import "TTVDetailContext-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, SSThemedTableView, SSThemedView, TTCommentEmptyView, TTVCommentListItem, TTVCommentViewModel, TTVContainerScrollView, TTVDetailStateStore;
@protocol TTVCommentDelegate;

@interface TTVCommentViewController : SSViewControllerBase <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, TTCommentEmptyViewDelegate, TTAdDetailADViewDelegate, TTVCommentCellDelegate, SSImpressionProtocol, TTCommentFooterCellDelegate, TTVCommentViewControllerProtocol, TTVDetailContext>
{
    _Bool _isCommentShownForNatant;
    _Bool _enableImpressionRecording;
    _Bool _hasSelfShown;
    _Bool _needRefreshLayout;
    id <TTVCommentDelegate> _delegate;
    SSThemedTableView *_commentTableView;
    TTVContainerScrollView *_ttvContainerScrollView;
    TTVDetailStateStore *_detailStateStore;
    NSDictionary *_commentTrackDictionary;
    SSThemedView *_containerView;
    SSThemedView *_commentHeaderView;
    TTCommentEmptyView *_emptyView;
    TTVCommentListItem *_needDeleteItem;
    NSIndexPath *_needAnimatedIndexPath;
    TTVCommentViewModel *_commentViewModel;
    struct CGRect _controllerViewRect;
    struct CGRect _lastHeaderFrame;
}

@property(retain, nonatomic) TTVCommentViewModel *commentViewModel; // @synthesize commentViewModel=_commentViewModel;
@property(nonatomic) _Bool needRefreshLayout; // @synthesize needRefreshLayout=_needRefreshLayout;
@property(retain, nonatomic) NSIndexPath *needAnimatedIndexPath; // @synthesize needAnimatedIndexPath=_needAnimatedIndexPath;
@property(nonatomic) struct CGRect lastHeaderFrame; // @synthesize lastHeaderFrame=_lastHeaderFrame;
@property(nonatomic) struct CGRect controllerViewRect; // @synthesize controllerViewRect=_controllerViewRect;
@property(retain, nonatomic) TTVCommentListItem *needDeleteItem; // @synthesize needDeleteItem=_needDeleteItem;
@property(retain, nonatomic) TTCommentEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SSThemedView *commentHeaderView; // @synthesize commentHeaderView=_commentHeaderView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *commentTrackDictionary; // @synthesize commentTrackDictionary=_commentTrackDictionary;
@property(retain, nonatomic) TTVDetailStateStore *detailStateStore; // @synthesize detailStateStore=_detailStateStore;
@property(retain, nonatomic) TTVContainerScrollView *ttvContainerScrollView; // @synthesize ttvContainerScrollView=_ttvContainerScrollView;
@property(retain, nonatomic) SSThemedTableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(nonatomic) _Bool hasSelfShown; // @synthesize hasSelfShown=_hasSelfShown;
@property(nonatomic) _Bool enableImpressionRecording; // @synthesize enableImpressionRecording=_enableImpressionRecording;
@property(nonatomic) __weak id <TTVCommentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fontSizeChanged;
- (void)observeCommentDeletedInMomentDetailView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_recordImpressionsIfNeedWithCell:(id)arg1 status:(long long)arg2;
- (void)needRerecordImpressions;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)detailBaseADView:(id)arg1 didClickWithModel:(id)arg2;
- (void)commentFooterCell:(id)arg1 onClickForType:(unsigned long long)arg2;
- (unsigned long long)footerCellType;
- (void)emptyView:(id)arg1 buttonClickedForType:(long long)arg2;
- (_Bool)tt_banEmojiInput;
- (void)commentCell:(id)arg1 contentUnfoldWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 quotedNameViewonClickedWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 replyListAvatarClickedWithUserID:(id)arg2 commentItem:(id)arg3;
- (void)commentCell:(id)arg1 replyListClickedWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 nameViewonClickedWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 tappedWithUserID:(id)arg2;
- (void)commentCell:(id)arg1 avatarTappedWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 replyButtonClickedWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 deleteCommentWithCommentItem:(id)arg2;
- (void)commentCell:(id)arg1 digCommentWithCommentItem:(id)arg2;
- (void)deleteCommentFromListWithCommentID:(id)arg1;
- (void)keyboardDidShow;
- (struct CGPoint)p_firstCommentAvatarCenterPosition;
- (_Bool)p_shouldShowHeaderViewInSection:(long long)arg1;
- (_Bool)p_shouldShowFooterViewInSection:(long long)arg1;
- (struct CGRect)p_frameForFooterInSection:(long long)arg1;
- (void)p_reloadCommentTableHeaderView;
- (void)p_tryLoadMoreComments;
- (void)p_updateComment;
- (void)p_addPullUpViewIfNeeded;
- (void)p_addObservers;
- (void)sendHalfStatusFooterImpressionsForViableCellsWithOffset:(double)arg1;
- (void)sendShowTrackForVisibleCells;
- (void)sendShowStatusTrackForCommentShown:(_Bool)arg1;
- (void)clearDefalutReplyCommentModel;
- (id)defaultReplyCommentModel;
- (void)commentViewWillScrollToTopCommentCellSimple;
- (void)commentViewWillScrollToTopCommentCell;
- (void)fillAction;
- (void)insertCommentWithDict:(id)arg1;
- (void)refreshComments;
- (void)markTopCellNeedAnimation;
- (void)refreshVideoCommentCellLayoutAtIndexPath:(id)arg1 replyCount:(long long)arg2;
- (void)videoUpdateCommentWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initCommentTableView;
- (void)commonInit;
- (void)configureCommentViewModel;
- (void)applicationStautsBarDidRotate;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
