//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "InstallAndDeviceIDMessage-Protocol.h"

@class NSString;

@interface AWETelecomGetPhoneManager : NSObject <InstallAndDeviceIDMessage>
{
}

+ (id)shareInstance;
- (void)didUpdateDeviceIDFrom:(id)arg1 to:(id)arg2;
- (void)didUpdateInstallIDFrom:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
