//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WBCardListSportCheckInDaysView : UIView
{
    long long _days;
    UILabel *_lab1;
    UILabel *_lab3;
    UILabel *_lab2_1;
    UILabel *_lab2_2;
}

@property(retain, nonatomic) UILabel *lab2_2; // @synthesize lab2_2=_lab2_2;
@property(retain, nonatomic) UILabel *lab2_1; // @synthesize lab2_1=_lab2_1;
@property(retain, nonatomic) UILabel *lab3; // @synthesize lab3=_lab3;
@property(retain, nonatomic) UILabel *lab1; // @synthesize lab1=_lab1;
@property(nonatomic) long long days; // @synthesize days=_days;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDays:(long long)arg1 animated:(_Bool)arg2;
- (id)hiddenLab2;
- (id)showingLab2;
- (void)layoutSubviews;
- (id)createLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

