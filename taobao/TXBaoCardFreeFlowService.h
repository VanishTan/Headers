//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXBaseService.h"

@interface TXBaoCardFreeFlowService : TXBaseService
{
}

+ (id)getBaoCardUrlByCode:(id)arg1 formConfigDic:(id)arg2;
+ (_Bool)isCurrentMobileSupport:(id)arg1;
+ (_Bool)isNoCacheTime:(id)arg1;
+ (_Bool)isGrayUser:(long long)arg1;
+ (id)getISPCode;
+ (_Bool)isChinaTietong;
+ (_Bool)isChinaTelecom;
+ (_Bool)isChinaMobile;
+ (_Bool)isChinaUnicom;
+ (id)getBizCode;
+ (void)queryAliBaoCardFreeFlow:(id)arg1 ispCode:(id)arg2 phoneNumber:(id)arg3 privateIp:(id)arg4 appName:(id)arg5 result:(CDUnknownBlockType)arg6;
+ (void)queryAliBaoCardFreeFlow:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

