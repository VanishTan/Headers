//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TZBTransferListModel : NSObject
{
    _Bool _isLastPage;
    NSArray *_transferList;
}

+ (void)addData:(id)arg1 toList:(id)arg2;
+ (id)transferListModelWithTZBTransferListQueryResponse:(id)arg1;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(retain, nonatomic) NSArray *transferList; // @synthesize transferList=_transferList;
- (void).cxx_destruct;
- (void)addTransferListWithTZBTransferListQueryResponse:(id)arg1;

@end
