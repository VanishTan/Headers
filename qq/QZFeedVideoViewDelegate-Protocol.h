//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoThumbViewDelegate-Protocol.h>

@class NSError, NSString, QzoneFeedModel, QzoneFeedVideo, UIButton;

@protocol QZFeedVideoViewDelegate <QZPhotoThumbViewDelegate>

@optional
- (void)playerViewStopPlay;
- (void)playerViewPausePlay;
- (void)jumpToURL:(NSString *)arg1;
- (void)setLiveInfoViewsHidden:(_Bool)arg1;
- (void)changeRoomStatus:(long long)arg1;
- (void)quickForwardButtonHidden:(_Bool)arg1 forwardButton:(UIButton *)arg2 withFeedModel:(QzoneFeedModel *)arg3;
- (void)endRecommendVideoAction:(long long)arg1 withFeedModel:(QzoneFeedModel *)arg2 withFeedVideo:(QzoneFeedVideo *)arg3 withUrl:(NSString *)arg4;
- (void)updateCurrentPlayTime:(double)arg1;
- (void)playerViewFailed:(NSError *)arg1;
- (void)playingTick:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)playerViewEnd;
- (void)playerViewStarted;
@end

