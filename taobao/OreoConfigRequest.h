//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface OreoConfigRequest : NSObject
{
    NSString *_configName;
    NSMutableArray *_finishBlocks;
}

@property(retain, nonatomic) NSMutableArray *finishBlocks; // @synthesize finishBlocks=_finishBlocks;
@property(readonly, copy, nonatomic) NSString *configName; // @synthesize configName=_configName;
- (void).cxx_destruct;
- (void)callFinishBlock:(id)arg1;
- (void)getOreoConfig:(id)arg1 pageName:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1;

@end

