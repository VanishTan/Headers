//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSData, NSString;

@protocol NetToUIDelegate <NSObject>

@optional
- (void)onNotifyFail:(NSString *)arg1 WithCMD:(int)arg2 Seq:(long long)arg3;
- (void)onNotifySuc:(NSData *)arg1 WithCMD:(int)arg2 Seq:(long long)arg3;
- (void)onNotifyFail:(void *)arg1;
- (void)onNotifySuc:(NSData *)arg1;
@end

