//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface GMSExpiringLocationCallback : NSObject
{
    CDUnknownBlockType _callback;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)timeoutHandler;
- (void)callWithError:(id)arg1;
- (void)callWithLocation:(id)arg1;
@property(readonly, nonatomic) _Bool callbackIsValid;
- (id)initWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;

@end
