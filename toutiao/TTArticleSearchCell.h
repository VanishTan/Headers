//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedView, TTArticleSearchItemView;

@interface TTArticleSearchCell : SSThemedTableViewCell
{
    TTArticleSearchItemView *_leftView;
    TTArticleSearchItemView *_rightView;
    SSThemedView *_middleLine;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain, nonatomic) TTArticleSearchItemView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) TTArticleSearchItemView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)setupConstaints;
- (void)setup;
- (void)configureWithItemViewModel:(id)arg1 atSubIndex:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

