//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface _KSQuizWinnerCell : UITableViewCell
{
    UIView *_containerView;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UILabel *_kwaiCoinLabel;
}

@property(retain, nonatomic) UILabel *kwaiCoinLabel; // @synthesize kwaiCoinLabel=_kwaiCoinLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)drawWithAvatarURL:(id)arg1 userName:(id)arg2 prizeInfo:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

