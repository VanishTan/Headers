//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSQuizBaseViewController.h"

@class UIButton, UIImageView, UILabel;

@interface KSLiveQuizFailViewController : KSQuizBaseViewController
{
    CDUnknownBlockType _viewWinnerListBlock;
    CDUnknownBlockType _shareBlock;
    UIImageView *_avatarImageView;
    UILabel *_descLabel;
    UIButton *_shareButton;
    UIButton *_continueViewLiveButton;
}

@property(retain, nonatomic) UIButton *continueViewLiveButton; // @synthesize continueViewLiveButton=_continueViewLiveButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) CDUnknownBlockType viewWinnerListBlock; // @synthesize viewWinnerListBlock=_viewWinnerListBlock;
- (void).cxx_destruct;
- (void)addContinueClickLog;
- (id)ksuShowMetaData;
- (void)_setupContinueViewLiveButton;
- (void)_setupShareButton;
- (void)_setupDescLabel;
- (void)_setupAvatarImageView;
- (void)bindWithCorrectAnswerCount:(unsigned long long)arg1 avatarURL:(id)arg2;
- (void)viewDidLoad;

@end

