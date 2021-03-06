//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString;

@interface QZVideoAnimationManager : NSObject <IQZUrlDownloaderDelegate>
{
}

+ (void)stopAllVideoAnimation;
+ (_Bool)checkAnimationResource:(id)arg1;
+ (void)showVideoAnimation:(id)arg1 jumpUrl:(id)arg2 closeBlock:(CDUnknownBlockType)arg3;
+ (void)downloadResource:(id)arg1;
+ (_Bool)isResourceExist:(id)arg1;
+ (id)resourcePathForUrl:(id)arg1;
+ (id)resourcePath;
+ (id)shareInstance;
- (id)md5HexDigest:(id)arg1;
- (void)preProcessVideoResource:(id)arg1 url:(id)arg2;
- (void)requestFinished:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

