//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class MQPSharePayChannelView;

@interface ImmPayPluginSharePay : ImmPayEventPlugin
{
    MQPSharePayChannelView *_channelView;
}

@property(retain, nonatomic) MQPSharePayChannelView *channelView; // @synthesize channelView=_channelView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end
