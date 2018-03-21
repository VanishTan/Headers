//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEUserFollowersDetailModel, UIImageView, UILabel, UIView;

@interface AWEDetailFansCollectionViewCell : UICollectionViewCell
{
    UILabel *_countLabel;
    UILabel *_nameLabel;
    UIImageView *_iconImageView;
    UIImageView *_iconBorderImageView;
    UIImageView *_arrowImageView;
    AWEUserFollowersDetailModel *_model;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) AWEUserFollowersDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *iconBorderImageView; // @synthesize iconBorderImageView=_iconBorderImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)countStringWithCount:(long long)arg1 isDetailFansView:(_Bool)arg2;
- (void)configureWithModel:(id)arg1 type:(unsigned long long)arg2 isDetailFansView:(_Bool)arg3 isLastCell:(_Bool)arg4;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
