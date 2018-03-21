//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KMThreadManagerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol KSLetterListLogicControllerDelegate;

@interface KSLetterListLogicController : NSObject <KMThreadManagerDelegate>
{
    id <KSLetterListLogicControllerDelegate> _delegate;
    NSMutableArray *_sessions;
    NSMutableDictionary *_sessionInfos;
    NSString *_linkStateObserveToken;
}

@property(retain, nonatomic) NSString *linkStateObserveToken; // @synthesize linkStateObserveToken=_linkStateObserveToken;
@property(retain, nonatomic) NSMutableDictionary *sessionInfos; // @synthesize sessionInfos=_sessionInfos;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
@property(nonatomic) __weak id <KSLetterListLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_monitorLinkState;
- (void)_getUserInfosFromNetwork:(id)arg1;
- (void)_checkLoadSessionsInfo;
- (void)threadManager:(id)arg1 didRemoveThreads:(id)arg2 parentThread:(id)arg3;
- (void)threadManager:(id)arg1 didReloadWithNewThreads:(id)arg2 parentThread:(id)arg3;
- (void)threadManager:(id)arg1 didUpdateThreads:(id)arg2 parentThread:(id)arg3;
- (void)clearUnreadCountWithSession:(id)arg1;
- (void)updateSessionInfo:(id)arg1 sessionId:(id)arg2;
- (void)loadMoreSessions;
- (void)updateSessionInfoWithId:(id)arg1;
- (id)getSessionInfo:(long long)arg1;
- (void)deleteSession:(id)arg1;
- (void)removeAllSessions;
- (void)insertOrUpdateSession:(id)arg1;
- (id)getSessionInfoForKey:(id)arg1;
- (id)getSessionAtIndex:(long long)arg1;
- (_Bool)checkSessionsEmpty;
- (long long)getSessionsCount;
- (void)startToLoadSessions;
- (void)setup;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
