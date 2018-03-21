//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TAGPreviewManager : NSObject
{
    long long _previewMode;
    NSString *_ctfeUrlPath;
    NSString *_containerId;
}

+ (id)instance;
@property(retain) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain) NSString *ctfeUrlPath; // @synthesize ctfeUrlPath=_ctfeUrlPath;
@property long long previewMode; // @synthesize previewMode=_previewMode;
- (void).cxx_destruct;
- (id)containerIdForQuery:(id)arg1;
- (void)clear;
- (_Bool)isPreviewingContainer:(id)arg1;
- (_Bool)generatePreviewDataForUrl:(id)arg1;
- (id)init;

@end
