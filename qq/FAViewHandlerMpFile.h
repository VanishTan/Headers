//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAViewHandlerBase.h>

@interface FAViewHandlerMpFile : FAViewHandlerBase
{
}

- (void)dataReportFAOperationBtnClick;
- (void)OnDownloadComplete:(int)arg1 filePath:(id)arg2;
- (void)OnFileResume:(id)arg1;
- (void)OnFileComplete:(id)arg1;
- (void)OnFileProgress:(id)arg1;
- (void)OnFileStart:(id)arg1;
- (void)OnFileCheck:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewClicked:(long long)arg1;
- (void)OnDownloadAction:(_Bool)arg1;
- (void)onOperateAction;
- (void)onStopAction;
- (id)getProgressText;
- (_Bool)canShowProgress;
- (double)getProgressValue;
- (id)getErrLabelText;
- (id)getSupportLabelText;
- (id)getSizeTimeLabelText;
- (id)getOperationBtnTitle;
- (int)getCurrentViewMode;
- (void)updateImage;
- (void)updateTransferInfo;
- (_Bool)canAutoDownLoad;
- (_Bool)isKindOfHandler;
- (_Bool)canShowRightButton;
- (void)dealloc;
- (int)businessType;
- (id)initWithModel:(id)arg1 delegate:(id)arg2;

@end
