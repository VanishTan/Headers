//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXRDMDownloaderProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface TBRedimDownloader : NSObject <WXRDMDownloaderProtocol>
{
}

- (_Bool)cacheExistForUrl:(id)arg1 fileType:(id)arg2;
- (void)downloadResourceWithURL:(id)arg1 fileMd5:(id)arg2 fileSize:(double)arg3 fileType:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

