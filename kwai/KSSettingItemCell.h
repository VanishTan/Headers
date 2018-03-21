//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAAnimationlessLayer, KSPointView, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UISwitch;
@protocol KSSettingItemCellDelegate;

@interface KSSettingItemCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_leftLabel;
    KSPointView *_badgeView;
    UILabel *_rightLabel;
    UIImageView *_rightArrow;
    UIButton *_rightButton;
    UISwitch *_rightSwitch;
    UILabel *_centerLabel;
    id <KSSettingItemCellDelegate> _delegate;
    long long _settingItemType;
    UIActivityIndicatorView *_refreshIndicator;
    CAAnimationlessLayer *_bottomLine;
    NSLayoutConstraint *_leftLabelLeadingConstraint;
    NSLayoutConstraint *_rightLabelTailingConstraint;
    NSLayoutConstraint *_leftLabelRightConstraint;
}

+ (double)cellHeightWithItem:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *leftLabelRightConstraint; // @synthesize leftLabelRightConstraint=_leftLabelRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightLabelTailingConstraint; // @synthesize rightLabelTailingConstraint=_rightLabelTailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftLabelLeadingConstraint; // @synthesize leftLabelLeadingConstraint=_leftLabelLeadingConstraint;
@property(retain, nonatomic) CAAnimationlessLayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIActivityIndicatorView *refreshIndicator; // @synthesize refreshIndicator=_refreshIndicator;
@property(nonatomic) long long settingItemType; // @synthesize settingItemType=_settingItemType;
@property(nonatomic) __weak id <KSSettingItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UISwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) KSPointView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)_enableLeftLabelRightConstraintWithAlignView:(id)arg1;
- (void)_disableLeftLabelRightConstraint;
- (void)hideRightArrow:(_Bool)arg1;
- (void)updateUIWithItem:(id)arg1;
- (void)didTapRightButton:(id)arg1;
- (void)didChangeSwitcher:(id)arg1;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
