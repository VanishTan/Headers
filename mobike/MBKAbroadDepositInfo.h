//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"

@class NSArray, NSString;

@interface MBKAbroadDepositInfo : NSObject <MBKJsonModelObject>
{
    _Bool _supportMonthCard;
    NSArray *_cardInfos;
}

+ (id)jsonKeyToClassNameMap;
@property(nonatomic) _Bool supportMonthCard; // @synthesize supportMonthCard=_supportMonthCard;
@property(retain, nonatomic) NSArray *cardInfos; // @synthesize cardInfos=_cardInfos;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
