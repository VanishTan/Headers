//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ExploreOrderedData, HorizontalCard, SSThemedImageView, SSThemedLabel, TTAlphaThemedButton;

@interface TSVHorizontalCardCellInfoView : UIView
{
    UIView *_containerView;
    TTAlphaThemedButton *_unInterestedButton;
    TTAlphaThemedButton *_moreButton;
    SSThemedImageView *_moreArrow;
    SSThemedLabel *_titleLabel;
    HorizontalCard *_horizontalCard;
    ExploreOrderedData *_orderedData;
}

@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(retain, nonatomic) HorizontalCard *horizontalCard; // @synthesize horizontalCard=_horizontalCard;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedImageView *moreArrow; // @synthesize moreArrow=_moreArrow;
@property(retain, nonatomic) TTAlphaThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) TTAlphaThemedButton *unInterestedButton; // @synthesize unInterestedButton=_unInterestedButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)unInterestButtonClicked:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)configureFollowRecommendEnableStatus:(_Bool)arg1;
- (void)refreshWithData:(id)arg1;

@end

