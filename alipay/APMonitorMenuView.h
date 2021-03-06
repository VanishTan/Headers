//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APMonitorAssistView, NSString, UITableView, UIWindow;

@interface APMonitorMenuView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isTapEnabled;
    APMonitorAssistView *_assitTouch;
    UITableView *_mainTableView;
    UIView *_tableContainerView;
    UIView *_snaptshotView;
    UIWindow *_myWindow;
}

+ (id)shareMenu;
@property(retain, nonatomic) UIWindow *myWindow; // @synthesize myWindow=_myWindow;
@property(nonatomic) _Bool isTapEnabled; // @synthesize isTapEnabled=_isTapEnabled;
@property(retain, nonatomic) UIView *snaptshotView; // @synthesize snaptshotView=_snaptshotView;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) __weak APMonitorAssistView *assitTouch; // @synthesize assitTouch=_assitTouch;
- (void).cxx_destruct;
- (struct CGRect)smallerFrame:(struct CGRect)arg1 withSize:(double)arg2;
- (void)showWithDuration:(double)arg1 willAppear:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tapBackgroundEvent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)presentWithAssitTouch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

