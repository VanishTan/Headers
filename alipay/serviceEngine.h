//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommandEngineBase.h"

@class NSDictionary, NSString;

@interface serviceEngine : CommandEngineBase
{
    NSString *serviceName;
    NSString *message;
    NSDictionary *param;
    NSString *parseCmd;
}

- (void).cxx_destruct;
- (void)returnResult:(id)arg1;
- (void)sendMessage;
- (_Bool)ParseCommand:(id)arg1;
- (_Bool)ExcuteCmd:(id)arg1;
- (_Bool)StartEngine;

@end

