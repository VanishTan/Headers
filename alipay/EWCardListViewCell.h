//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface EWCardListViewCell : UICollectionViewCell
{
    UIView *_whiteboardView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_memoLabel;
    UIImageView *_avatar;
    UILabel *_nameLabel;
    UIImageView *_creditLevel;
    UIView *_spTags;
    UILabel *_distanceLabel;
    UILabel *_merchantLabel;
    UIImageView *_merchantIcon;
    UIImageView *_genderIcon;
}

@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) UIImageView *merchantIcon; // @synthesize merchantIcon=_merchantIcon;
@property(retain, nonatomic) UILabel *merchantLabel; // @synthesize merchantLabel=_merchantLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIView *spTags; // @synthesize spTags=_spTags;
@property(retain, nonatomic) UIImageView *creditLevel; // @synthesize creditLevel=_creditLevel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *whiteboardView; // @synthesize whiteboardView=_whiteboardView;
- (void).cxx_destruct;
- (id)merchantAttributedText:(id)arg1;
- (void)updateInfo:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
