//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KOLoginWebViewController, NSError;

@protocol KOLoginWebViewControllerDelegate <NSObject>

@optional
- (void)webViewController:(KOLoginWebViewController *)arg1 didAgeAuthResultWithError:(NSError *)arg2;
- (void)webViewController:(KOLoginWebViewController *)arg1 didFailedUpgradeGrant:(NSError *)arg2;
- (void)webViewController:(KOLoginWebViewController *)arg1 didCancelWithError:(NSError *)arg2;
@end

