//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;

@interface TLSyncDataManager : NSObject
{
    NSMutableArray *_syncKeys;
    NSOperationQueue *_syncQueue;
}

@property(retain, nonatomic) NSOperationQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableArray *syncKeys; // @synthesize syncKeys=_syncKeys;
- (void).cxx_destruct;

@end
