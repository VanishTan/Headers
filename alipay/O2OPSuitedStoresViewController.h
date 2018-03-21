//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OPBaseListViewController.h"

#import "O2OPSchemeProtocol-Protocol.h"

@class APExceptionView, NSString, O2OPSuiteStoreListModel, O2OPSuitedStoresDataSource, O2OPSuitedStoresDelegate, UIActivityIndicatorView, UIView;

@interface O2OPSuitedStoresViewController : O2OPBaseListViewController <O2OPSchemeProtocol>
{
    _Bool _closeScanAPP;
    O2OPSuitedStoresDataSource *_suitStoreDataSource;
    O2OPSuitedStoresDelegate *_suitStoreDelegate;
    O2OPSuiteStoreListModel *_suitStoreModel;
    NSString *_shopId;
    NSString *_itemId;
    unsigned long long _sourceBizType;
    UIView *_tableHeaderView;
    UIActivityIndicatorView *_indicatorLoadingView;
    APExceptionView *_errorViewForNoShop;
    APExceptionView *_errorViewSystem;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool closeScanAPP; // @synthesize closeScanAPP=_closeScanAPP;
@property(retain, nonatomic) APExceptionView *errorViewSystem; // @synthesize errorViewSystem=_errorViewSystem;
@property(retain, nonatomic) APExceptionView *errorViewForNoShop; // @synthesize errorViewForNoShop=_errorViewForNoShop;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorLoadingView; // @synthesize indicatorLoadingView=_indicatorLoadingView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) unsigned long long sourceBizType; // @synthesize sourceBizType=_sourceBizType;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) O2OPSuiteStoreListModel *suitStoreModel; // @synthesize suitStoreModel=_suitStoreModel;
@property(retain, nonatomic) O2OPSuitedStoresDelegate *suitStoreDelegate; // @synthesize suitStoreDelegate=_suitStoreDelegate;
@property(retain, nonatomic) O2OPSuitedStoresDataSource *suitStoreDataSource; // @synthesize suitStoreDataSource=_suitStoreDataSource;
- (void).cxx_destruct;
- (id)pageSpm;
- (id)setTableViewHeaderTitle;
- (void)setViewControllerTitle;
- (void)setSourceTypeBySchema:(id)arg1;
- (void)stopIndicatorloading;
- (void)showIndicatorloading;
- (void)removeError;
- (void)queryLocation;
- (id)initWithScheme:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showNoResult:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)closeWithNotification;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
