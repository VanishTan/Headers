//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UILabel, UIView;

@interface GrowingBarChartCell : UICollectionViewCell
{
    double _leftMargin;
    double _rightMargin;
    double _innerMargin;
    double _valueTextMargin;
    double _rowHeight;
    double _zeroBarWidth;
    NSString *_title;
    double _titleWidth;
    NSString *_valueText;
    double _valueWidth;
    long long _value;
    long long _maxValue;
    UIColor *_barColor;
    UIColor *_maxBarColor;
    UIColor *_minBarColor;
    UILabel *_titleLabel;
    UIView *_barView;
    UIView *_barBgView;
    UILabel *_valueLabel;
    UIView *_tapGestView;
    UIView *_detailView;
    CDUnknownBlockType _onClick;
}

@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *tapGestView; // @synthesize tapGestView=_tapGestView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIView *barBgView; // @synthesize barBgView=_barBgView;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *minBarColor; // @synthesize minBarColor=_minBarColor;
@property(retain, nonatomic) UIColor *maxBarColor; // @synthesize maxBarColor=_maxBarColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) long long maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) double valueWidth; // @synthesize valueWidth=_valueWidth;
@property(copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double zeroBarWidth; // @synthesize zeroBarWidth=_zeroBarWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) double valueTextMargin; // @synthesize valueTextMargin=_valueTextMargin;
@property(nonatomic) double innerMargin; // @synthesize innerMargin=_innerMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)tapGest;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

