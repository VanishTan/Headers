//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBFollowSDKModule, TBLiveSVAuthorAccountInfo, TBLiveTweSVVC, UIButton, UIImageView, UILabel;

@interface TBLiveSVBroadCastInfoView : UIView
{
    UIImageView *_avatarImageView;
    UIImageView *_liveImageView;
    UILabel *_nickLabel;
    UIButton *_followButton;
    long long _textWidth;
    TBFollowSDKModule *_followSDKModule;
    TBLiveSVAuthorAccountInfo *_broadCastModel;
    TBLiveTweSVVC *_superVC;
}

@property(nonatomic) __weak TBLiveTweSVVC *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) TBLiveSVAuthorAccountInfo *broadCastModel; // @synthesize broadCastModel=_broadCastModel;
@property(retain, nonatomic) TBFollowSDKModule *followSDKModule; // @synthesize followSDKModule=_followSDKModule;
@property(nonatomic) long long textWidth; // @synthesize textWidth=_textWidth;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)clickAccountHead;
- (void)updateBroadCastModel:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2;

@end
