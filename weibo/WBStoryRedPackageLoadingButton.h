//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, WBSwapLoadingView;
@protocol WBStoryRedPackageLoadingButtonDelegate;

@interface WBStoryRedPackageLoadingButton : UIControl
{
    id <WBStoryRedPackageLoadingButtonDelegate> _delegate;
    UIImageView *_backgroundImaView;
    UILabel *_titleLabel;
    WBSwapLoadingView *_loadingView;
    unsigned long long _tapState;
}

@property(nonatomic) unsigned long long tapState; // @synthesize tapState=_tapState;
@property(retain, nonatomic) WBSwapLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImaView; // @synthesize backgroundImaView=_backgroundImaView;
@property(nonatomic) __weak id <WBStoryRedPackageLoadingButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapped;
- (void)updateWithState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

