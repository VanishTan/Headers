//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface WXStackBatchContactsInfo : NSObject
{
    unsigned long long _timeStamp;
    NSArray *_arrayContactInfo;
    unsigned long long _serverContactsCount;
    long long _flagType;
}

@property(nonatomic) long long flagType; // @synthesize flagType=_flagType;
@property(nonatomic) unsigned long long serverContactsCount; // @synthesize serverContactsCount=_serverContactsCount;
@property(retain, nonatomic) NSArray *arrayContactInfo; // @synthesize arrayContactInfo=_arrayContactInfo;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;

@end
