//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAccountLogger-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol TTAccountAuthLoginLogger <TTAccountLogger>

@optional
- (void)customWapAuthCallbackAndRedirectToURL:(NSString *)arg1 forPlatform:(long long)arg2 error:(NSError *)arg3 context:(NSDictionary *)arg4;
- (void)customWapLoginDidTapSNSBarWithChecked:(_Bool)arg1 forPlatform:(long long)arg2;
- (void)customWapAuthForPlatform:(long long)arg1 didFailWithRespContext:(NSDictionary *)arg2;
- (void)customWapAuthForPlatform:(long long)arg1 didSuccessWithRespContext:(NSDictionary *)arg2;
- (void)SDKAuthForPlatform:(long long)arg1 didFailWithRespContext:(NSDictionary *)arg2;
- (void)SDKAuthForPlatform:(long long)arg1 didSuccessWithRespContext:(NSDictionary *)arg2;
@end
