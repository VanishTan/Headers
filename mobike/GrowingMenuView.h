//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GrowingMenuButton, NSArray, NSMutableArray, NSString, UIColor, UILabel, UIScrollView;

@interface GrowingMenuView : UIView
{
    _Bool _active;
    _Bool _alwaysBounceVertical;
    _Bool _navigationBarHidden;
    _Bool _buildContentFinish;
    UIView *_shadowMaskView;
    unsigned long long _showType;
    NSString *_title;
    UIColor *_navigationBarColor;
    UIColor *_titleColor;
    UIView *_view;
    GrowingMenuButton *_rightButton;
    GrowingMenuButton *_leftButton;
    NSArray *_menuButtons;
    double _preferredContentHeight;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UIView *_navigationView;
    UIView *_leftButtonView;
    UIView *_rightButtonView;
    double _menuButtonsHeight;
    NSMutableArray *_menuButtonViews;
    struct CGSize _maxSize;
}

@property(nonatomic) _Bool buildContentFinish; // @synthesize buildContentFinish=_buildContentFinish;
@property(retain, nonatomic) NSMutableArray *menuButtonViews; // @synthesize menuButtonViews=_menuButtonViews;
@property(nonatomic) double menuButtonsHeight; // @synthesize menuButtonsHeight=_menuButtonsHeight;
@property(retain, nonatomic) UIView *rightButtonView; // @synthesize rightButtonView=_rightButtonView;
@property(retain, nonatomic) UIView *leftButtonView; // @synthesize leftButtonView=_leftButtonView;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double preferredContentHeight; // @synthesize preferredContentHeight=_preferredContentHeight;
@property(retain, nonatomic) NSArray *menuButtons; // @synthesize menuButtons=_menuButtons;
@property(retain, nonatomic) GrowingMenuButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) GrowingMenuButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool alwaysBounceVertical; // @synthesize alwaysBounceVertical=_alwaysBounceVertical;
@property(readonly, nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) UIView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)updateButton:(id)arg1;
- (void)updateTitleButton:(_Bool)arg1;
- (void)hideWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)keyboardDidHide;
- (void)keyboardDidShow:(id)arg1;
- (void)showWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (_Bool)isViewLoaded;
- (void)viewDidLoad;
- (void)loadView;
- (void)layoutSubviews;
- (void)resizeAndLayout;
- (void)setNeedResizeAndLayout;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end

