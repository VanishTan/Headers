//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeadlineSdkVideoAutoplayController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class DSCatesItemInfo, HeadlineSDKOperationQueue, NSString, WBHomeNewStatusHintBoard, WBPRLMTableViewWrapper, WKFeedViewControllerState;

@interface HeadlineSDKSecController : HeadlineSdkVideoAutoplayController <PRLMTableViewWrapperDelegate>
{
    WBHomeNewStatusHintBoard *topHintBoard;
    _Bool _reloading;
    _Bool _clickBarRefresh;
    WBPRLMTableViewWrapper *prlmWrapper;
    WKFeedViewControllerState *_feedState;
    DSCatesItemInfo *_catesInfo;
    HeadlineSDKOperationQueue *_operationQueue;
}

@property(nonatomic) _Bool clickBarRefresh; // @synthesize clickBarRefresh=_clickBarRefresh;
@property(retain, nonatomic) HeadlineSDKOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) DSCatesItemInfo *catesInfo; // @synthesize catesInfo=_catesInfo;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) WKFeedViewControllerState *feedState; // @synthesize feedState=_feedState;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper;
- (void).cxx_destruct;
- (id)fID;
- (void)reloadVisbleCell;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)configSubviewsFrame;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)sendActionLog:(id)arg1 path:(id)arg2;
- (void)clickFeedAction:(id)arg1 path:(id)arg2;
- (void)uploadIntrese;
- (void)deleteTableDataByIndex:(long long)arg1;
- (_Bool)checkHasBottomPrompt;
- (void)handleBottomPrompt:(id)arg1;
- (void)deleteTopPrompt:(_Bool)arg1;
- (void)sendFeedUpdateMsg:(_Bool)arg1 loadFromBottom:(_Bool)arg2 loadFromMiddle:(_Bool)arg3;
- (void)handleErrorMsg;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)hlRouterEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)updateReadStatus:(id)arg1 indexpath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)topHintRefreshHandle:(long long)arg1;
- (void)dismissTopHint;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)clickHotImage:(id)arg1 view:(id)arg2;
- (void)clickVideo:(id)arg1;
- (void)didEnterBackground;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

