//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBlockOperation, NSMutableDictionary, NSMutableSet, NSOperationQueue;

@interface TTAdWebResPreloadManager : NSObject
{
    _Bool _isWebTargetPreload;
    _Bool _hasRegisterProtocol;
    _Bool _executing;
    NSMutableSet *_urlArray;
    NSMutableDictionary *_resourceModelDict;
    NSOperationQueue *_operationQueue;
    long long _preloadNum;
    long long _matchNum;
    NSBlockOperation *_lastOperation;
}

+ (id)sharedManager;
@property(nonatomic) __weak NSBlockOperation *lastOperation; // @synthesize lastOperation=_lastOperation;
@property(nonatomic) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic) long long matchNum; // @synthesize matchNum=_matchNum;
@property(nonatomic) long long preloadNum; // @synthesize preloadNum=_preloadNum;
@property(nonatomic) _Bool hasRegisterProtocol; // @synthesize hasRegisterProtocol=_hasRegisterProtocol;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *resourceModelDict; // @synthesize resourceModelDict=_resourceModelDict;
@property(retain, nonatomic) NSMutableSet *urlArray; // @synthesize urlArray=_urlArray;
@property(nonatomic) _Bool isWebTargetPreload; // @synthesize isWebTargetPreload=_isWebTargetPreload;
- (void).cxx_destruct;
- (void)clearEnterPageCache;
- (_Bool)isFirstEnterPageAdid:(id)arg1;
- (_Bool)hasPreloadResource:(id)arg1;
- (long long)preloadTotalAdID:(id)arg1;
- (long long)matchNumInWebView;
- (long long)preloadNumInWebView;
- (void)clearCache;
- (void)resetLoadStatus;
- (void)finishCaptureThePage;
- (void)stopCaptureAdWebResRequest;
- (void)startCaptureAdWebResRequest;
- (id)getDiskResourceModelDict;
- (void)saveDiskResourceModelDict:(id)arg1;
- (id)getResourceModelDict;
- (void)synchronizeReourceModel:(id)arg1;
- (void)addRequestOperationUrl:(id)arg1;
- (void)downloadResourceWithModel:(id)arg1;
- (void)requestResourceList:(id)arg1;
- (void)preloadThirdResource:(id)arg1;
- (void)preloadResource:(id)arg1;
- (void)readResourceModelDict;
- (void)cachedCanvasProject;

@end
