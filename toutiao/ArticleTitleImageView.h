//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSTitleBarView.h"

@class NSString;

@interface ArticleTitleImageView : SSTitleBarView
{
    int _titleUItype;
    NSString *_bottomLineColorName;
}

@property(retain, nonatomic) NSString *bottomLineColorName; // @synthesize bottomLineColorName=_bottomLineColorName;
@property(nonatomic) int titleUItype; // @synthesize titleUItype=_titleUItype;
- (void).cxx_destruct;
- (void)relayout;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
