//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class ARTVCROOMUserInfoPB, NSString, PBMapStringString;

@interface ARTVCROOMCreateCallReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizName; // @dynamic bizName;
@property(nonatomic) int callMode; // @dynamic callMode;
@property(nonatomic) int callType; // @dynamic callType;
@property(retain, nonatomic) ARTVCROOMUserInfoPB *createrInfo; // @dynamic createrInfo;
@property(retain, nonatomic) PBMapStringString *extInfos; // @dynamic extInfos;
@property(readonly) _Bool hasBizName; // @dynamic hasBizName;
@property(readonly) _Bool hasCallMode; // @dynamic hasCallMode;
@property(readonly) _Bool hasCallType; // @dynamic hasCallType;
@property(readonly) _Bool hasCreaterInfo; // @dynamic hasCreaterInfo;
@property(readonly) _Bool hasExtInfos; // @dynamic hasExtInfos;

@end

