//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListBaseItem.h"

@class WBHCCalData, WBHCStepData;

@interface WBHealthCardListItem : WBCardListBaseItem
{
    WBHCStepData *_stepData;
    WBHCCalData *_calData;
    double _weight;
}

@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) WBHCCalData *calData; // @synthesize calData=_calData;
@property(retain, nonatomic) WBHCStepData *stepData; // @synthesize stepData=_stepData;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

