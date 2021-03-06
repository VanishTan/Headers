//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSDiskCache, KSMultiCDNFileDownloader, NSArray;

@interface KSLiveGiftZipResourceDownloader : NSObject
{
    NSArray *_cdnUrls;
    KSMultiCDNFileDownloader *_fileDownloader;
    KSDiskCache *_resourceCache;
}

+ (id)downloaderWithCdnUrls:(id)arg1;
@property(retain, nonatomic) KSDiskCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) KSMultiCDNFileDownloader *fileDownloader; // @synthesize fileDownloader=_fileDownloader;
@property(retain, nonatomic) NSArray *cdnUrls; // @synthesize cdnUrls=_cdnUrls;
- (void).cxx_destruct;
- (id)resourceCacheKey;
- (void)cancelLoadResource;
- (void)unzipAndSaveFileAtPath:(id)arg1 cacheKey:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)downloadResource:(CDUnknownBlockType)arg1;

@end

