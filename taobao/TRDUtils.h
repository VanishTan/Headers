//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TRDUtils : NSObject
{
}

+ (long long)moduleLevel:(id)arg1 andModuleConfig:(id)arg2 andLevel:(long long)arg3;
+ (id)filesAtPath:(id)arg1 andCondition:(CDUnknownBlockType)arg2;
+ (id)fileExistsAtPath:(id)arg1 andTime:(id)arg2 andRootPath:(id)arg3;
+ (id)logDirectoryNoFile:(id)arg1 andRootPath:(id)arg2;
+ (id)logDirectory:(id)arg1 andTime:(id)arg2 andRootPath:(id)arg3;
+ (id)logDirectory:(id)arg1 andRootPath:(id)arg2;
+ (_Bool)createFileAtPath:(id)arg1;
+ (_Bool)createDirectoryAtPath:(id)arg1;
+ (void)runCommand:(id)arg1 andCmdData:(id)arg2 andCache:(id)arg3 andUpload:(id)arg4 andConfig:(id)arg5 andCloud:(id)arg6 andDelegate:(id)arg7;

@end
