//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MSSDKAccountRiskInfo : NSObject
{
    int _result;
    int _score;
    unsigned long long _installStatus;
    NSString *_msg;
    NSDictionary *_riskData;
}

+ (id)defaultAccountRiskInfo;
@property(copy, nonatomic) NSDictionary *riskData; // @synthesize riskData=_riskData;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned long long installStatus; // @synthesize installStatus=_installStatus;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

