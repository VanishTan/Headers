//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface OrangeIPStrategy : NSObject
{
    _Bool _useIP;
    int _requestCnt;
    NSArray *_ipList;
}

+ (id)makeIPStrategy:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList=_ipList;
@property(nonatomic) int requestCnt; // @synthesize requestCnt=_requestCnt;
@property(nonatomic) _Bool useIP; // @synthesize useIP=_useIP;
- (void).cxx_destruct;
- (id)initWithIPList:(id)arg1 useIP:(_Bool)arg2;

@end

