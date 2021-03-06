//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESCamera.h"

#import "HTSGLFilterEffectDelegate-Protocol.h"
#import "HTSMediaMixPlayerDelegate-Protocol.h"

@class HTSCameraConfiguration, HTSCameraKit, HTSGLCropFilter, HTSGLFilter, HTSGLFilterInput, HTSGLFilterNewEffect, HTSGLPreview, HTSMediaMixPlayer, HTSRawDataOutputRender, HTSVideoData, IESCameraWriter, NSMutableArray, NSString, NSTimer, UIButton;

@interface IESCameraLocal : IESCamera <HTSMediaMixPlayerDelegate, HTSGLFilterEffectDelegate>
{
    void *operationQueueKey;
    _Bool _highFrameRateEnable;
    _Bool _noneedProcessAudio;
    _Bool _torchOn;
    _Bool _isViewOnPresent;
    _Bool _isTorchEnable;
    _Bool _isFlashEnable;
    _Bool _forbidVideoRecord;
    _Bool _needsMirrorFrontCameraOutPut;
    _Bool _enableTapFocus;
    _Bool _enableTapexposure;
    _Bool _isStoryMode;
    _Bool _enterBackground;
    _Bool _initSuccess;
    _Bool _isAudioPlayerEnd;
    _Bool _shouldReplay;
    _Bool _captureImageProcessed;
    _Bool _isVideoRecorded;
    _Bool _bLivelyMode;
    _Bool _bNeedChangeConfig;
    _Bool _isFlashMode;
    _Bool _shouldCaptureImage;
    unsigned long long _frameRate;
    CDUnknownBlockType _videoProcessingCompletionCallback;
    long long _cameraStablizationMode;
    CDUnknownBlockType _faceInfoBlock;
    long long _previewModeType;
    long long _cameraFlashMode;
    long long _defaultCamera;
    long long _cameraMode;
    long long _photoPreset;
    long long _status;
    unsigned long long _previewFrameRate;
    double _audioPlayerStartedTime;
    double _maxAcceleration;
    double _videoRecordStartTime;
    double _recordRate;
    struct __CVBuffer *_captureImageBuffer;
    unsigned long long _beautifyType;
    unsigned long long _filterType;
    unsigned long long _captureImageStatus;
    long long _recordStatus;
    HTSVideoData *_videoData;
    HTSCameraKit *_videoCamera;
    HTSCameraConfiguration *_cameraConfigure;
    HTSCameraConfiguration *_livelyCameraConfigure;
    long long _cameraConfigMode;
    NSString *_sessionPreset;
    HTSGLPreview *_videoPreviewView;
    HTSGLCropFilter *_cropFilter;
    IESCameraWriter *_videoWriter;
    HTSMediaMixPlayer *_player;
    HTSGLFilter *_outputFilter;
    HTSGLFilterInput *_htsGLInput;
    HTSGLFilterNewEffect *_effectNewFilter;
    HTSRawDataOutputRender *_captureImageFilter;
    NSTimer *_motionDetectTimer;
    UIButton *_fakeBtn;
    NSMutableArray *_observerArray;
    id _audioPlayerObserve;
    id _audioInterruptObserver;
    HTSGLFilter *_watermarkFilter;
    HTSRawDataOutputRender *_frameBufferOutputFilter;
    long long _previewType;
    struct opaqueCMSampleBuffer *_stillImageSampleBuff;
    unsigned long long _processImageStatus;
    struct CGSize _outputSize;
    struct CGSize _captureSize;
    struct IESIndensityParam_t _beautyIndensity;
}

@property(nonatomic) unsigned long long processImageStatus; // @synthesize processImageStatus=_processImageStatus;
@property(nonatomic) struct opaqueCMSampleBuffer *stillImageSampleBuff; // @synthesize stillImageSampleBuff=_stillImageSampleBuff;
@property(nonatomic) _Bool shouldCaptureImage; // @synthesize shouldCaptureImage=_shouldCaptureImage;
@property(nonatomic) _Bool isFlashMode; // @synthesize isFlashMode=_isFlashMode;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) HTSRawDataOutputRender *frameBufferOutputFilter; // @synthesize frameBufferOutputFilter=_frameBufferOutputFilter;
@property(retain, nonatomic) HTSGLFilter *watermarkFilter; // @synthesize watermarkFilter=_watermarkFilter;
@property(retain, nonatomic) id audioInterruptObserver; // @synthesize audioInterruptObserver=_audioInterruptObserver;
@property(retain, nonatomic) id audioPlayerObserve; // @synthesize audioPlayerObserve=_audioPlayerObserve;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) UIButton *fakeBtn; // @synthesize fakeBtn=_fakeBtn;
@property(retain, nonatomic) NSTimer *motionDetectTimer; // @synthesize motionDetectTimer=_motionDetectTimer;
@property(retain, nonatomic) HTSRawDataOutputRender *captureImageFilter; // @synthesize captureImageFilter=_captureImageFilter;
@property(retain, nonatomic) HTSGLFilterNewEffect *effectNewFilter; // @synthesize effectNewFilter=_effectNewFilter;
@property(retain, nonatomic) HTSGLFilterInput *htsGLInput; // @synthesize htsGLInput=_htsGLInput;
@property(retain, nonatomic) HTSGLFilter *outputFilter; // @synthesize outputFilter=_outputFilter;
@property(retain, nonatomic) HTSMediaMixPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) IESCameraWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) HTSGLCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) HTSGLPreview *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property _Bool bNeedChangeConfig; // @synthesize bNeedChangeConfig=_bNeedChangeConfig;
@property _Bool bLivelyMode; // @synthesize bLivelyMode=_bLivelyMode;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property long long cameraConfigMode; // @synthesize cameraConfigMode=_cameraConfigMode;
@property(retain, nonatomic) HTSCameraConfiguration *livelyCameraConfigure; // @synthesize livelyCameraConfigure=_livelyCameraConfigure;
@property(retain, nonatomic) HTSCameraConfiguration *cameraConfigure; // @synthesize cameraConfigure=_cameraConfigure;
@property(retain, nonatomic) HTSCameraKit *videoCamera; // @synthesize videoCamera=_videoCamera;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) struct IESIndensityParam_t beautyIndensity; // @synthesize beautyIndensity=_beautyIndensity;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) unsigned long long captureImageStatus; // @synthesize captureImageStatus=_captureImageStatus;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) unsigned long long beautifyType; // @synthesize beautifyType=_beautifyType;
@property(nonatomic) struct __CVBuffer *captureImageBuffer; // @synthesize captureImageBuffer=_captureImageBuffer;
@property(nonatomic) double recordRate; // @synthesize recordRate=_recordRate;
@property(nonatomic) struct CGSize captureSize; // @synthesize captureSize=_captureSize;
@property double videoRecordStartTime; // @synthesize videoRecordStartTime=_videoRecordStartTime;
@property _Bool isVideoRecorded; // @synthesize isVideoRecorded=_isVideoRecorded;
@property(nonatomic) double maxAcceleration; // @synthesize maxAcceleration=_maxAcceleration;
@property(nonatomic) double audioPlayerStartedTime; // @synthesize audioPlayerStartedTime=_audioPlayerStartedTime;
@property(nonatomic) _Bool captureImageProcessed; // @synthesize captureImageProcessed=_captureImageProcessed;
@property(nonatomic) _Bool shouldReplay; // @synthesize shouldReplay=_shouldReplay;
@property(nonatomic) _Bool isAudioPlayerEnd; // @synthesize isAudioPlayerEnd=_isAudioPlayerEnd;
@property(nonatomic) _Bool initSuccess; // @synthesize initSuccess=_initSuccess;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
- (void)setIsStoryMode:(_Bool)arg1;
- (_Bool)isStoryMode;
- (void)setPreviewFrameRate:(unsigned long long)arg1;
- (unsigned long long)previewFrameRate;
- (void)setEnableTapexposure:(_Bool)arg1;
- (_Bool)enableTapexposure;
- (void)setEnableTapFocus:(_Bool)arg1;
- (_Bool)enableTapFocus;
- (_Bool)needsMirrorFrontCameraOutPut;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)setPhotoPreset:(long long)arg1;
- (long long)photoPreset;
- (void)setForbidVideoRecord:(_Bool)arg1;
- (_Bool)forbidVideoRecord;
- (long long)cameraMode;
- (long long)defaultCamera;
- (_Bool)isFlashEnable;
- (_Bool)isTorchEnable;
- (_Bool)isViewOnPresent;
- (struct CGSize)outputSize;
- (_Bool)isTorchOn;
- (long long)cameraFlashMode;
- (_Bool)noneedProcessAudio;
- (long long)previewModeType;
- (CDUnknownBlockType)faceInfoBlock;
- (long long)cameraStablizationMode;
- (CDUnknownBlockType)videoProcessingCompletionCallback;
- (void).cxx_destruct;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handlePanEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp;
- (_Bool)handleTouchDown;
- (_Bool)getSLAMPlaneDetectStatus;
- (_Bool)isSLAMRunning;
- (long long)getSLAMStatus;
- (void)filterEffectFrameUpdated;
- (void)setFaceInfoBlock:(CDUnknownBlockType)arg1;
- (void)showsWaterMark:(_Bool)arg1 withImages:(id)arg2 atPoint:(struct CGPoint)arg3 targetSize:(struct CGSize)arg4;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)mediaMixPlayer:(id)arg1 willResetItem:(id)arg2;
- (struct CGRect)cropRegionForOutputSize:(struct CGSize)arg1;
- (void)handleTapOnPreviewView:(id)arg1;
- (void)initVideoWriter;
- (void)initProcessList;
- (void)addPreViewToCamera:(id)arg1;
- (void)switchAudioMode:(long long)arg1;
- (void)removePlayer;
- (id)mixPlayer;
- (void)setNoneedProcessAudio:(_Bool)arg1;
- (unsigned long long)fragmentCount;
- (void)setCameraMode:(long long)arg1;
- (void)setPreviewModeType:(long long)arg1;
- (void)setNeedsMirrorFrontCameraOutPut:(_Bool)arg1;
- (void)setOutputSize:(struct CGSize)arg1;
- (void)setFrameRate:(unsigned long long)arg1;
- (void)setBitRate:(unsigned long long)arg1;
- (void)setTorchOn:(_Bool)arg1;
- (void)setCameraFlashMode:(long long)arg1;
- (void)setCameraStablizationMode:(long long)arg1;
- (_Bool)isCameraStablizationSupport;
- (void)setVideoProcessingCompletionCallback:(CDUnknownBlockType)arg1;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1 afterProcess:(_Bool)arg2;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (void)setFocusPoint:(struct CGPoint)arg1;
- (double)getTotalDuration;
- (void)cancelVideoRecord;
- (void)pauseVideoRecord;
- (void)startVideoRecordWithRate:(double)arg1 delayTime:(unsigned long long)arg2;
- (void)startVideoRecordWithRate:(double)arg1;
- (void)cancelVideoRecordReady;
- (id)videoRecordready;
- (void)reSyncAudioProgress;
- (void)addAudioPlayerObserver;
- (void)runInOperationQueue:(CDUnknownBlockType)arg1;
- (id)getFilterPathWithType:(unsigned long long)arg1;
- (void)postProcessBeautyLevel;
- (void)applyFilter:(unsigned long long)arg1;
- (void)applyEffect:(unsigned long long)arg1;
- (void)applyEffect:(unsigned long long)arg1 withPresetAudioVolumes:(id)arg2;
- (void)setReshapeLevel:(long long)arg1;
- (void)setBeautifyLevel:(long long)arg1;
- (void)applyBeautify:(unsigned long long)arg1 indensity:(struct IESIndensityParam_t)arg2;
- (void)setFaceDetectStatusBlock:(CDUnknownBlockType)arg1;
- (void)switchFilterWithPathOne:(id)arg1 PathTwo:(id)arg2 direction:(unsigned long long)arg3 progress:(double)arg4;
- (void)switchFilterWithType:(unsigned long long)arg1 TypeTwo:(unsigned long long)arg2 direction:(unsigned long long)arg3 progress:(double)arg4;
- (void)switchFilterWithType:(unsigned long long)arg1 TypeTwo:(unsigned long long)arg2 progress:(double)arg3;
- (void)applyReshape:(id)arg1 withIndensity:(struct IESIndensityParam_t)arg2;
- (void)applyIndensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (_Bool)suggestDoNotApplyFilter:(unsigned long long)arg1;
- (void)setframeRate:(unsigned long long)arg1;
- (unsigned long long)frameRate;
- (long long)currCameraPosition;
- (void)switchCameraSource;
- (void)stopAudioCapture;
- (void)stopVideoCapture;
- (void)releasePreviewFrameBufferIfNeeded;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (void)enablePreview;
- (void)changeConfigureMode:(long long)arg1 sessionPreset:(id)arg2;
- (void)startVideoCapture;
- (void)startAudioCapture;
- (void)storyStartVideoCapture;
- (void)setIsViewOnPresent:(_Bool)arg1;
- (void)setRecordSpeed:(double)arg1;
- (void)setHighFrameRateEnable:(_Bool)arg1;
- (_Bool)highFrameRateEnable;
- (void)motionDetectRun;
- (void)stopMotionDetect;
- (void)startMotionDetect;
- (void)setDefaultCamera:(long long)arg1;
- (void)resetPreviewWithView:(id)arg1 previewType:(long long)arg2;
- (void)releaseEffectManager;
- (void)dealloc;
- (id)initWithView:(id)arg1 previewType:(long long)arg2 videoData:(id)arg3 TTFaceDetectEnable:(_Bool)arg4 stickerDocumentPath:(id)arg5;
- (id)initWithView:(id)arg1 videoData:(id)arg2 TTFaceDetectEnable:(_Bool)arg3 stickerDocumentPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

