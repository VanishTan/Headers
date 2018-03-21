//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface AWENewPublishTableCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_accessLable;
    UIImageView *_accessImageView;
    UIView *_remindView;
}

@property(retain, nonatomic) UIView *remindView; // @synthesize remindView=_remindView;
@property(retain, nonatomic) UIImageView *accessImageView; // @synthesize accessImageView=_accessImageView;
@property(retain, nonatomic) UILabel *accessLable; // @synthesize accessLable=_accessLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)removeRemindView;
- (void)addRemindView;
- (void)addGradientBackGround;
- (void)addSubviewsForContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
