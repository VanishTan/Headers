//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSArray, NSDictionary, NSString;

@interface PirateElfAreaItem : PirateDataModel
{
    long long _type;
    NSDictionary *_check;
    NSString *_areaName;
    NSArray *_ruleID;
}

@property(retain, nonatomic) NSArray *ruleID; // @synthesize ruleID=_ruleID;
@property(retain, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(retain, nonatomic) NSDictionary *check; // @synthesize check=_check;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;

@end

