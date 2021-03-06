//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MKTPacketProtocol <NSObject>
- (void)setSource:(long long)arg1;
- (void)setDataTag:(NSString *)arg1;
- (void)setDataId:(NSString *)arg1;
- (void (^)(MKTResult *))getCallback;
- (_Bool)needAck;
- (NSString *)getTraceId;
- (NSString *)getServiceId;
- (long long)getSubType;
- (long long)getType;
- (long long)getMsgType;
- (long long)getTimeout;
- (NSString *)getUniqueKey;
- (NSString *)getTopic;
- (long long)getSysCode;
@end

