//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer;

@interface AWEStoryCircleProgressView : UIView
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)updateProgress:(double)arg1;
- (id)layoutPath;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

