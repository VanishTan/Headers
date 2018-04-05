//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "MMQRCodeScannerDelegate-Protocol.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMQRCodeScanner, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SightCameraCapture : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    _Bool m_isActive;
    _Bool m_isAudioActive;
    _Bool m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    NSString *m_videoPreset;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureStillImageOutput *m_imageOutput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    double m_targetBitRate;
    int m_captureFrameRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned int m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    _Bool m_bIsUsingHighExposureISO;
    _Bool m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    _Bool _activeQRScan;
    NSString *_preset;
}

@property(nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(nonatomic) _Bool activeQRScan; // @synthesize activeQRScan=_activeQRScan;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
@property(readonly, nonatomic) _Bool isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
@property(nonatomic) _Bool isActive; // @synthesize isActive=m_isActive;
- (void).cxx_destruct;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (void)initQRCodeScanner;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_552c3471)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
- (_Bool)switchCameraToPosition:(long long)arg1;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)zoom;
- (_Bool)canZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCaptureAudioDevice;
- (_Bool)stopCameraCapture;
- (_Bool)startCameraCaptureAudioDevice;
- (void)startCameraCapture;
- (void)onCameraFailed;
- (void)startRunning;
- (_Bool)isRunning;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)addMoviePreviewer:(id)arg1;
- (void)setPreviewReady;
- (void)removeFileWriter:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)addMovieWriter:(id)arg1;
- (_Bool)hasMultipleCameras;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)switchToFileOutputMode;
- (_Bool)isFileOutputMode;
- (void)setSessionPreset:(id)arg1 forCameraPosition:(long long)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (void)setCameraFrameRate;
- (_Bool)initCaptureSession:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 frameRate:(int)arg3;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
- (id)initWithPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

