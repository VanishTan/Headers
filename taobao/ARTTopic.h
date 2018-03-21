//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARTContext, NSDictionary, NSString;

@interface ARTTopic : NSObject
{
    NSString *_name;
    NSDictionary *_data;
    NSObject *_source;
    NSString *_category;
    ARTContext *_context;
}

@property(retain, nonatomic) ARTContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) __weak NSObject *source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 data:(id)arg2 source:(id)arg3;
- (id)initWithName:(id)arg1 data:(id)arg2 source:(id)arg3 category:(id)arg4;
- (id)initWithName:(id)arg1 data:(id)arg2 source:(id)arg3 category:(id)arg4 context:(id)arg5;

@end
