//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTAlphaThemedButton, WDListViewModel;

@interface WDListQuestionHeaderFollowInviteView : SSThemedView
{
    WDListViewModel *_viewModel;
    TTAlphaThemedButton *_concernButton;
    TTAlphaThemedButton *_inviteBtn;
    TTAlphaThemedButton *_shareProfitButton;
    SSThemedView *_topLine;
    SSThemedView *_verticalLine;
    SSThemedView *_rightVerticalLine;
}

@property(retain, nonatomic) SSThemedView *rightVerticalLine; // @synthesize rightVerticalLine=_rightVerticalLine;
@property(retain, nonatomic) SSThemedView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) SSThemedView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) TTAlphaThemedButton *shareProfitButton; // @synthesize shareProfitButton=_shareProfitButton;
@property(retain, nonatomic) TTAlphaThemedButton *inviteBtn; // @synthesize inviteBtn=_inviteBtn;
@property(retain, nonatomic) TTAlphaThemedButton *concernButton; // @synthesize concernButton=_concernButton;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)buttonColorKey;
- (double)newShareProfitLeftInset;
- (double)oldShareProfitLeftInset;
- (void)followAction;
- (void)shareProfitButtonClicked:(id)arg1;
- (void)followQuestion:(id)arg1;
- (void)tapToMoreInviteUsers;
- (void)updateFrameNewWithoutShareRewardView;
- (void)updateFrameNewWithShareRewardView;
- (void)updateFrameNew;
- (void)updateFrameOldWithoutShareRewardView;
- (void)updateFrameOldWithShareRewardView;
- (void)updateFrameOld;
- (void)updateFrame;
- (void)updateInviteBtnContent;
- (void)updateConcernBtnContentNew;
- (void)updateConcernBtnContentOld;
- (void)updateShareProfitContent;
- (void)updateContent;
- (void)fontChanged;
- (void)reload;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

@end

