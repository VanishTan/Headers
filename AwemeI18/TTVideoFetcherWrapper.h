//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoInfoFetcherDelegate-Protocol.h"

@class NSString, TTVideoEngineInfoFetcher;

@interface TTVideoFetcherWrapper : NSObject <TTVideoInfoFetcherDelegate>
{
    _Bool _isLoading;
    int _resolution;
    CDStruct_0d2672ab *_videoInfo;
    TTVideoEngineInfoFetcher *_fetcher;
    void *_context;
}

@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) TTVideoEngineInfoFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) CDStruct_0d2672ab *videoInfo; // @synthesize videoInfo=_videoInfo;
@property _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)infoFetcherShouldRetry:(id)arg1;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)arg1;
- (void)setResolutionMask:(int *)arg1 forResolution:(unsigned long long)arg2;
- (int)getSupportedResolution:(id)arg1;
- (void)infoFetcherDidFinish:(id)arg1 error:(id)arg2;
- (void)infoFetcherDidFinish:(long long)arg1;
- (void)cancel:(void *)arg1;
- (void)dealloc;
- (id)initWithMetaURL:(id)arg1 resolution:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

