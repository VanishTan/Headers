//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DFSplashScreenInfo : NSObject
{
    _Bool _conditionSelfTimerElapsed;
    _Bool _conditionFrameworkStarted;
    _Bool _conditionLauncherDidAppear;
    NSDictionary *_Info;
    NSString *_fakeSource;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool conditionLauncherDidAppear; // @synthesize conditionLauncherDidAppear=_conditionLauncherDidAppear;
@property(nonatomic) _Bool conditionFrameworkStarted; // @synthesize conditionFrameworkStarted=_conditionFrameworkStarted;
@property(nonatomic) _Bool conditionSelfTimerElapsed; // @synthesize conditionSelfTimerElapsed=_conditionSelfTimerElapsed;
@property(retain, nonatomic) NSString *fakeSource; // @synthesize fakeSource=_fakeSource;
@property(retain, nonatomic) NSDictionary *Info; // @synthesize Info=_Info;
- (void).cxx_destruct;
- (void)dismiss;
- (_Bool)dismissConditionSupplied;

@end
