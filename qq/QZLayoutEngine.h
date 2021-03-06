//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZLayoutEngine : NSObject
{
    NSMutableDictionary *_layoutQueueDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)layoutFeedList:(id)arg1 params:(id)arg2 type:(long long)arg3 isRefresh:(_Bool)arg4;
- (void)layoutFeedWithFeedModelList:(id)arg1 params:(id)arg2 type:(long long)arg3 isRefresh:(_Bool)arg4 finish:(CDUnknownBlockType)arg5;
- (void)layoutFeedWithFeedModelListInSubThread:(id)arg1 isRefresh:(_Bool)arg2;
- (void)layoutFeedWithFeedModelList:(id)arg1 type:(long long)arg2 isRefresh:(_Bool)arg3 finish:(CDUnknownBlockType)arg4;
- (void)cancelLayoutFeed;
- (id)init;

@end

