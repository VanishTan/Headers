//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IESVideoBSLinkedList, IESVideoBSObjectPool;

@interface IESVideoBSNetworkProfiler : NSObject
{
    IESVideoBSObjectPool *_pool;
    IESVideoBSLinkedList *_sampleList;
    unsigned long long _weight;
}

+ (unsigned long long)bitrate;
+ (void)sampleWithDataLength:(unsigned long long)arg1 interval:(double)arg2;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long weight; // @synthesize weight=_weight;
@property(retain, nonatomic) IESVideoBSLinkedList *sampleList; // @synthesize sampleList=_sampleList;
@property(retain, nonatomic) IESVideoBSObjectPool *pool; // @synthesize pool=_pool;
- (void).cxx_destruct;
- (unsigned long long)_bitrate;
- (void)_sampleWithDataLength:(unsigned long long)arg1 interval:(double)arg2;
- (id)init;

@end

