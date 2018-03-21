//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "TBOrderKitDataSourceProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol TBOrderKitListDataSourceProtocol <NSObject, TBOrderKitDataSourceProtocol>
- (void)currentViewUrl:(NSString *)arg1 code:(NSString *)arg2;
- (void)refreshBatchOperationView:(_Bool)arg1 floatTipsView:(_Bool)arg2;
- (void)refreshBatchOperationView:(_Bool)arg1;
- (void)reloadData;
- (void)refreshUI;

@optional
- (void)commitEventWithEventId:(int)arg1 args:(NSDictionary *)arg2;
@end
