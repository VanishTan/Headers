//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FADelegate;

@interface FAOnlineFileSigProcesser : NSObject
{
    id <FADelegate> _delegate;
    unsigned long long _loginSvrTime;
}

+ (id)getInstance;
- (_Bool)isLegalForOperationTypeChangeFrom:(int)arg1 to:(int)arg2;
- (_Bool)isOfflineFileNotifyAbnormally:(id)arg1;
- (id)processPCUpdateProgressHoldNotifySig:(id)arg1;
- (id)processMobileRecvConfirmSig:(id)arg1;
- (id)processPCUpdateStartNotifySig:(id)arg1;
- (id)getNewMsgContentFromModel:(id)arg1 file:(id)arg2;
- (id)processOfflineFileNotifySig:(id)arg1;
- (_Bool)isNeedReportReadForOfflineFileMsg:(unsigned long long)arg1;
- (id)processPCTransOfflineSig:(id)arg1;
- (id)processPCUpdateProgressNotifySig:(id)arg1;
- (id)processSenderCancelSig:(id)arg1;
- (id)processPCSaveWYSig:(id)arg1;
- (id)processPCRefuseSig:(id)arg1;
- (id)processPCRecvSig:(id)arg1;
- (id)processPCRecvRefuseSaveWYSig:(id)arg1 operationType:(int)arg2 guardBlock:(CDUnknownBlockType)arg3 addToCacheBlock:(CDUnknownBlockType)arg4;
- (id)processRequestSig:(id)arg1;
- (id)initMsgModelWithFAOnlineFileSigModel:(id)arg1;
- (id)processOnlineFileSigInternal:(id)arg1;
- (void)notifyProcessOnlineFileSig:(id)arg1;
- (id)processOnlineFileSig:(id)arg1;
- (void)didLogin;
- (id)init;

@end
