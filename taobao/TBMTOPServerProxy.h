//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSString, TBSDKMTOPServer;

@interface TBMTOPServerProxy : NSProxy
{
    TBSDKMTOPServer *_server;
    NSString *_source;
}

- (void).cxx_destruct;
- (void)tryReportInfoForMonitoring;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithMtopServer:(id)arg1 source:(id)arg2;

@end
