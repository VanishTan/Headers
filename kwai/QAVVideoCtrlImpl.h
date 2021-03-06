//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAVVideoCtrl.h"

@class QAVContextImpl;
@protocol QAVLocalVideoDelegate, QAVMediaVideoDelegate, QAVRemoteVideoDelegate, QAVScreenVideoDelegate;

@interface QAVVideoCtrlImpl : QAVVideoCtrl
{
    CDUnknownBlockType _switchComplete;
    CDUnknownBlockType _enableComplete;
    id <QAVLocalVideoDelegate> _localVideoDlg;
    id <QAVRemoteVideoDelegate> _remoteVideoDlg;
    id <QAVScreenVideoDelegate> _screenVideoDlg;
    id <QAVMediaVideoDelegate> _mediaFileVideoDlg;
    _Bool _EnableExternalCapture;
    _Bool _isBeauty;
    long long _currentCameraID;
    int _externalCount;
    struct VideoCallback *_videoNativeCallback;
    QAVContextImpl *_context;
}

@property(retain, nonatomic) QAVContextImpl *context; // @synthesize context=_context;
- (long long)addWaterMark:(long long)arg1 image:(id)arg2;
- (_Bool)isFrontcamera;
- (void)switchEncode:(_Bool)arg1;
- (void)switchDecode:(_Bool)arg1;
- (void)switchBackground:(_Bool)arg1;
- (void)inputWhiteningParam:(float)arg1;
- (void)inputBeautyParam:(float)arg1;
- (_Bool)isEnableBeauty;
- (id)getCaptureSession;
- (id)getPreviewLayer;
- (long long)enableExternalCapture:(_Bool)arg1 shouldRender:(_Bool)arg2;
- (_Bool)isEnableExternalCapture;
- (void)dealloc;
- (void)OnLocalCameraRaw:(void *)arg1 result:(void **)arg2;
- (void)OnLocalProcess:(struct VideoFrame *)arg1;
- (void)OnLoaclVideoData:(struct VideoFrame *)arg1;
- (void)OnMediaFileVideoData:(struct VideoFrame *)arg1;
- (void)OnScreenVideoData:(struct VideoFrame *)arg1;
- (void)OnRemoteVideoData:(struct VideoFrame *)arg1;
- (void)setMediaVideoDelegate:(id)arg1;
- (void)setScreenVideoDelegate:(id)arg1;
- (void)setRemoteVideoDelegate:(id)arg1;
- (void)setLocalVideoDelegate:(id)arg1;
- (int)fillExternalCaptureFrame:(id)arg1;
- (void)OnSwitchCamera:(int)arg1 ret:(int)arg2;
- (void)OnEnableCamera:(_Bool)arg1 ret:(int)arg2;
- (id)getQualityTips;
- (long long)enableCamera:(long long)arg1 isEnable:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (long long)switchCamera:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (long long)setRotation:(int)arg1;
- (void)onLocalRenderViewInit:(id)arg1;
- (struct AVVideoCtrlProxy *)getNativeObj;
- (id)initWithContext:(id)arg1;

@end

