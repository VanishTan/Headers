//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQStoryFeedBaseUserCell.h>

@class UIButton;

@interface QQStoryFeedTagCell : QQStoryFeedBaseUserCell
{
    UIButton *_seeMoreButton;
}

+ (double)getFeedCellHeight:(id)arg1 pageSource:(unsigned long long)arg2;
@property(retain, nonatomic) UIButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
- (void)seeMoreButtonTouchUpInside:(id)arg1;
- (void)storyFeedVideoViewOnScrollEndToRight:(id)arg1;
- (void)storyFeedVideoView:(id)arg1 didSelectorVideoCoverView:(id)arg2 atIndexPath:(id)arg3;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserNameLabelTapGesture:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserCoverTouchUpInside:(id)arg2;
- (void)enterTagDetailViewController;
- (void)updateSubviewFrame;
- (void)playFirstVideo;
- (id)toHeaderInfoModel;
- (void)setStoryFeed:(id)arg1;
- (id)headerInfoView;
- (void)setupSeeMoreButton;
- (void)setup;
- (void)dealloc;

@end
