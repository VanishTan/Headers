//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FRRecommendUserStoryHasMoreStructModel, SSAvatarView, SSThemedImageView, SSThemedLabel, SSThemedView;

@interface TTRecommendUserStoryCollectionViewCell : UICollectionViewCell
{
    _Bool _isAnimated;
    SSThemedView *_containerView;
    SSAvatarView *_avatarImageView;
    SSThemedLabel *_nameLabel;
    SSThemedView *_borderView;
    SSThemedImageView *_circleImageView;
    SSThemedImageView *_addFriendImageView;
    FRRecommendUserStoryHasMoreStructModel *_hasMoreModel;
}

@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(retain, nonatomic) FRRecommendUserStoryHasMoreStructModel *hasMoreModel; // @synthesize hasMoreModel=_hasMoreModel;
@property(retain, nonatomic) SSThemedImageView *addFriendImageView; // @synthesize addFriendImageView=_addFriendImageView;
@property(retain, nonatomic) SSThemedImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) SSThemedView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SSAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (struct CGRect)convertAvatarRect;
- (void)animatedWithDuration:(double)arg1 delay:(double)arg2;
- (void)configBeforeAnimation;
- (void)setAddFriendImageViewImage;
- (void)configWithStoryHasMoreModel:(id)arg1;
- (void)configWithStoryModel:(id)arg1;
- (void)_customThemeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
