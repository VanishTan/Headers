//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIColor, UIFont;

@interface KSRoundSegmentedControl : UIControl
{
    _Bool _defaultNoSelection;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIColor *_selectedBackgroundColor;
    UIColor *_normalBackgroundColor;
    UIColor *_borderColor;
    UIColor *_dividerColor;
    UIFont *_font;
    long long _selectedIndex;
    NSArray *_items;
    double _segmentWidth;
    NSMutableArray *_segments;
    NSMutableArray *_dividers;
}

@property(retain, nonatomic) NSMutableArray *dividers; // @synthesize dividers=_dividers;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool defaultNoSelection; // @synthesize defaultNoSelection=_defaultNoSelection;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)segmentViewAtIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 notify:(_Bool)arg2;
- (void)didTap:(id)arg1;
- (void)rebuildBorder;
- (id)createDivider;
- (void)rebuildSegments;
- (id)createSegmentLabel;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 segmentWidth:(double)arg2;

@end
