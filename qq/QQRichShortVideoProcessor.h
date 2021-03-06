//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRichOperatorBase.h>

@class NSString, NSTimer, QQAsset, SDAVAssetExportSession, UIImage;
@protocol QQRichShortVideoProcessorDelegate;

@interface QQRichShortVideoProcessor : QQRichOperatorBase
{
    id <QQRichShortVideoProcessorDelegate> _theDelegate;
    NSTimer *_timer;
    UIImage *_thumbnail;
    NSString *_compressedMp4Path;
    NSString *_md5;
    QQAsset *_alasset;
    _Bool _isQQTribe;
    double _shortVideoOptimizationMaxLongSide;
    double _shortVideoOptimizationABR;
    double _shortVideoOptimizationMinDuration;
    double _shortVideoOptimizationConstantParam;
    double _shortVideoOptimizationConstantParamMin;
    double _shortVideoOptimizationMaxFileSize;
    double _shortVideoOptimizationMaxFPS;
    double _shortVideoOptimizationAudioBitRate;
    SDAVAssetExportSession *_exportSession;
    struct CGSize _videoSize;
    _Bool _shouldOptimizeForNetworkUse;
    int _sessionType;
}

@property(nonatomic) double shortVideoOptimizationMinDuration; // @synthesize shortVideoOptimizationMinDuration=_shortVideoOptimizationMinDuration;
@property(nonatomic) double shortVideoOptimizationABR; // @synthesize shortVideoOptimizationABR=_shortVideoOptimizationABR;
@property(nonatomic) double shortVideoOptimizationMaxLongSide; // @synthesize shortVideoOptimizationMaxLongSide=_shortVideoOptimizationMaxLongSide;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) id <QQRichShortVideoProcessorDelegate> theDelegate; // @synthesize theDelegate=_theDelegate;
@property(nonatomic) _Bool isQQTribe; // @synthesize isQQTribe=_isQQTribe;
@property(retain, nonatomic) QQAsset *alasset; // @synthesize alasset=_alasset;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *compressedMp4Path; // @synthesize compressedMp4Path=_compressedMp4Path;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (_Bool)isSourceVideoCompressed:(id)arg1;
- (void)updateDpc:(id)arg1;
- (unsigned long long)uintValueForCompressKey:(id)arg1;
- (double)floatValueForCompressKey:(id)arg1;
- (void)updateCompressConfig;
- (id)description;
- (id)getFileMd5Burst:(id)arg1;
- (void)showProgress;
- (void)stopTimer;
- (void)startTimer;
- (void)getVideoProgress;
- (_Bool)isFinish;
- (_Bool)cancel;
- (_Bool)canCancel;
- (_Bool)execut;
- (void)onVideoExportComplete:(id)arg1 status:(long long)arg2 handle:(CDUnknownBlockType)arg3;
- (struct CGAffineTransform)validTranformWithTransform:(struct CGAffineTransform)arg1 originSize:(struct CGSize)arg2;
- (struct CGSize)getSizeWithTransform:(struct CGAffineTransform)arg1 inputSize:(struct CGSize)arg2;
- (_Bool)compressMov2Mp4:(CDUnknownBlockType)arg1;
- (id)scaleThumb:(id)arg1;
- (_Bool)genVideoThumbnail;
- (void)removeTmpFile;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

