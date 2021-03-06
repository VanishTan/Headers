//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RequestItem : NSObject
{
    id _content;
    NSString *_reqCmd;
    int _seq;
    int _retryTimes;
    NSString *_uin;
    int _xo;
    int _requestType;
}

@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void)dealloc;
- (id)initWithCmd:(id)arg1 andContent:(id)arg2 seq:(int)arg3 retryTimes:(int)arg4 uin:(id)arg5;

// Remaining properties
@property(retain, nonatomic) id content; // @dynamic content;
@property(retain, nonatomic) NSString *reqCmd; // @dynamic reqCmd;
@property(nonatomic) int retryTimes; // @dynamic retryTimes;
@property(nonatomic) int seq; // @dynamic seq;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

