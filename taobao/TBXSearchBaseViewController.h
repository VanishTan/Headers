//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class TBXSearchContext, TBXSearchService, TBXSearchTabModel;
@protocol TBXSearchBaseViewControllerDelegate;

@interface TBXSearchBaseViewController : TBViewController
{
    int _layoutStyle;
    TBXSearchService *_itemSearchService;
    TBXSearchTabModel *_tabModel;
    id <TBXSearchBaseViewControllerDelegate> _delegate;
    TBXSearchContext *_context;
}

@property(retain, nonatomic) TBXSearchContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TBXSearchBaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) TBXSearchTabModel *tabModel; // @synthesize tabModel=_tabModel;
@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
- (void).cxx_destruct;
- (void)resetScrollCompensator;
- (void)resetSomeUI;
- (void)addCart;
- (void)closeAllFloatingLayer;
- (void)resetCollectionViewCellForInfo:(id)arg1;
- (double)getTopContainerHeight;
- (void)enter;
- (void)leave;
- (void)search;
- (void)loadFailed:(id)arg1;
- (void)reloadData;
- (void)refreshAgain;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

