//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray;

@interface USPersonalTagLabelDuplicate : QQModel
{
    unsigned int _isOriLabel;
    unsigned long long _oriLabelID;
    NSArray *_allIDs;
}

@property(copy, nonatomic) NSArray *allIDs; // @synthesize allIDs=_allIDs;
@property(nonatomic) unsigned long long oriLabelID; // @synthesize oriLabelID=_oriLabelID;
@property(nonatomic) unsigned int isOriLabel; // @synthesize isOriLabel=_isOriLabel;
- (void).cxx_destruct;
- (id)description;

@end

