//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSSettingModel : NSObject
{
}

+ (void)clearSetting;
+ (void)saveSetting;
+ (void)initializeSettings;
+ (void)setLogUploadSwitch:(_Bool)arg1;
+ (_Bool)getLogUploadSwitch;
+ (void)setGidSwitch:(_Bool)arg1;
+ (_Bool)getGidSwitch;
+ (void)setVkeySwitchInDataMode:(_Bool)arg1;
+ (_Bool)getVkeySwitchInDataMode;
+ (void)setVkeySwitchInTokenMode:(_Bool)arg1;
+ (_Bool)getVkeySwitchInTokenMode;
+ (void)setAgentSwitch:(int)arg1;
+ (int)getAgentSwitch;
+ (void)setWebrtcSwitch:(id)arg1;
+ (id)getWebrtcSwitch;
+ (void)setDegradeTime:(id)arg1;
+ (id)getDegradeTime;
+ (void)setTimeInterval:(id)arg1;
+ (id)getTimeInterval;

@end
