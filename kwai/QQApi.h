//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QQApi : NSObject
{
}

+ (void)cgiShareReportWithMessage:(id)arg1 andActtype:(int)arg2 andReporttype:(int)arg3 andCallsource:(int)arg4;
+ (id)supportShareScheme;
+ (_Bool)openTIMApp;
+ (_Bool)openQQApp;
+ (id)getTIMInstallURL;
+ (id)getQQInstallURL;
+ (_Bool)isQQSupportApiForDataLine;
+ (_Bool)isTIMSupportApi;
+ (_Bool)isQQSupportApi;
+ (_Bool)isTIMSupportQZoneMediaShare;
+ (_Bool)isQQSupportQZoneMediaShare;
+ (_Bool)isQQSupportQZoneShare;
+ (_Bool)isQIMInstalled;
+ (_Bool)isTIMInstalled;
+ (_Bool)isQQInstalled;
+ (id)getAdItemArray;
+ (id)handleOpenURL:(id)arg1;
+ (id)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (int)sendMessage:(id)arg1;
+ (int)sendMessage_TIMNotInstalledOrOld:(id)arg1 isOld:(_Bool)arg2;
+ (int)sendMessage_QQNotInstalledOrOld:(id)arg1 isOld:(_Bool)arg2;
+ (void)showErrorWithWebView:(id)arg1;
+ (_Bool)checkQQApiURLMessage:(id)arg1;
+ (void)registerPluginWithId:(id)arg1;
+ (void)registerAccessToken:(id)arg1;
+ (void)registerQQConnectAppId:(id)arg1;
+ (void)registerQQUin:(id)arg1;
+ (void)registerQQConnectOpenId:(id)arg1;
- (id)init;

@end
