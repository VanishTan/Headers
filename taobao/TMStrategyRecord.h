//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TMStrategyRecord : NSObject
{
    NSString *_from;
    NSString *_priority;
    NSString *_event;
    NSString *_module;
    NSString *_command;
    NSString *_thread;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;

@end

