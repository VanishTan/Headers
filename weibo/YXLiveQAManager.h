//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YXLiveQAContainerDelegate-Protocol.h"

@class NSString, NSTimer, YXLiveQAContainerView;
@protocol YXLiveQAManagerDelegate;

@interface YXLiveQAManager : NSObject <YXLiveQAContainerDelegate>
{
    _Bool _isReceivedExitMsg;
    YXLiveQAContainerView *_containerView;
    id <YXLiveQAManagerDelegate> _delegate;
    NSTimer *_localTimer;
    CDUnknownBlockType _callBack;
    NSString *_webUrl;
}

@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) _Bool isReceivedExitMsg; // @synthesize isReceivedExitMsg=_isReceivedExitMsg;
@property(retain, nonatomic) NSTimer *localTimer; // @synthesize localTimer=_localTimer;
@property(nonatomic) __weak id <YXLiveQAManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YXLiveQAContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)reloadWebView;
- (void)onRevivecardMsg:(id)arg1;
- (void)heartbeats;
- (void)exitRoomWithRequest:(id)arg1;
- (void)getMyInfoWithRequest:(id)arg1;
- (void)getPlayerTimeWithRequest:(id)arg1;
- (void)changePlayUrlWithRequest:(id)arg1;
- (void)shareContentWithRequest:(id)arg1;
- (void)callBackWithRequest:(id)arg1;
- (void)destroyQA;
- (void)resetTimerWithIsRepest:(_Bool)arg1;
- (void)timerAction;
- (void)showQAPageInView:(id)arg1 scid:(id)arg2 urlString:(id)arg3 shareCallBack:(CDUnknownBlockType)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

