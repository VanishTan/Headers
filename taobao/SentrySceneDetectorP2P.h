//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SentrySceneDetectorBase.h"

@class NSMutableDictionary;

@interface SentrySceneDetectorP2P : SentrySceneDetectorBase
{
    NSMutableDictionary *_mDict;
    _Bool _bRunning;
}

@property(nonatomic) _Bool bRunning; // @synthesize bRunning=_bRunning;
- (void).cxx_destruct;
- (void)stopAction:(id)arg1;
- (void)startAction:(id)arg1;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
