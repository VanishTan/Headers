//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLSession.h>

@interface _priv_NSURLSession_NBS : NSURLSession
{
}

+ (id)nbs_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)nbs_uploadTaskWithStreamedRequest:(id)arg1;
- (id)nbs_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)nbs_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)nbs_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)nbs_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)nbs_downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)nbs_downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)nbs_downloadTaskWithRequest:(id)arg1;
- (id)nbs_dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

