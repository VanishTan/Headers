//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPMessage.h"

@class NSString;

@interface TBAMPWeexCardMessage : TBAMPMessage
{
    NSString *_wxIdentity;
    NSString *_wxTplUrl;
    NSString *_wxData;
    NSString *_wxOpt;
    NSString *_wxDisplayName;
    NSString *_wxDisplayType;
}

@property(copy, nonatomic) NSString *wxDisplayType; // @synthesize wxDisplayType=_wxDisplayType;
@property(copy, nonatomic) NSString *wxDisplayName; // @synthesize wxDisplayName=_wxDisplayName;
@property(copy, nonatomic) NSString *wxOpt; // @synthesize wxOpt=_wxOpt;
@property(copy, nonatomic) NSString *wxData; // @synthesize wxData=_wxData;
@property(copy, nonatomic) NSString *wxTplUrl; // @synthesize wxTplUrl=_wxTplUrl;
@property(copy, nonatomic) NSString *wxIdentity; // @synthesize wxIdentity=_wxIdentity;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)toDictionary;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

