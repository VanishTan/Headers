//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichShortVideoPreviewViewControllerDelegate-Protocol.h>

@class AVAssetExportSession, NSString, NSTimer, QQAsset, QQMultiImagePickerController, QQRichShortVideoPreviewViewController, QZVideoProgressBar, UILabel;
@protocol MQZMultiImagePickerWrapperDelegate;

@interface MQZMultiImagePickerWrapper : NSObject <QQMultiImagePickerControllerDelegate, QQRichShortVideoPreviewViewControllerDelegate>
{
    QQRichShortVideoPreviewViewController *_videoPreview;
    QQAsset *_videoAsset;
    NSTimer *_videoProgressTimer;
    AVAssetExportSession *_videoExporter;
    QZVideoProgressBar *_progressBar;
    UILabel *_tipsLabel;
    int _reportScene;
    QQMultiImagePickerController *_picker;
    _Bool _isUseVideoUrl;
    _Bool _isSupportMix;
    id <MQZMultiImagePickerWrapperDelegate> _delegate;
    unsigned long long _localVideoSizeLimit;
    unsigned long long _localVideoMaxDuration;
}

@property(nonatomic) _Bool isSupportMix; // @synthesize isSupportMix=_isSupportMix;
@property(nonatomic) unsigned long long localVideoMaxDuration; // @synthesize localVideoMaxDuration=_localVideoMaxDuration;
@property(nonatomic) unsigned long long localVideoSizeLimit; // @synthesize localVideoSizeLimit=_localVideoSizeLimit;
@property(nonatomic) _Bool isUseVideoUrl; // @synthesize isUseVideoUrl=_isUseVideoUrl;
@property(nonatomic) __weak id <MQZMultiImagePickerWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewControllerCanceledWhenProcessing:(id)arg1;
- (void)previewControllerCanceled:(id)arg1;
- (void)videoExportProgressTimerHandle;
- (void)clearProgress;
- (void)previewControllerDidSelected:(id)arg1;
- (void)receivedQQChatRequest:(id)arg1;
- (void)reportMQZMultiImagePickerClickSendBtnInPreviewView;
- (void)reportMQZMultiImagePickerClickPhotoInPreviewView;
- (void)reportMQZMultiImagePickerSelectPhotoListCount:(long long)arg1;
- (void)reportMQZMultiImagePickerDidCancel:(id)arg1;
- (void)reportMQZMultiImagePickerClickBackBtn:(id)arg1;
- (void)reportMQZMultiImagePickerClickPreviewBtn:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)QQMultiImagePickerControllerClickSendBtnInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerClickPhotoInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerClickPreviewBtn:(id)arg1;
- (void)QQMultiImagePickerControllerClickBackBtn:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)presendInViewController:(id)arg1 withMaxPhotoCount:(long long)arg2 selectedList:(id)arg3 assetsFilter:(int)arg4 scene:(int)arg5 reportScene:(int)arg6;
- (_Bool)isInQQChat;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
