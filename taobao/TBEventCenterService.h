//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBEventCenterService : NSObject
{
}

+ (id)createErrorWithType:(unsigned long long)arg1;
+ (void)broadcastEvent:(unsigned long long)arg1 params:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)broadcastEvent:(unsigned long long)arg1 params:(id)arg2;
+ (void)postEvent:(unsigned long long)arg1 eventToken:(id)arg2 params:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)postEvent:(unsigned long long)arg1 eventToken:(id)arg2 params:(id)arg3;

@end

