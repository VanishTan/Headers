//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFBaseViewController.h"

#import "TTFToplistViewModelDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TTFSegmentControl, TTFTopListMeCell, TTFTopListViewModel, TTFantasyButton, TTVideoEngine, UITableView;

@interface TTFTopListViewController : TTFBaseViewController <UITableViewDelegate, UIGestureRecognizerDelegate, TTFToplistViewModelDelegate>
{
    long long _activity_id;
    TTFantasyButton *_backButton;
    TTFantasyButton *_shareButton;
    TTFSegmentControl *_switcher;
    UITableView *_tableview;
    TTFTopListMeCell *_meIntereactCell;
    TTVideoEngine *_player;
    TTFTopListViewModel *_viewModel;
}

@property(retain, nonatomic) TTFTopListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTVideoEngine *player; // @synthesize player=_player;
@property(retain, nonatomic) TTFTopListMeCell *meIntereactCell; // @synthesize meIntereactCell=_meIntereactCell;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) TTFSegmentControl *switcher; // @synthesize switcher=_switcher;
@property(retain, nonatomic) TTFantasyButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTFantasyButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long activity_id; // @synthesize activity_id=_activity_id;
- (void).cxx_destruct;
- (void)updateTableview;
- (void)updateMeCellWith:(id)arg1 avatar:(id)arg2 leftTitle:(id)arg3 buttonTitle:(id)arg4 buttonCallback:(CDUnknownBlockType)arg5;
- (double)i18n_tableViewHeight:(id)arg1;
- (double)tableViewHeight:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)popViewControllerAnimated:(id)arg1;
- (void)shareButtonTouched;
- (void)segmentControlValueChanged:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)uiComponentsInit;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

