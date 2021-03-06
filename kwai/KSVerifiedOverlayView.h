//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KSVerifiedOverlayView : UIView
{
    _Bool _showingInProgress;
    UIView *_tipsContainer;
    UILabel *_tipsLabel;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *tipsContainer; // @synthesize tipsContainer=_tipsContainer;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)showInView:(id)arg1 vIcon:(id)arg2 withMessage:(id)arg3;
- (void)commonInit;

@end

