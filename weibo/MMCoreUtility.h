//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MMCoreUtility : NSObject
{
}

+ (void)movePidPathToFidPath:(id)arg1 pid:(id)arg2 fname:(id)arg3;
+ (_Bool)checkUnfollowPrivateRemindStatus;
+ (_Bool)checkUnfollowPrivateBlockStatus;
+ (void)syncUnfollowPrivateBlockStatus:(_Bool)arg1;
+ (void)saveUnfollowPrivateBlockStatus:(_Bool)arg1;
+ (void)clearUploadImageDiscoveryInfoString;
+ (id)uploadImageDiscoveryInfoString;
+ (void)saveUploadImageDiscoveryInfoString:(id)arg1;
+ (id)mmMessageAttachmentPath:(id)arg1 isThumbnail:(_Bool)arg2;
+ (id)mmLibraryPath:(id)arg1;
+ (id)mmAudioFileName:(id)arg1;
+ (id)mmWAVAudioFilePath:(id)arg1;
+ (id)mmAudioFilePath;
+ (id)mmUploadPath;
+ (id)mmAttachmentsPath;
+ (long long)currentTimestamp;

@end

