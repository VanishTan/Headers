//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWELiveHotSlideGuideView : UIView
{
    UIImageView *_upImageView;
    UILabel *_hotLiveLabel;
    UILabel *_slideLabel;
    UIImageView *_downImageView;
}

@property(retain, nonatomic) UIImageView *downImageView; // @synthesize downImageView=_downImageView;
@property(retain, nonatomic) UILabel *slideLabel; // @synthesize slideLabel=_slideLabel;
@property(retain, nonatomic) UILabel *hotLiveLabel; // @synthesize hotLiveLabel=_hotLiveLabel;
@property(retain, nonatomic) UIImageView *upImageView; // @synthesize upImageView=_upImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_onGuideViewTouched:(id)arg1;
- (void)_onGuideViewSwiped:(id)arg1;
- (void)_setupUI;
- (void)dismissSlideGuideView;
- (void)showSlideGuideOnView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
