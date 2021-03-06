//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "TNodeMessageHandler-Protocol.h"

@class CAGradientLayer, CAShapeLayer, NSString, TGradient, UIColor;

@interface JSImage : UIImageView <TNodeMessageHandler>
{
    TGradient *_gradient;
    CAGradientLayer *_gradientLayer;
    UIColor *_foregroundColor;
    NSString *_src;
    double _borderTLRadius;
    double _borderTRRadius;
    double _borderBLRadius;
    double _borderBRRadius;
    CAShapeLayer *_shapeLayer;
}

+ (void)attrsTNodeMapper:(id)arg1;
+ (struct UIView *)makeTNodeComponent:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) double borderBRRadius; // @synthesize borderBRRadius=_borderBRRadius;
@property(nonatomic) double borderBLRadius; // @synthesize borderBLRadius=_borderBLRadius;
@property(nonatomic) double borderTRRadius; // @synthesize borderTRRadius=_borderTRRadius;
@property(nonatomic) double borderTLRadius; // @synthesize borderTLRadius=_borderTLRadius;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) TGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (_Bool)onHandlerTNodeMessage:(TNodeMsg_ca2753ae *)arg1;
- (void)loadImage:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

