//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QZCObjectHolder : NSObject
{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (void)unhold:(id)arg1;
+ (void)hold:(id)arg1 withKey:(id)arg2;
- (void).cxx_destruct;
- (void)unhold:(id)arg1;
- (void)hold:(id)arg1 withKey:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

