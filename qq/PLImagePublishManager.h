//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURLSession, PLImageFeedManager, PLUploadShortVideoModel;

@interface PLImagePublishManager : NSObject <NSURLSessionTaskDelegate>
{
    PLUploadShortVideoModel *_imageFeed;
    PLImageFeedManager *_feedManager;
    NSURLSession *_uploadSession;
    CDUnknownBlockType _completion;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURLSession *uploadSession; // @synthesize uploadSession=_uploadSession;
@property(retain, nonatomic) PLImageFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) PLUploadShortVideoModel *imageFeed; // @synthesize imageFeed=_imageFeed;
- (void)handleSuccess;
- (void)handleError:(id)arg1;
- (void)updateFeed;
- (id)InternalGetRequestBody:(id)arg1;
- (void)uploadImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)publishImageFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
