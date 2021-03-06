//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WVBridgeCallbackContext;

@interface WVDeviceContext : NSObject
{
    id <WVBridgeCallbackContext> _context;
    id _callback;
    double _interval;
}

+ (id)contextWithContext:(id)arg1 withCallback:(id)arg2 withInterval:(double)arg3;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) id callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <WVBridgeCallbackContext> context; // @synthesize context=_context;
- (void).cxx_destruct;

@end

