//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQDownloadItem;

@interface QQFaceFeatureDownloader : NSObject
{
    _Bool _isDownloading;
    NSObject *_unzipLock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _failedBlock;
    QQDownloadItem *_downItem;
    unsigned long long _status;
    _Bool _downloadConfig;
    _Bool _arStarDownloadConfig;
    _Bool _isPreDownload;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)handleARStarFaceConfig:(id)arg1;
- (void)handleFaceDownloadConfig:(id)arg1;
- (_Bool)didGetConfig;
- (void)notifyFailedBlock:(int)arg1;
- (void)notifyProgressBlock:(float)arg1;
- (void)notifySuccessBlock;
- (_Bool)hasAllResource;
- (unsigned long long)status;
- (_Bool)isDownloading;
- (_Bool)unZipPacketByZipFilePath:(id)arg1 unZipTempPath:(id)arg2 unZipPath:(id)arg3 isDeleteZipFileAftarUnZipSuccess:(_Bool)arg4;
- (void)handleUFADownloadFinish:(id)arg1;
- (void)handleUFADownloadProgress:(id)arg1;
- (void)downloadUFA;
- (_Bool)hasDownloadUFA;
- (void)downloadFeature:(id)arg1;
- (_Bool)downloadResource:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 isPreDownload:(_Bool)arg4;
- (id)makeUnZipMainTempPath;
- (id)makeUnzipTempPath:(id)arg1;
- (_Bool)checkUnzipExist:(id)arg1;
- (id)makeUnZipMainPath;
- (id)getUnZipPath:(id)arg1;
- (_Bool)createDirectoryIfNeed:(id)arg1;
- (id)makeResourcePath;
- (id)resourePath;
- (_Bool)checkNetTypeSuitableForDownload:(int)arg1;
- (void)clearAllDownloadBlocks;
- (id)init;

@end
