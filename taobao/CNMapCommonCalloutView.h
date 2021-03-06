//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNMapCalloutView.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface CNMapCommonCalloutView : CNMapCalloutView
{
    UIView *_view;
    UIView *_shadowView;
    UIView *_cornerView;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_textLabel;
    NSLayoutConstraint *_textLabelLeft;
    NSLayoutConstraint *_textLabelRight;
    NSString *_openUrl;
}

@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(nonatomic) __weak NSLayoutConstraint *textLabelRight; // @synthesize textLabelRight=_textLabelRight;
@property(nonatomic) __weak NSLayoutConstraint *textLabelLeft; // @synthesize textLabelLeft=_textLabelLeft;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIView *cornerView; // @synthesize cornerView=_cornerView;
@property(nonatomic) __weak UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)touchButton:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setUIStyle;
- (void)loadFromNib;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

