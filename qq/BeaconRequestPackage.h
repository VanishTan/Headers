//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol AnaNSObjTransToJceBufferProtocol;

@interface BeaconRequestPackage : NSObject
{
    BOOL _platformId;
    NSString *_appkey;
    NSString *_appVersion;
    NSString *_sdkId;
    NSString *_sdkVersion;
    int _cmd;
    id <AnaNSObjTransToJceBufferProtocol> _sBuffer;
    NSString *_osVer;
    NSString *_model;
    BOOL _encryType;
    BOOL _zipType;
    NSString *_reserved;
    int _eventCnt;
    int _xo;
}

+ (id)initWithData:(id)arg1 ana:(id)arg2 cmd:(int)arg3 sBuffer:(id)arg4;
+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;
@property(nonatomic) int eventCnt; // @synthesize eventCnt=_eventCnt;
- (void)dealloc;
- (void)createWUPModel:(struct RequestPackage *)arg1 error:(id *)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *appkey; // @dynamic appkey;
@property(nonatomic) int cmd; // @dynamic cmd;
@property(nonatomic) BOOL encryType; // @dynamic encryType;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *osVer; // @dynamic osVer;
@property(nonatomic) BOOL platformId; // @dynamic platformId;
@property(retain, nonatomic) NSString *reserved; // @dynamic reserved;
@property(retain, nonatomic) id <AnaNSObjTransToJceBufferProtocol> sBuffer; // @dynamic sBuffer;
@property(retain, nonatomic) NSString *sdkId; // @dynamic sdkId;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) BOOL zipType; // @dynamic zipType;

@end
