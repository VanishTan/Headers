//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol QQSideAccountDelegate <NSObject>
- (void)handleBindUinMsgReadedConfirm:(int)arg1 cookie:(NSData *)arg2 WithSUin:(long long)arg3;
- (void)handleSideAccountPushIsBind:(_Bool)arg1 uin:(long long)arg2 bindUin:(long long)arg3 time:(unsigned int)arg4;
- (void)handleGetBindMessage:(int)arg1 msgdata:(NSDictionary *)arg2;
- (void)handleBindRelationShip:(int)arg1 msg:(NSString *)arg2 uins:(NSArray *)arg3 msgData:(NSDictionary *)arg4;
- (void)handleUnbind:(int)arg1 msg:(NSString *)arg2 msgData:(NSDictionary *)arg3;
- (void)handleBind:(int)arg1 msg:(NSString *)arg2 msgData:(NSDictionary *)arg3;
@end

