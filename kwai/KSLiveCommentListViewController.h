//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSLiveCommentMessage, KSLiveUserViewModel, NSArray, NSDate, NSObject, NSString, NSTimer, SDImageCache, UIFont, UILongPressGestureRecognizer, UITableView, UITapGestureRecognizer;
@protocol OS_dispatch_queue;

@interface KSLiveCommentListViewController : KSBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    struct CGSize _contentSize;
    _Bool _autoScroll;
    _Bool _showSystemNotice;
    _Bool _messagesLocked;
    _Bool _messagesChanged;
    _Bool _needScroll;
    _Bool _isReloadMessagesPaused;
    _Bool _isStickingMyComment;
    UIFont *_commentFont;
    KSLiveUserViewModel *_liveUserModel;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _selectMessageBlock;
    CDUnknownBlockType _longPressMessageBlock;
    UITapGestureRecognizer *_selectTapGesturer;
    NSArray *_messages;
    UITableView *_tableView;
    NSDate *_lastUpdateDate;
    NSDate *_lastDragDate;
    NSTimer *_autoScrollPauseTimer;
    NSTimer *_reloadMessagesTimer;
    UILongPressGestureRecognizer *_longPressGesture;
    NSObject<OS_dispatch_queue> *_nodeQueue;
    NSArray *_nodes;
    NSString *_messagesToken;
    SDImageCache *_cellContentCache;
    KSLiveCommentMessage *_myCommentMsg;
}

@property(retain, nonatomic) KSLiveCommentMessage *myCommentMsg; // @synthesize myCommentMsg=_myCommentMsg;
@property(nonatomic) _Bool isStickingMyComment; // @synthesize isStickingMyComment=_isStickingMyComment;
@property(retain, nonatomic) SDImageCache *cellContentCache; // @synthesize cellContentCache=_cellContentCache;
@property(retain, nonatomic) NSString *messagesToken; // @synthesize messagesToken=_messagesToken;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool isReloadMessagesPaused; // @synthesize isReloadMessagesPaused=_isReloadMessagesPaused;
@property(retain, nonatomic) NSTimer *reloadMessagesTimer; // @synthesize reloadMessagesTimer=_reloadMessagesTimer;
@property(retain, nonatomic) NSTimer *autoScrollPauseTimer; // @synthesize autoScrollPauseTimer=_autoScrollPauseTimer;
@property(retain, nonatomic) NSDate *lastDragDate; // @synthesize lastDragDate=_lastDragDate;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool needScroll; // @synthesize needScroll=_needScroll;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool messagesChanged; // @synthesize messagesChanged=_messagesChanged;
@property(nonatomic) _Bool messagesLocked; // @synthesize messagesLocked=_messagesLocked;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) UITapGestureRecognizer *selectTapGesturer; // @synthesize selectTapGesturer=_selectTapGesturer;
@property(nonatomic) _Bool showSystemNotice; // @synthesize showSystemNotice=_showSystemNotice;
@property(copy, nonatomic) CDUnknownBlockType longPressMessageBlock; // @synthesize longPressMessageBlock=_longPressMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType selectMessageBlock; // @synthesize selectMessageBlock=_selectMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) KSLiveUserViewModel *liveUserModel; // @synthesize liveUserModel=_liveUserModel;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(retain, nonatomic) UIFont *commentFont; // @synthesize commentFont=_commentFont;
- (void).cxx_destruct;
- (_Bool)isTapInCommentListView:(struct CGPoint)arg1;
- (void)didLongPress:(id)arg1;
- (void)didTapSelect:(id)arg1;
- (id)cellForGesture:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveKeyboardDidHideNotification:(id)arg1;
- (void)refreshWhenCurrentUserComment;
- (void)adjustTopEdgeInset;
- (void)reloadMessages;
- (void)rebuildNodesOfMessages:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollTableViewIfNeed;
- (void)pauseAutoScrollForTimeInterval:(double)arg1 withAutoScrollByEnd:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)adjustGradientMaskForTopEdge:(double)arg1;
- (void)addGradientLayerMask;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
