//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEVideoPublishTask-Protocol.h"

@class AWEVideoPublishViewModel, HTSPlayer, NSProgress, NSString;

@interface AWEVideoPublishTask : NSObject <AWEVideoPublishTask>
{
    unsigned long long _type;
    long long _status;
    AWEVideoPublishViewModel *_publishViewModel;
    HTSPlayer *_player;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) HTSPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)beginVideoEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

