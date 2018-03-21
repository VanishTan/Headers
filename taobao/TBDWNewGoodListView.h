//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DWContext, NSArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIVisualEffectView;
@protocol TBDWNewGoodListViewDelegate;

@interface TBDWNewGoodListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType dismissBlock;
    _Bool isGoodListHide;
    _Bool _orientationPortrait;
    _Bool _isDirectGaussion;
    NSArray *_goodList;
    id <TBDWNewGoodListViewDelegate> _delegate;
    DWContext *_context;
    UITableView *_tableView;
    UIButton *_backroundView;
    UIImageView *_gaussView;
    UIVisualEffectView *_effectView;
    UIView *_headView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool isDirectGaussion; // @synthesize isDirectGaussion=_isDirectGaussion;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIImageView *gaussView; // @synthesize gaussView=_gaussView;
@property(nonatomic) _Bool orientationPortrait; // @synthesize orientationPortrait=_orientationPortrait;
@property(retain, nonatomic) UIButton *backroundView; // @synthesize backroundView=_backroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TBDWNewGoodListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *goodList; // @synthesize goodList=_goodList;
- (void).cxx_destruct;
- (void)backroundClicked:(id)arg1;
- (void)hideGoodListView;
- (void)showGoodListView;
- (void)layoutSubviews;
- (void)loadGoodListDataWithItems:(id)arg1 directGaussion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadGoodListDataWithContext:(id)arg1 items:(id)arg2 coverImage:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)configEmptyCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
