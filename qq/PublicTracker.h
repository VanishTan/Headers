//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PublicTracker : NSObject
{
    long long openAioCost;
    NSMutableDictionary *trackers;
}

+ (id)sharedSingleton;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)trackAIO:(id)arg1:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
