//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCDataSourceProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;
@protocol MCMergeSessionDataSourceDelegate;

@protocol MCMergeSessionDataSourceProtocol <MCDataSourceProtocol>
- (void)deletedWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (_Bool)isLogicDeletedWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (void)clearUnreadCountWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (_Bool)isMarkUnreadCountWithLastMessageDate:(NSDate *)arg1 sessionID:(NSString *)arg2;
- (NSArray *)mergeSessionListWithSessionGroups:(NSDictionary *)arg1;
- (void)removeDataSourceDelegate:(id <MCMergeSessionDataSourceDelegate>)arg1;
- (void)addDataSourceDelegate:(id <MCMergeSessionDataSourceDelegate>)arg1;
@end

