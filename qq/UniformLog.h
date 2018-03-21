//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface UniformLog : NSObject
{
    NSString *_departKey;
    NSString *_opUin;
    NSString *_targetUin;
    NSString *_opType;
    NSString *_opName;
    int _opEntry;
    unsigned int _opCount;
    int _opResult;
    NSNumber *_reserve2;
    NSNumber *_reserve3;
    NSString *_reserve4;
    NSString *_reserve5;
    int _xo;
}

+ (id)elementNameAtIndex:(int)arg1;
+ (int)elementCount;
+ (id)uniformLogWithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3;
- (_Bool)reportWithLogKey:(id)arg1;
- (id)formatedLog;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *departKey; // @dynamic departKey;
@property(nonatomic) unsigned int opCount; // @dynamic opCount;
@property(nonatomic) int opEntry; // @dynamic opEntry;
@property(retain, nonatomic) NSString *opName; // @dynamic opName;
@property(nonatomic) int opResult; // @dynamic opResult;
@property(retain, nonatomic) NSString *opType; // @dynamic opType;
@property(retain, nonatomic) NSString *opUin; // @dynamic opUin;
@property(retain, nonatomic) NSNumber *reserve2; // @dynamic reserve2;
@property(retain, nonatomic) NSNumber *reserve3; // @dynamic reserve3;
@property(retain, nonatomic) NSString *reserve4; // @dynamic reserve4;
@property(retain, nonatomic) NSString *reserve5; // @dynamic reserve5;
@property(retain, nonatomic) NSString *targetUin; // @dynamic targetUin;

@end
