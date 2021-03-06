//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/SDAVAssetExportSessionDelegate-Protocol.h>

@class AVAssetExportSession, CIContext, NSString, QQSubtitleImageGenerator, SDAVAssetExportSession, TBFilter, UIImage;
@protocol OS_dispatch_source;

@interface QZVideoEditTools : NSObject <SDAVAssetExportSessionDelegate>
{
    TBFilter *_filter;
    UIImage *_doodleImage;
    CIContext *_filterContext;
    NSObject<OS_dispatch_source> *_progressTimer;
    QQSubtitleImageGenerator *_subtitleImageGenerator;
    NSObject<OS_dispatch_source> *_compressTimeoutTimer;
    float _comProgress;
    CDUnknownBlockType _progressHandlerBlock;
    SDAVAssetExportSession *_compressSession;
    AVAssetExportSession *_exportSession;
}

+ (void)cancelBatchOperations;
+ (id)sharedInstance;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) SDAVAssetExportSession *compressSession; // @synthesize compressSession=_compressSession;
@property(copy, nonatomic) CDUnknownBlockType progressHandlerBlock; // @synthesize progressHandlerBlock=_progressHandlerBlock;
- (void).cxx_destruct;
- (void)reportVideoLength;
- (void)exportSession:(id)arg1 renderFrame:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 toBuffer:(struct __CVBuffer *)arg4;
- (struct CGAffineTransform)getValidTransformWithOrientation:(long long)arg1 oriTransform:(struct CGAffineTransform)arg2 originSize:(struct CGSize)arg3;
- (id)clipAndRotateVideo:(id)arg1 videoEditInfo:(id)arg2 error:(id *)arg3;
- (_Bool)audioMaxSampleIsValid:(id)arg1;
- (void)createDoodleInfo:(id)arg1;
- (CDStruct_1b6d18a9)frameDuration:(float)arg1 videoCompParam:(id)arg2;
- (id)audioSettingsFromVideoCompParam:(id)arg1;
- (id)videoSettingsFromVideoCompParam:(id)arg1 naturalSize:(struct CGSize)arg2 naturalBitRate:(float)arg3 transform:(struct CGAffineTransform)arg4 needProfile:(_Bool)arg5;
- (id)validVideoSettings:(id)arg1 naturalSize:(struct CGSize)arg2 naturalBitRate:(float)arg3 transform:(struct CGAffineTransform)arg4;
- (void)checkCompressTimeout;
- (void)updateCompressProgress;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)stopCompressTimeOutTimer;
- (void)startCompressTimeOutTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)stopWhenSuspended;
@property(readonly, nonatomic) float progress;
- (void)cancleEdit;
- (void)exportVideoWithAsset:(id)arg1 outPutFilePath:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)compressVideoWithAsset:(id)arg1 outPutFilePath:(id)arg2 videoEditInfo:(id)arg3 videoCompParam:(id)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (void)progressVideoWithAsset:(id)arg1 outPutFilePath:(id)arg2 videoEditInfo:(id)arg3 videoCompParam:(id)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (_Bool)editVideoWithAsset:(id)arg1 outPutFilePath:(id)arg2 videoEditInfo:(id)arg3 videoCompParam:(id)arg4 completeHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 needBatchCancel:(_Bool)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

