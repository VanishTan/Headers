//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KLPacket;

@interface KLRequest : NSObject
{
    _Bool _needResponse;
    _Bool _isPing;
    int _encryptType;
    KLPacket *_packet;
    double _timeout;
    double _sendTime;
    long long _seq;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

@property(nonatomic) _Bool isPing; // @synthesize isPing=_isPing;
@property(nonatomic) _Bool needResponse; // @synthesize needResponse=_needResponse;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) int encryptType; // @synthesize encryptType=_encryptType;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) KLPacket *packet; // @synthesize packet=_packet;
- (void).cxx_destruct;
- (_Bool)isTimeout;
- (id)data;
- (id)initWithPacket:(id)arg1 timeOut:(double)arg2 encryptType:(int)arg3 seq:(long long)arg4 needResponse:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

