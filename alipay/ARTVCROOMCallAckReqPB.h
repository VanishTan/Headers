//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class ARTVCROOMUserInfoPB, NSString;

@interface ARTVCROOMCallAckReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) ARTVCROOMUserInfoPB *calleeInfo; // @dynamic calleeInfo;
@property(nonatomic) int calleeStatus; // @dynamic calleeStatus;
@property(readonly) _Bool hasCalleeInfo; // @dynamic hasCalleeInfo;
@property(readonly) _Bool hasCalleeStatus; // @dynamic hasCalleeStatus;
@property(readonly) _Bool hasNeedTurnServer; // @dynamic hasNeedTurnServer;
@property(readonly) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool needTurnServer; // @dynamic needTurnServer;
@property(retain, nonatomic) NSString *roomId; // @dynamic roomId;

@end

