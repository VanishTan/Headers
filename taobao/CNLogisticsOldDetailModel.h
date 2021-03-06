//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNActionEntranceView, CNLogisticOrderListItem, CNLogisticsDetailActionButtonModel, CNUpgradeSMSHandler, NSArray, NSMutableArray, NSNumber, NSString, TBRCommand, TBRSubscriber, TBTradeRecmdEngine, UITableView, UIViewController;

@interface CNLogisticsOldDetailModel : NSObject
{
    _Bool _showFullDetail;
    _Bool _touchedUpgradeButton;
    CDUnknownBlockType _whenAppearLoadDataBlock;
    CDUnknownBlockType _tableViewReloadBlock;
    NSString *_tradeId;
    NSArray *_cellModels;
    NSNumber *_useNewRecmdEngineValue;
    NSMutableArray *_viewModels;
    TBTradeRecmdEngine *_engine;
    CNLogisticOrderListItem *_item;
    CNUpgradeSMSHandler *_upgradeSMSHandler;
    UIViewController *_viewController;
    UITableView *_tableView;
    CNActionEntranceView *_entranceView;
    TBRSubscriber *_jkSubscriber;
    TBRCommand *_touchLeagueCommand;
    TBRCommand *_showFullCommand;
    TBRCommand *_closeAttentionOfficialCommand;
    TBRCommand *_closeLeagueCommand;
    TBRCommand *_pingjiaCommand;
    TBRCommand *_cancelSmsCommand;
    TBRCommand *_proxyOrderCommand;
    TBRCommand *_sendCodeCommand;
    TBRCommand *_takePackageCommand;
    CNLogisticsDetailActionButtonModel *_sendCodeModel;
}

@property(retain, nonatomic) CNLogisticsDetailActionButtonModel *sendCodeModel; // @synthesize sendCodeModel=_sendCodeModel;
@property(retain, nonatomic) TBRCommand *takePackageCommand; // @synthesize takePackageCommand=_takePackageCommand;
@property(retain, nonatomic) TBRCommand *sendCodeCommand; // @synthesize sendCodeCommand=_sendCodeCommand;
@property(retain, nonatomic) TBRCommand *proxyOrderCommand; // @synthesize proxyOrderCommand=_proxyOrderCommand;
@property(retain, nonatomic) TBRCommand *cancelSmsCommand; // @synthesize cancelSmsCommand=_cancelSmsCommand;
@property(retain, nonatomic) TBRCommand *pingjiaCommand; // @synthesize pingjiaCommand=_pingjiaCommand;
@property(retain, nonatomic) TBRCommand *closeLeagueCommand; // @synthesize closeLeagueCommand=_closeLeagueCommand;
@property(retain, nonatomic) TBRCommand *closeAttentionOfficialCommand; // @synthesize closeAttentionOfficialCommand=_closeAttentionOfficialCommand;
@property(retain, nonatomic) TBRCommand *showFullCommand; // @synthesize showFullCommand=_showFullCommand;
@property(retain, nonatomic) TBRCommand *touchLeagueCommand; // @synthesize touchLeagueCommand=_touchLeagueCommand;
@property(retain, nonatomic) TBRSubscriber *jkSubscriber; // @synthesize jkSubscriber=_jkSubscriber;
@property(retain, nonatomic) CNActionEntranceView *entranceView; // @synthesize entranceView=_entranceView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool touchedUpgradeButton; // @synthesize touchedUpgradeButton=_touchedUpgradeButton;
@property(retain, nonatomic) CNUpgradeSMSHandler *upgradeSMSHandler; // @synthesize upgradeSMSHandler=_upgradeSMSHandler;
@property(nonatomic) _Bool showFullDetail; // @synthesize showFullDetail=_showFullDetail;
@property(retain, nonatomic) CNLogisticOrderListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) TBTradeRecmdEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSMutableArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSNumber *useNewRecmdEngineValue; // @synthesize useNewRecmdEngineValue=_useNewRecmdEngineValue;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(copy, nonatomic) CDUnknownBlockType tableViewReloadBlock; // @synthesize tableViewReloadBlock=_tableViewReloadBlock;
@property(copy, nonatomic) CDUnknownBlockType whenAppearLoadDataBlock; // @synthesize whenAppearLoadDataBlock=_whenAppearLoadDataBlock;
- (void).cxx_destruct;
- (_Bool)haveTakePackage;
- (_Bool)haveCancelSms;
- (_Bool)havePingjia;
- (_Bool)haveProxyOrder;
- (_Bool)haveCupboardButton;
- (_Bool)haveDeliveryCode;
- (_Bool)haveMoreService;
- (_Bool)haveServiceCard;
- (void)queryTradeRecommend;
- (double)tableViewHeight;
- (void)creatGuoGuoModel;
- (void)creatTransitListModel;
- (void)creatExceptionModelOrAddressModel;
- (void)creatBannerModel;
- (void)attentionOfficialAccountsModel;
- (void)creatDetailInfoModel;
- (void)creatDistanceModel;
- (void)creatActionViewModel;
- (void)creatDeliveryCodeModel;
- (void)creatServiceModel;
- (void)creatTemperature;
- (void)creatActionEntranceView;
- (void)creatLineView;
- (void)creatCNLogisticsDetailGroupChatModel;
- (void)creatViewModelsByItem:(id)arg1;
- (id)getServiceProviderArgs;
- (void)initCommand;
- (void)setUpEngine;
- (double)engineHeightForRowAtIndexPath:(id)arg1;
- (id)engineCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (long long)engineNumberOfRowsInSection:(long long)arg1;
- (long long)engineNumberOfSections;
- (void)bindViewController:(id)arg1;
- (void)bindTableView:(id)arg1;
- (_Bool)useNewRecmdEngine;
- (id)init;

@end

