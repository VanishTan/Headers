//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString, QQLockDictionary;

@interface NewInviteJoinGroupDataEngine : NSObject <IEngineDispatchDelegate>
{
    QQLockDictionary *_extraInfoSeqDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQLockDictionary *extraInfoSeqDic; // @synthesize extraInfoSeqDic=_extraInfoSeqDic;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)RequestInviteJoinGroup:(unsigned long long)arg1 invitedArray:(id)arg2 msg:(id)arg3 sourceID:(unsigned int)arg4 subSourceID:(unsigned int)arg5;
- (int)RequestInviteJoinGroup:(unsigned long long)arg1 invitedArray:(id)arg2 msg:(id)arg3 WithExtraInfo:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

