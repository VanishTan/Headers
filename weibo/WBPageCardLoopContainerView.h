//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WBPageCardBubbleViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIPageControl, UIScrollView;
@protocol WBPageCardLoopContainerViewDelegate;

@interface WBPageCardLoopContainerView : UIView <UIScrollViewDelegate, WBPageCardBubbleViewDelegate>
{
    UIView *mainContentView;
    UIScrollView *scrollView;
    UIButton *contentBgImageButton;
    NSMutableDictionary *userInfo;
    _Bool isBlockCacheViewCreate;
    _Bool singleCard;
    double _time;
    _Bool _needLogTheCode;
    NSArray *dataSource;
    id <WBPageCardLoopContainerViewDelegate> _delegate;
    NSString *_localLogCode;
    UIPageControl *_pageController;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIPageControl *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) NSString *localLogCode; // @synthesize localLogCode=_localLogCode;
@property(nonatomic) _Bool needLogTheCode; // @synthesize needLogTheCode=_needLogTheCode;
@property(nonatomic) __weak id <WBPageCardLoopContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)kApplicationWillEnterForegroundMethod:(id)arg1;
- (void)kApplicationWillEnterBackgroundMethod:(id)arg1;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)bubbleView:(id)arg1 mainView:(id)arg2 hasClick:(_Bool)arg3;
- (id)getRealCardFromDataSoure:(id)arg1;
- (void)doSetDataSource:(id)arg1;
- (id)findEqualCard:(id)arg1 FromDataSource:(id)arg2;
- (_Bool)isEqualDataSource1:(id)arg1 DataSource2:(id)arg2;
- (void)scrollToNextPageCard;
- (void)scrollMoveToForward:(id)arg1;
- (void)refreshSubView:(id)arg1 ByIndex:(int)arg2;
- (void)insertSubviewToScrollView:(id)arg1 ByIndex:(int)arg2;
- (void)scrollMoveToNext:(id)arg1;
- (id)getCurrentBubbleViewForScrollView:(id)arg1 PageCard:(id)arg2;
- (unsigned long long)indexOfObject:(id)arg1 InDataSource:(id)arg2;
- (id)getTheFowardPageCardForPageCard:(id)arg1;
- (unsigned long long)getFowardIndex:(unsigned long long)arg1;
- (unsigned long long)getNextIndex:(unsigned long long)arg1;
- (id)getTheNextPageCardForPageCard:(id)arg1;
- (unsigned long long)getCurrentPageIndex;
- (id)getCurrentPageCard;
- (void)resetScrollViewFrame:(id)arg1;
- (void)resetScrollViewSubView:(id)arg1;
- (void)setCards:(id)arg1 ToScrollView:(id)arg2 ByIndex:(int)arg3;
- (void)initTheSubViewForScorllView;
- (void)cleanTheScrollViewSubViews:(id)arg1;
- (void)resetPageControl;
- (void)doSetDataSource:(id)arg1 SetLoopTime:(double)arg2;
- (void)logTheLocalCodeWith3rdMonitor:(_Bool)arg1;
- (void)timerSelector;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setLoopTime:(double)arg1;
- (void)initScrollElements;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

