//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSArray, SSThemedView, UIImage, UIImageView;
@protocol SSSegmentControlDelegate;

@interface SSSegmentControl : SSViewBase
{
    _Bool _hasAnimation;
    int _type;
    id <SSSegmentControlDelegate> _delegate;
    NSArray *_segments;
    NSArray *_widths;
    NSArray *_gapWidths;
    UIImage *_slideImage;
    unsigned long long _numberOfSegments;
    unsigned long long _selectedIndex;
    UIImageView *_slideImageView;
    UIImageView *_bottomShadow;
    SSThemedView *_bottomIndicator;
    SSThemedView *_bottomLineView;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasAnimation; // @synthesize hasAnimation=_hasAnimation;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) SSThemedView *bottomIndicator; // @synthesize bottomIndicator=_bottomIndicator;
@property(retain, nonatomic) UIImageView *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) UIImageView *slideImageView; // @synthesize slideImageView=_slideImageView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(retain, nonatomic) UIImage *slideImage; // @synthesize slideImage=_slideImage;
@property(readonly, nonatomic) NSArray *gapWidths; // @synthesize gapWidths=_gapWidths;
@property(readonly, nonatomic) NSArray *widths; // @synthesize widths=_widths;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) __weak id <SSSegmentControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)defaultWidthForSSSegment;
- (void)segmentClicked:(id)arg1;
- (void)slideSelectedImage;
- (void)selectAtIndex:(unsigned long long)arg1;
- (void)slideAnimationWithOriginIndex:(long long)arg1 andSelectedIndex:(long long)arg2;
- (void)selectAtIndex:(unsigned long long)arg1 withAction:(_Bool)arg2;
- (void)defatultThreeSegments:(id)arg1 withWidth:(double)arg2;
- (void)defaultTwoSegments:(id)arg1;
- (void)setSegments:(id)arg1 widths:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_bottomLineViewFrame;
- (struct CGRect)_bottomIndicatorFrameWithWidth:(double)arg1 subviewsCenterX:(double)arg2;
- (void)_layoutSegmentsWithGap;
- (void)_layoutSegmentsNOGap;
- (void)setSegments:(id)arg1 widths:(id)arg2 andGapWidths:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end
