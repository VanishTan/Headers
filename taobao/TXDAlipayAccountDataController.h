//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TXDAlipayAccountViewModel;

@interface TXDAlipayAccountDataController : NSObject
{
    TXDAlipayAccountViewModel *_viewModel;
    CDUnknownBlockType _completionBlock;
    unsigned long long _fetchTimes;
}

@property(nonatomic) unsigned long long fetchTimes; // @synthesize fetchTimes=_fetchTimes;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) TXDAlipayAccountViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)fetchError:(id)arg1;
- (void)fetch;
- (void)fetch:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

