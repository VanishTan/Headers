//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface AWECloudCommandManager : NSObject
{
    NSDictionary *_networkCommonParams;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSDictionary *networkCommonParams; // @synthesize networkCommonParams=_networkCommonParams;
- (void).cxx_destruct;
- (void)_uploadFileWithName:(id)arg1 data:(id)arg2 params:(id)arg3 mimeType:(id)arg4;
- (void)_postCommandResponse:(id)arg1;
- (void)executeCommand:(id)arg1;
- (void)executeCommandWithData:(id)arg1;
- (void)dealloc;
- (id)init;

@end
