//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface GrowingBarChartRow : NSObject
{
    NSString *_title;
    long long _value;
    NSString *_valueText;
    UIColor *_color;
    double _valueWidth;
    double _textWidth;
    CDUnknownBlockType _onClick;
}

@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) double valueWidth; // @synthesize valueWidth=_valueWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

