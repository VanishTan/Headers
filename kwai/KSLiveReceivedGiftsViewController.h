//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSLiveReceivedGiftsCell, KSLiveUserViewModel, NSArray, NSString, UITableView, UIView;

@interface KSLiveReceivedGiftsViewController : KSBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    KSLiveUserViewModel *_viewModel;
    CDUnknownBlockType _didSelectGift;
    UITableView *_tableView;
    UIView *_bgView;
    KSLiveReceivedGiftsCell *_estimatedHeightCell;
    NSArray *_gifts;
}

@property(retain, nonatomic) NSArray *gifts; // @synthesize gifts=_gifts;
@property(retain, nonatomic) KSLiveReceivedGiftsCell *estimatedHeightCell; // @synthesize estimatedHeightCell=_estimatedHeightCell;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType didSelectGift; // @synthesize didSelectGift=_didSelectGift;
@property(retain, nonatomic) KSLiveUserViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_applyArrow;
- (void)p_applyBackground;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

