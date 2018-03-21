//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath, UIButton;

@interface TTFSegmentControl : UIView
{
    CDUnknownBlockType _selectChanged;
    long long _selectedIndex;
    UIButton *_leftButton;
    UIButton *_middleButton;
    UIButton *_rightButton;
    UIBezierPath *_leftPath;
    UIBezierPath *_rightPath;
    CAShapeLayer *_leftBorderLayer;
    CAShapeLayer *_rightBorderLayer;
    CAShapeLayer *_middleBorderLayer;
}

@property(retain, nonatomic) CAShapeLayer *middleBorderLayer; // @synthesize middleBorderLayer=_middleBorderLayer;
@property(retain, nonatomic) CAShapeLayer *rightBorderLayer; // @synthesize rightBorderLayer=_rightBorderLayer;
@property(retain, nonatomic) CAShapeLayer *leftBorderLayer; // @synthesize leftBorderLayer=_leftBorderLayer;
@property(retain, nonatomic) UIBezierPath *rightPath; // @synthesize rightPath=_rightPath;
@property(retain, nonatomic) UIBezierPath *leftPath; // @synthesize leftPath=_leftPath;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectChanged; // @synthesize selectChanged=_selectChanged;
- (void).cxx_destruct;
- (void)unselectButton:(id)arg1;
- (void)selectButton:(id)arg1;
- (void)buttonTouched:(id)arg1;
- (void)initUIComponentsWithLeft:(id)arg1 middle:(id)arg2 right:(id)arg3;
- (id)initWithLeft:(id)arg1 middle:(id)arg2 right:(id)arg3;
- (id)initWithLeft:(id)arg1 right:(id)arg2;

@end
