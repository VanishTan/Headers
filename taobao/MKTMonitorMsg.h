//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKTPacketProtocol-Protocol.h"

@class MKTProtoMonitor, NSString;

@interface MKTMonitorMsg : NSObject <MKTPacketProtocol>
{
    NSString *_messageId;
    long long _msgType;
    long long _type;
    long long _subType;
    CDUnknownBlockType _callback;
    NSString *_serviceId;
    MKTProtoMonitor *_monitorData;
}

@property(retain, nonatomic) MKTProtoMonitor *monitorData; // @synthesize monitorData=_monitorData;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)setSource:(long long)arg1;
- (void)setDataTag:(id)arg1;
- (void)setDataId:(id)arg1;
- (CDUnknownBlockType)getCallback;
- (id)getTraceId;
- (id)getServiceId;
- (_Bool)needAck;
- (long long)getSubType;
- (long long)getType;
- (long long)getMsgType;
- (long long)getTimeout;
- (id)getUniqueKey;
- (id)getTopic;
- (long long)getSysCode;
- (id)toData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
