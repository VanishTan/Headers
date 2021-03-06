//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeadlineSdkVideoAutoplayController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class DSCatesItemInfo, HeadlineSDKOperationQueue, NSString, WBPRLMTableViewWrapper, WKFeedViewControllerState;

@interface HeadlineSDKBaseViewController : HeadlineSdkVideoAutoplayController <PRLMTableViewWrapperDelegate>
{
    _Bool _firstStartLoadData;
    WKFeedViewControllerState *_feedState;
    DSCatesItemInfo *_catesInfo;
    HeadlineSDKOperationQueue *_operationQueue;
    WBPRLMTableViewWrapper *_prlmWrapper;
    unsigned long long _squareMode;
}

@property(nonatomic) _Bool firstStartLoadData; // @synthesize firstStartLoadData=_firstStartLoadData;
@property(nonatomic) unsigned long long squareMode; // @synthesize squareMode=_squareMode;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) HeadlineSDKOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) DSCatesItemInfo *catesInfo; // @synthesize catesInfo=_catesInfo;
@property(retain, nonatomic) WKFeedViewControllerState *feedState; // @synthesize feedState=_feedState;
- (void).cxx_destruct;
- (void)processSelectRecommendAdCellFromFeed:(id)arg1;
- (_Bool)isSelectRecommendAdCellFromFeed:(id)arg1;
- (void)reloadVisbleCell;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)wbViewWillTransitionToSizeNotification:(id)arg1;
- (void)sendActionLog:(id)arg1 path:(id)arg2;
- (void)clickFeedAction:(id)arg1 path:(id)arg2;
- (void)uploadIntrese;
- (void)recordEnterOid:(id)arg1;
- (void)caculateOpenArticleTime;
- (void)configSubviewsFrame;
- (void)updateReadStatus:(id)arg1 indexpath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)clickHotImage:(id)arg1 view:(id)arg2;
- (void)clickVideo:(id)arg1;
- (void)didEnterBackground;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

