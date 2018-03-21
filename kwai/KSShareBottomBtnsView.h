//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIPageControl, UIScrollView;

@interface KSShareBottomBtnsView : UIView <UIScrollViewDelegate>
{
    long long _rowNumberOfCells;
    long long _numberOfCellsPerPage;
    NSArray *_shareButtons;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *shareButtons; // @synthesize shareButtons=_shareButtons;
- (void).cxx_destruct;
- (id)shareActivityConfigsWithUnavailaActivities:(id)arg1;
- (void)deselectAll;
@property(readonly, nonatomic) NSArray *OAuthParamsList;
@property(readonly, nonatomic) NSString *selectedActivityType;
- (void)unselectedBtn:(id)arg1;
- (void)selectedBtn:(id)arg1;
- (id)createShareButtonWithConfig:(id)arg1 activity:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 unavailableActivities:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
