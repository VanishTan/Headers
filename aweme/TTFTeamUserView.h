//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFUserStruct, UIImageView, UILabel;

@interface TTFTeamUserView : UIView
{
    TTFUserStruct *_userInfo;
    UIImageView *_leaderImageView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *leaderImageView; // @synthesize leaderImageView=_leaderImageView;
@property(retain, nonatomic) TTFUserStruct *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
