//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTFFetchLiveInfoTrace : NSObject
{
    int _status;
    long long _aid;
    long long _ft;
    long long _netFt1;
    long long _netReT1;
    long long _netFt2;
    long long _netReT2;
    NSString *_defRes;
    NSString *_url;
    NSString *_extra;
}

@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *defRes; // @synthesize defRes=_defRes;
@property(nonatomic) long long netReT2; // @synthesize netReT2=_netReT2;
@property(nonatomic) long long netFt2; // @synthesize netFt2=_netFt2;
@property(nonatomic) long long netReT1; // @synthesize netReT1=_netReT1;
@property(nonatomic) long long netFt1; // @synthesize netFt1=_netFt1;
@property(nonatomic) long long ft; // @synthesize ft=_ft;
@property(nonatomic) long long aid; // @synthesize aid=_aid;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)traceDict;
- (id)init;

@end

