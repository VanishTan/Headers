//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBackFooter.h"

@class NSString, UIImageView, UILabel;

@interface AWELoadMoreFooter : MJRefreshBackFooter
{
    UILabel *_label;
    UIImageView *_loadingLogo;
    NSString *_refreshingText;
    double _extraHeight;
}

@property(nonatomic) double extraHeight; // @synthesize extraHeight=_extraHeight;
@property(retain, nonatomic) NSString *refreshingText; // @synthesize refreshingText=_refreshingText;
@property(retain, nonatomic) UIImageView *loadingLogo; // @synthesize loadingLogo=_loadingLogo;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)setLoadingLogoColor:(id)arg1;
- (void)setLoadMoreLabelTextColor:(id)arg1;
- (void)_refreshLayout;
- (void)refreshUILayout;
- (void)_stopLoadingAnim;
- (void)_startLoadingAnim;
- (_Bool)scrollViewContentHeightBiggerThanFrameHeight;
- (_Bool)scrollViewDidScrollUp;
- (_Bool)scrollViewDidReachBottom;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)prepare;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

