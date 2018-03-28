//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class ArticleMomentProfileWapView, NSDictionary, NSString, TTPersonalHomeUserInfoDataResponseModel;

@interface TTPersonalHomeCommonWebViewController : UIViewController <YSWebViewDelegate, UIActionSheetDelegate>
{
    int _actionSheetState;
    CDUnknownBlockType _followBlock;
    CDUnknownBlockType _blockUserBlock;
    ArticleMomentProfileWapView *_webView;
    NSDictionary *_result;
    TTPersonalHomeUserInfoDataResponseModel *_infoModel;
    NSDictionary *_extraParam;
}

@property(copy, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(nonatomic) int actionSheetState; // @synthesize actionSheetState=_actionSheetState;
@property(retain, nonatomic) TTPersonalHomeUserInfoDataResponseModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) ArticleMomentProfileWapView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType blockUserBlock; // @synthesize blockUserBlock=_blockUserBlock;
@property(copy, nonatomic) CDUnknownBlockType followBlock; // @synthesize followBlock=_followBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateUserInfo;
- (void)themedChange;
- (id)projectID;
- (id)paramStringWithType:(id)arg1 isDefault:(_Bool)arg2;
- (void)reportWithUserID:(id)arg1;
- (void)share;
- (void)loadRequestWithType:(id)arg1 uri:(id)arg2 isDefault:(_Bool)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setInfoModel:(id)arg1 trackDict:(id)arg2 needAdjustInset:(_Bool)arg3;
- (void)updateData;
@property(readonly, nonatomic) _Bool requestFailure;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
