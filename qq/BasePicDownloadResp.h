//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface BasePicDownloadResp : NSObject
{
    long long _fileId;
    unsigned int _result;
    NSString *_errorMsg;
    NSData *_fileMd5;
    NSString *_thumbUrlSuffix;
    NSString *_originalUrlSuffix;
    NSString *_bigUrlSuffix;
    NSMutableArray *_ipAndPort;
    NSString *_domainName;
    int _xo;
    _Bool _httpsFlag;
}

@property(nonatomic) _Bool httpsFlag; // @synthesize httpsFlag=_httpsFlag;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *bigUrlSuffix; // @dynamic bigUrlSuffix;
@property(retain, nonatomic) NSString *domainName; // @dynamic domainName;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) long long fileId; // @dynamic fileId;
@property(retain, nonatomic) NSData *fileMd5; // @dynamic fileMd5;
@property(retain, nonatomic) NSMutableArray *ipAndPort; // @dynamic ipAndPort;
@property(retain, nonatomic) NSString *originalUrlSuffix; // @dynamic originalUrlSuffix;
@property(nonatomic) unsigned int result; // @dynamic result;
@property(retain, nonatomic) NSString *thumbUrlSuffix; // @dynamic thumbUrlSuffix;

@end
