//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TBCartBaseResponse;

@protocol AliCartNetworkProcessorDelegate <NSObject>
- (void)handleRequestResultFailedwithEvent:(NSString *)arg1 refreshUI:(_Bool)arg2 showMsg:(NSString *)arg3 actionType:(unsigned long long)arg4 response:(TBCartBaseResponse *)arg5;
- (void)handleRequestResultFailedwithEvent:(NSString *)arg1 refreshUI:(_Bool)arg2 showMsg:(NSString *)arg3 actionType:(unsigned long long)arg4;
- (void)handleRequestSuccesswithEvent:(NSString *)arg1 refreshData:(_Bool)arg2 refreshUI:(_Bool)arg3 showMsg:(NSString *)arg4 sendNotify:(NSString *)arg5 actionType:(unsigned long long)arg6 response:(TBCartBaseResponse *)arg7 promotionRequest:(_Bool)arg8 andPromotionParams:(NSDictionary *)arg9;
- (void)handleRequestSuccesswithEvent:(NSString *)arg1 refreshData:(_Bool)arg2 refreshUI:(_Bool)arg3 showMsg:(NSString *)arg4 sendNotify:(NSString *)arg5 response:(TBCartBaseResponse *)arg6 actionType:(unsigned long long)arg7;
@end
