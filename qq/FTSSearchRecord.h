//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface FTSSearchRecord : QQModel
{
    _Bool _isQidianMaster;
    long long _type;
    NSString *_identity;
    NSString *_majorText;
    NSString *_typeText;
    long long _clickCount;
    double _time;
    NSString *_relationId;
}

@property(nonatomic) _Bool isQidianMaster; // @synthesize isQidianMaster=_isQidianMaster;
@property(copy, nonatomic) NSString *relationId; // @synthesize relationId=_relationId;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) long long clickCount; // @synthesize clickCount=_clickCount;
@property(copy, nonatomic) NSString *typeText; // @synthesize typeText=_typeText;
@property(copy, nonatomic) NSString *majorText; // @synthesize majorText=_majorText;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

