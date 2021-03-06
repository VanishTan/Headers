//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EZVector3 : NSObject
{
    float mTmpArray1[4];
    float mTmpArray2[4];
    float _x;
    float _y;
    float _z;
    EZVector3 *_mTemp;
}

+ (float)lengthX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
+ (id)crossAndCreateV1:(id)arg1 V2:(id)arg2;
+ (id)crossAndSetV1:(id)arg1 V2:(id)arg2 Result:(id)arg3;
+ (id)subtractAndCreateA:(id)arg1 B:(id)arg2;
+ (id)subtractAndSetA:(id)arg1 B:(id)arg2 Result:(id)arg3;
+ (id)addAndCreateA:(id)arg1 B:(id)arg2;
+ (id)addAndSetA:(id)arg1 B:(id)arg2 Result:(id)arg3;
+ (id)ORIGIN;
+ (id)NEG_Z;
+ (id)NEG_Y;
+ (id)NEG_X;
+ (id)Z;
+ (id)Y;
+ (id)X;
@property(retain, nonatomic) EZVector3 *mTemp; // @synthesize mTemp=_mTemp;
@property(nonatomic) float z; // @synthesize z=_z;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
- (void).cxx_destruct;
- (void)dealloc;
- (id)setRandom;
- (id)description;
- (id)clone;
- (float)angle:(id)arg1;
- (float)dot:(id)arg1;
- (id)negate;
- (id)normalize;
- (float)length;
- (float)length2;
- (id)cross:(id)arg1;
- (id)crossX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)getTemporaryVector;
- (id)divide:(float)arg1;
- (id)multiplyM:(id)arg1;
- (id)multiply:(float)arg1;
- (id)subtractV:(id)arg1;
- (id)subtractX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)addV:(id)arg1;
- (id)addX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)setAllV:(id)arg1;
- (id)setAllValue:(float)arg1;
- (_Bool)equals:(id)arg1;
- (id)setAllX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)initWithV:(id)arg1;
- (id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)init;

@end

