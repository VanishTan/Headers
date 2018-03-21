//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "ALPCellDidClick-Protocol.h"
#import "ALPTransferBtnClicked-Protocol.h"
#import "APFamilyFundTerminateResultControllerDelegate-Protocol.h"
#import "APFundFamilyUnbindAuthViewDelegate-Protocol.h"
#import "BEEMaskViewDelegate-Protocol.h"

@class ALPFundButtonView, ALPFundCommonCell, ALPProfitViewCell, NSString;

@interface APFamilyFundManagerController : BEEFunctionTableController <APFamilyFundTerminateResultControllerDelegate, ALPTransferBtnClicked, ALPCellDidClick, BEEMaskViewDelegate, APFundFamilyUnbindAuthViewDelegate>
{
    _Bool _needRefresh;
    _Bool _removeSubcard;
    ALPFundButtonView *_buttonView;
    ALPProfitViewCell *_profitCell;
    ALPFundCommonCell *_commonCell;
}

@property(retain, nonatomic) ALPFundCommonCell *commonCell; // @synthesize commonCell=_commonCell;
@property(retain, nonatomic) ALPProfitViewCell *profitCell; // @synthesize profitCell=_profitCell;
@property(retain, nonatomic) ALPFundButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic) _Bool removeSubcard; // @synthesize removeSubcard=_removeSubcard;
- (void).cxx_destruct;
- (void)didClickCell:(id)arg1 view:(id)arg2;
- (void)buttonView:(id)arg1 didClickTransferBtn:(long long)arg2;
- (void)familyFundTerminateResultController:(id)arg1 didClickGotoTransfer:(_Bool)arg2;
- (void)fundFamilyApplyIndependentAccView:(id)arg1 gotoTransferApp:(_Bool)arg2;
- (void)fundFamilyApplyIndependentAccView:(id)arg1 didClickUnbindAuth:(id)arg2;
- (void)fundFamilyApplyIndependentAccView:(id)arg1 didClickGotoTransfer:(id)arg2;
- (void)didClickProfitDetail;
- (void)familyFundInfoClick;
- (void)showFamilyFundGuideView:(id)arg1;
- (void)setAutoShowFamilyFundGuideViewEnable:(_Bool)arg1;
- (_Bool)enableAutoShowFamilyFundGuideView;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (void)buildNavigationRightButtons;
- (id)r;
- (id)tableView;
- (void)loadContent;
- (void)loadSuccess:(id)arg1;
- (id)busnessName;
- (id)emptyText;
- (id)cacheKey;
- (id)loadOnline;
- (void)pulldownDidLoad;
- (void)loadOnForce;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
