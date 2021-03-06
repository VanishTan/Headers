//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UIScrollView;

@interface KSLoginThirdPartyServiceBar : UIView
{
    _Bool _collapsed;
    CDUnknownBlockType _itemPressed;
    CDUnknownBlockType _morePressed;
    NSMutableArray *_items;
    UIScrollView *_scrollView;
    NSArray *_itemViews;
    UIButton *_qqLoginButton;
    UIButton *_wechatLoginButton;
    UIButton *_moreButton;
    NSArray *_btnsToPutBack;
}

+ (id)barWithConfigItems:(id)arg1 collapsed:(_Bool)arg2;
@property(retain, nonatomic) NSArray *btnsToPutBack; // @synthesize btnsToPutBack=_btnsToPutBack;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *wechatLoginButton; // @synthesize wechatLoginButton=_wechatLoginButton;
@property(retain, nonatomic) UIButton *qqLoginButton; // @synthesize qqLoginButton=_qqLoginButton;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType morePressed; // @synthesize morePressed=_morePressed;
@property(copy, nonatomic) CDUnknownBlockType itemPressed; // @synthesize itemPressed=_itemPressed;
- (void).cxx_destruct;
- (_Bool)_canCollapse;
- (struct CGRect)_itemButtonFrameAtIndex:(short)arg1;
- (double)_horiMargin;
- (double)_itemMargin;
- (void)_layoutBtnsWhenCollapsed;
- (void)_toggleButtonIfNeeded:(id)arg1;
- (void)_drawButton:(id)arg1 withConfigItem:(id)arg2;
- (void)_setupMoreButton;
- (void)_setupThirdPartyServiceBtns;
- (void)_setupSubViews;
- (void)toggleEmailButton;

@end

