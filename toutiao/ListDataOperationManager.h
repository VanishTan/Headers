//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ListDataOperationManager : NSObject
{
    _Bool _dirtyFlag;
    NSMutableArray *operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations;
- (void).cxx_destruct;
- (void)reuserAllOperations;
- (void)cancelAllOperations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)buildChain;
- (void)startExecute:(id)arg1;
- (id)operationAtIndex:(int)arg1;
- (void)addOperation:(id)arg1;
- (unsigned long long)operationCount;
- (void)removeOperationAtIndex:(int)arg1;
- (void)removeOperation:(id)arg1;
- (void)insertOperation:(id)arg1 atIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end

