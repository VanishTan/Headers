//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, TTImageView, WDTabStructModel;

@interface WDCategoryHeaderTabView : SSThemedView
{
    SSThemedButton *_wrapperView;
    TTImageView *_iconView;
    SSThemedLabel *_nameLabel;
    SSThemedView *_tipCircleView;
    SSThemedView *_verticalLineView;
    WDTabStructModel *_model;
}

@property(retain, nonatomic) WDTabStructModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SSThemedView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) SSThemedView *tipCircleView; // @synthesize tipCircleView=_tipCircleView;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SSThemedButton *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (void)addTrack;
- (void)refreshUI;
- (void)refreshModel:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
