//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GPUImageOutput, NSArray, NSMutableArray;

@interface WBSlideShowThemeComponent : NSObject
{
    NSMutableArray *_tempFilters;
    double _innerTime;
    _Bool _pending;
    double _minTimeStart;
    double _maxTimeEnd;
    double _duration;
    NSArray *_models;
    GPUImageOutput *_source;
}

+ (void)generateFilterChainWithComponents:(id)arg1 output:(id)arg2;
@property(readonly, nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(readonly, nonatomic) GPUImageOutput *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double maxTimeEnd; // @synthesize maxTimeEnd=_maxTimeEnd;
@property(nonatomic) double minTimeStart; // @synthesize minTimeStart=_minTimeStart;
- (void).cxx_destruct;
- (void)clean;
- (void)pending;
- (void)processing;
- (void)refreshComponentWithTime:(double)arg1;
- (void)addNextFilter:(id)arg1;
- (void)setVideoPath:(id)arg1 withAlpha:(id)arg2;
- (void)setVideoPath:(id)arg1;
- (void)setImage:(id)arg1;
@property(readonly, nonatomic) NSArray *filters;
- (id)initWithComponentArray:(id)arg1 outputSize:(struct CGSize)arg2;
- (void)generateFilterChainWithOutput:(id)arg1;

@end

