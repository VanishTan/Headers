//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBCommonButtonViewDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UIImageView, UILabel, UIView, WBCommonButtonView, WBContentImageView;

@interface WBPageCardVoteView : WBPageCardViewBase <WBCommonButtonViewDelegate>
{
    UIImageView *_supportRedImageView;
    UIImageView *_supportBlueImageView;
    UILabel *_supportRedNumberLabel;
    UILabel *_supportBlueNumberLabel;
    double _redSupportProgress;
    UIView *_titlePanelView;
    UIImageView *_theArrowImageView;
    UIView *_titleLineView;
    UILabel *_voteTitleLabel;
    UIView *_supportContentPanelView;
    UILabel *_RedReasonLabel;
    UILabel *_BlueReasonLabel;
    WBContentImageView *_RedContentImageView;
    WBContentImageView *_BlueContentImageView;
    WBCommonButtonView *_redSupportButtonView;
    WBCommonButtonView *_blueSupportButtonView;
    UIColor *_redSupportColor;
    UIColor *_blueSupportColor;
    UIButton *_redSupportClearButton;
    UIButton *_blueSupportClearButton;
}

+ (double)heightOfDataObject:(id)arg1;
+ (double)imageWidth;
@property(retain, nonatomic) UIButton *blueSupportClearButton; // @synthesize blueSupportClearButton=_blueSupportClearButton;
@property(retain, nonatomic) UIButton *redSupportClearButton; // @synthesize redSupportClearButton=_redSupportClearButton;
@property(retain, nonatomic) UIColor *blueSupportColor; // @synthesize blueSupportColor=_blueSupportColor;
@property(retain, nonatomic) UIColor *redSupportColor; // @synthesize redSupportColor=_redSupportColor;
@property(retain, nonatomic) WBCommonButtonView *blueSupportButtonView; // @synthesize blueSupportButtonView=_blueSupportButtonView;
@property(retain, nonatomic) WBCommonButtonView *redSupportButtonView; // @synthesize redSupportButtonView=_redSupportButtonView;
@property(retain, nonatomic) WBContentImageView *BlueContentImageView; // @synthesize BlueContentImageView=_BlueContentImageView;
@property(retain, nonatomic) WBContentImageView *RedContentImageView; // @synthesize RedContentImageView=_RedContentImageView;
@property(retain, nonatomic) UILabel *BlueReasonLabel; // @synthesize BlueReasonLabel=_BlueReasonLabel;
@property(retain, nonatomic) UILabel *RedReasonLabel; // @synthesize RedReasonLabel=_RedReasonLabel;
@property(retain, nonatomic) UIView *supportContentPanelView; // @synthesize supportContentPanelView=_supportContentPanelView;
@property(retain, nonatomic) UILabel *voteTitleLabel; // @synthesize voteTitleLabel=_voteTitleLabel;
@property(retain, nonatomic) UIView *titleLineView; // @synthesize titleLineView=_titleLineView;
@property(retain, nonatomic) UIImageView *theArrowImageView; // @synthesize theArrowImageView=_theArrowImageView;
@property(retain, nonatomic) UIView *titlePanelView; // @synthesize titlePanelView=_titlePanelView;
@property(nonatomic) double redSupportProgress; // @synthesize redSupportProgress=_redSupportProgress;
@property(retain, nonatomic) UILabel *supportBlueNumberLabel; // @synthesize supportBlueNumberLabel=_supportBlueNumberLabel;
@property(retain, nonatomic) UILabel *supportRedNumberLabel; // @synthesize supportRedNumberLabel=_supportRedNumberLabel;
@property(retain, nonatomic) UIImageView *supportBlueImageView; // @synthesize supportBlueImageView=_supportBlueImageView;
@property(retain, nonatomic) UIImageView *supportRedImageView; // @synthesize supportRedImageView=_supportRedImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)commonButtonView:(id)arg1 handleCommonButtonPressedWithModel:(id)arg2;
- (void)resetSupportNumberLabelAndSupportProgress;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (void)supportBlueButtonClick:(id)arg1;
- (void)supportRedButtonClick:(id)arg1;
- (void)handleContentImageClickWithVoteItem:(id)arg1;
- (void)blueContentImageViewClick:(id)arg1;
- (void)redContentImageViewClick:(id)arg1;
- (void)configSupportContentViewWithCard:(id)arg1;
- (void)blueSupportClearButtonClick:(id)arg1;
- (void)redSupportClearButtonClick:(id)arg1;
- (void)resetSupportButtons;
- (id)supportButtonWithButtonModel:(id)arg1 titleColor:(id)arg2 normalBackgroundImageName:(id)arg3 hilightedImageName:(id)arg4;
- (id)supportReasonLabel;
- (id)supportNumberLabelWithTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

