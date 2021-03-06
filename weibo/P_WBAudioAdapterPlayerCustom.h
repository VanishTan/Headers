//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAudioAdapterPlayer.h"

@class WBAudioStreamer;

@interface P_WBAudioAdapterPlayerCustom : WBAudioAdapterPlayer
{
    WBAudioStreamer *_streamer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithPlayerItem:(id)arg1;
- (void)p_statusObserve;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isPausedByInterruption;
- (void)setPausedByInterruption:(_Bool)arg1;
- (void)logCurrentMusicError;
- (void)clearAll;
- (id)playerItem;
- (_Bool)isSeeking;
- (double)bufferingRatio;
- (double)progressRatio;
- (double)duration;
- (double)progress;
- (double)calculatedBitRate;
- (void)seekToTime:(double)arg1;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)pause;
- (void)stop;
- (void)start;
- (void)setPlayerItem:(id)arg1;

@end

