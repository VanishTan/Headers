//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ExploreMoviePlayerControlView, ExploreOrderedData, NSString, UIView;

@protocol ExploreMovieViewDelegate <NSObject>

@optional
- (ExploreOrderedData *)orderedData;
- (void)movieViewWillMoveToSuperView:(UIView *)arg1;
- (void)prePlayButtonClicked;
- (void)replayButtonClickedInTrafficView;
- (void)movieSeekTime:(double)arg1;
- (void)movieRemainderTime:(double)arg1;
- (void)retryButtonClicked;
- (void)replayButtonClicked;
- (void)shareActionClickedWithActivityType:(NSString *)arg1;
- (void)moreButtonClicked;
- (void)FullScreenshareButtonClicked;
- (void)shareButtonClicked;
- (_Bool)shouldPlayWhenViewWillAppear;
- (void)controlViewTouched:(ExploreMoviePlayerControlView *)arg1;
- (void)movieDidEnterFullScreen;
- (void)movieDidExitFullScreen;
- (_Bool)shouldStopMovieWhenInBackground;
- (_Bool)shouldResumePlayWhenActive;
- (_Bool)shouldDisableUserInteraction;
- (struct CGRect)movieViewFrameAfterExitFullscreen;
- (_Bool)shouldShowDetailButton;
- (void)showDetailButtonClicked;
@end

