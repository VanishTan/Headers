//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIButton, UIImageView, UILabel, WBPhotoTagModel;
@protocol WBImageTagViewDelegate;

@interface WBImageTagView : UIView
{
    struct CGPoint _beginPoint;
    long long _animationRepeatCount;
    _Bool _reverseAlign;
    _Bool _deletable;
    _Bool _forbiddenDrag;
    UIButton *_deleteButton;
    UIView *_circleView;
    WBPhotoTagModel *_tagModel;
    id <WBImageTagViewDelegate> _delegate;
    UILabel *_textLabel;
    CAShapeLayer *_circleShape;
    UIImageView *_backgroundView;
    UIView *_whiteDotImageView;
    struct CGPoint _scaledPos;
    struct CGPoint _modelScaledPos;
    struct CGRect _constrainRect;
}

+ (double)defaultTextLabelFont;
@property(retain, nonatomic) UIView *whiteDotImageView; // @synthesize whiteDotImageView=_whiteDotImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CAShapeLayer *circleShape; // @synthesize circleShape=_circleShape;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGPoint modelScaledPos; // @synthesize modelScaledPos=_modelScaledPos;
@property(nonatomic) struct CGPoint scaledPos; // @synthesize scaledPos=_scaledPos;
@property(nonatomic) _Bool forbiddenDrag; // @synthesize forbiddenDrag=_forbiddenDrag;
@property(nonatomic) _Bool deletable; // @synthesize deletable=_deletable;
@property(nonatomic) _Bool reverseAlign; // @synthesize reverseAlign=_reverseAlign;
@property(nonatomic) __weak id <WBImageTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect constrainRect; // @synthesize constrainRect=_constrainRect;
@property(retain, nonatomic) WBPhotoTagModel *tagModel; // @synthesize tagModel=_tagModel;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (void)showCircleShapeShadowWithAlpha:(double)arg1;
- (void)setIsProductTag:(_Bool)arg1;
- (void)setTextLabelFont:(id)arg1;
@property(readonly, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (double)maxWidthSpace;
- (struct CGPoint)scaledTagPostionInView:(id)arg1;
- (struct CGPoint)scaledTagPostion;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startFrameAnimation;
- (void)startAnimationAndRepeat:(unsigned long long)arg1;
- (void)updateLayoutWithNewAlign:(_Bool)arg1 newModel:(_Bool)arg2;
- (void)addToView:(id)arg1 pos:(struct CGPoint)arg2;
- (struct CGPoint)constrainTagViewCenter:(struct CGPoint)arg1;
- (void)setCenterWithCirclePostion:(struct CGPoint)arg1;
- (struct CGPoint)convertScale:(struct CGPoint)arg1 fromView:(id)arg2 toFrame:(struct CGRect)arg3;
- (struct CGPoint)convertScale:(struct CGPoint)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)updatePostionWithRefrenceSize:(struct CGSize)arg1 postionscale:(struct CGPoint)arg2;
- (void)updatePostionWithRefrenceSize:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)panGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTagModel:(id)arg1;
- (void)dealloc;

@end

