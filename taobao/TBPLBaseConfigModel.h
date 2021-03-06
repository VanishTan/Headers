//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDate, NSDictionary, NSString;

@interface TBPLBaseConfigModel : TBJSONModel
{
    _Bool _appear;
    _Bool _showCloseBtn;
    _Bool _enqueue;
    _Bool _forcePopRespectingPriority;
    _Bool _exlusive;
    _Bool _embed;
    _Bool _openDirectly;
    NSString *_jsonString;
    NSString *_mustAppearIn;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_uuid;
    long long _times;
    NSString *_type;
    NSDictionary *_params;
    double _modalThreshold;
    NSString *_layerType;
    long long _priority;
    NSDictionary *_extra;
}

@property(nonatomic) _Bool openDirectly; // @synthesize openDirectly=_openDirectly;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool embed; // @synthesize embed=_embed;
@property(nonatomic) _Bool exlusive; // @synthesize exlusive=_exlusive;
@property(nonatomic) _Bool forcePopRespectingPriority; // @synthesize forcePopRespectingPriority=_forcePopRespectingPriority;
@property(nonatomic) _Bool enqueue; // @synthesize enqueue=_enqueue;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *layerType; // @synthesize layerType=_layerType;
@property(nonatomic) _Bool showCloseBtn; // @synthesize showCloseBtn=_showCloseBtn;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool appear; // @synthesize appear=_appear;
@property(copy, nonatomic) NSString *mustAppearIn; // @synthesize mustAppearIn=_mustAppearIn;
@property(copy, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
- (void).cxx_destruct;
- (id)analyseDate:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

