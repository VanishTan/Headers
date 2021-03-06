//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPTextMessage.h"

@class NSArray, NSDictionary;

@interface TBAMPSystemMessage : TBAMPTextMessage
{
    NSDictionary *_templateDict;
    NSArray *_activeList;
    long long _systemMessageType;
}

@property(nonatomic) long long systemMessageType; // @synthesize systemMessageType=_systemMessageType;
@property(retain, nonatomic) NSArray *activeList; // @synthesize activeList=_activeList;
@property(retain, nonatomic) NSDictionary *templateDict; // @synthesize templateDict=_templateDict;
- (void).cxx_destruct;
- (void)setExt:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)ampDeepCopy;
- (id)toDictionary;
- (void)loadFromJson:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

