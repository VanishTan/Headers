//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QRRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_requestContainer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestContainer; // @synthesize requestContainer=_requestContainer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (id)init;
- (void)removeRequestForKey:(id)arg1;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (id)requestForKey:(id)arg1;

@end

