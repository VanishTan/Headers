//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MBSectionItem : NSObject
{
    NSMutableArray *_msgArray;
    double _timeInterval;
}

@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
- (void).cxx_destruct;
- (id)timeHeaderDesc;
- (id)init;

@end
