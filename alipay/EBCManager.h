//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EBCManager : NSObject
{
}

+ (id)getLastError;
+ (id)getEBCContextInfo;
+ (id)loadedImages;
+ (long long)loadBandage:(id)arg1 aliasName:(id)arg2 delegate:(id)arg3;
+ (long long)loadBundle:(id)arg1 aliasName:(id)arg2;
+ (_Bool)shouldIgnore:(_Bool)arg1;
+ (void)init;

@end

