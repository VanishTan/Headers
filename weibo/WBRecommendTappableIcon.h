//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBRecommendIcon.h"

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol WBRecommendIconDelegate;

@interface WBRecommendTappableIcon : WBRecommendIcon
{
    UIImageView *_selectedMaskView;
    UITapGestureRecognizer *_tapGesture;
    UILabel *_label;
    id <WBRecommendIconDelegate> _delegate;
    double _labelFont;
    double _gapBetweenImageAndLabel;
}

@property(nonatomic) double gapBetweenImageAndLabel; // @synthesize gapBetweenImageAndLabel=_gapBetweenImageAndLabel;
@property(nonatomic) double labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) __weak id <WBRecommendIconDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapped:(id)arg1;
- (void)setLabelFont:(double)arg1 andGapBetweenImageAndLabel:(double)arg2;
- (void)resetViewConstraintWithSizeClass:(long long)arg1;
@property(nonatomic) _Bool selected;
@property(retain, nonatomic) NSString *title;
- (void)setUser:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

