//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBVideoStoryboardControllerDelegate-Protocol.h"

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface WBVideoStoryboardFrameView : UIView <WBVideoStoryboardControllerDelegate>
{
    _Bool _aspectFill;
    double _seekTime;
    UIImageView *_imageView;
    CAGradientLayer *_gradientLayer;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool aspectFill; // @synthesize aspectFill=_aspectFill;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
- (void).cxx_destruct;
- (void)storyboardController:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setStoryboardFrame:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

