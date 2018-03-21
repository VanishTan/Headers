//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichMediaPickerReportDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSDictionary, NSString, QQViewController, QZPOIInfo, QZWeatherInfo;

@interface MQZoneVideoManager : NSObject <QQRichMediaPickerControllerDelegate, QQRichMediaPickerReportDelegate, UIActionSheetDelegate>
{
    long long _lbsRequestId;
    QZPOIInfo *_poiInfo;
    QZWeatherInfo *_weatherInfo;
    NSDictionary *_moodInfo;
    _Bool _supportLBSInfo;
    _Bool _showFaceUTemplate;
    _Bool _isExpandDDMenu;
    _Bool _supportLocalVideo;
    QQViewController *_lastViewController;
    long long _fromType;
    NSDictionary *_userInfo;
    unsigned long long _editSettingMode;
    NSString *_sendButtonTitle;
    NSString *_videoItemID;
    NSDictionary *_schemaParam;
}

+ (id)addOverlayImage:(id)arg1 toVideoThumbImage:(id)arg2;
+ (id)getVideoCover:(id)arg1 videoPath:(id)arg2 withStartTime:(double)arg3 stopTime:(double)arg4;
+ (id)videoOutputSetting;
+ (struct CGSize)deviceCaptureSolutionFront;
+ (struct CGSize)deviceCaptureSolution;
@property(retain, nonatomic) NSDictionary *schemaParam; // @synthesize schemaParam=_schemaParam;
@property(nonatomic) _Bool supportLocalVideo; // @synthesize supportLocalVideo=_supportLocalVideo;
@property(retain, nonatomic) NSString *videoItemID; // @synthesize videoItemID=_videoItemID;
@property(retain, nonatomic) NSString *sendButtonTitle; // @synthesize sendButtonTitle=_sendButtonTitle;
@property(nonatomic) unsigned long long editSettingMode; // @synthesize editSettingMode=_editSettingMode;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool isExpandDDMenu; // @synthesize isExpandDDMenu=_isExpandDDMenu;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool showFaceUTemplate; // @synthesize showFaceUTemplate=_showFaceUTemplate;
@property(nonatomic) _Bool supportLBSInfo; // @synthesize supportLBSInfo=_supportLBSInfo;
@property(nonatomic) __weak QQViewController *lastViewController; // @synthesize lastViewController=_lastViewController;
- (void).cxx_destruct;
- (void)gifPost:(id)arg1;
- (void)fetchLBSWeatherInfoNotication:(id)arg1;
- (void)fetchLBSInfoNotification:(id)arg1;
- (void)qzHaboReportVideoRecordWithError:(id)arg1 customCode:(long long)arg2;
- (void)qzVideoRecordReportWithSceondAction:(long long)arg1 thridActionType:(long long)arg2;
- (void)openVideoRecordViewController:(id)arg1;
- (id)getPreviewModelFromInfo:(id)arg1;
- (id)getPreviewModelFromVideoInfo:(id)arg1;
- (void)post:(id)arg1;
- (void)uploadVideo:(id)arg1 isVideoInfo:(_Bool)arg2;
- (void)richMediaPickerController:(id)arg1 eventWithAction:(long long)arg2;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)sendImage:(id)arg1;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)requestLBSInfo;
- (void)openVideoRecoreder;
- (void)openVideoMakerViewController:(id)arg1 userInfo:(id)arg2;
- (void)openVideoRecordViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
