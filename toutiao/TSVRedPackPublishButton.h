//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedButton.h"

@class CAKeyframeAnimation, CALayer, NSString, SSThemedImageView, SSThemedLabel;

@interface TSVRedPackPublishButton : SSThemedButton
{
    unsigned long long _style;
    SSThemedImageView *_normalPublishImageView;
    SSThemedLabel *_shotLabel;
    CALayer *_rotationLayer;
    CALayer *_imageLayer;
    CAKeyframeAnimation *_imageAnimation;
    CAKeyframeAnimation *_rotationAnimation;
    NSString *_labelText;
    unsigned long long _position;
}

+ (id)publishRedpackImageName;
+ (id)publishImageNameForPosition:(unsigned long long)arg1;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) CAKeyframeAnimation *rotationAnimation; // @synthesize rotationAnimation=_rotationAnimation;
@property(retain, nonatomic) CAKeyframeAnimation *imageAnimation; // @synthesize imageAnimation=_imageAnimation;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CALayer *rotationLayer; // @synthesize rotationLayer=_rotationLayer;
@property(retain, nonatomic) SSThemedLabel *shotLabel; // @synthesize shotLabel=_shotLabel;
@property(retain, nonatomic) SSThemedImageView *normalPublishImageView; // @synthesize normalPublishImageView=_normalPublishImageView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)animationImagesArray;
- (void)handleThemeChanged;
- (void)layoutSubviews;
- (void)setup;
- (double)labelWidth;
- (double)buttonWidth;
- (void)startAnimation;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 labelText:(id)arg2 position:(unsigned long long)arg3;
- (void)dealloc;

@end
