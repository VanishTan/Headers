//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBDetailEventBaseSubscriber.h"

@class AliDetailVideoManager;

@interface TBDetailContextSubscriber : TBDetailEventBaseSubscriber
{
    AliDetailVideoManager *_videoManager;
}

@property(retain, nonatomic) AliDetailVideoManager *videoManager; // @synthesize videoManager=_videoManager;
- (void).cxx_destruct;
- (id)handleGetVideoManager;
- (id)handleEvent:(id)arg1;
- (id)init;

@end

