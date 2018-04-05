//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKRequestDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SKReceiptRefreshRequest;
@protocol RMStoreContentDownloader, RMStoreReceiptVerifier, RMStoreTransactionPersistor;

@interface RMStore : NSObject <SKRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableDictionary *_addPaymentParameters;
    NSMutableDictionary *_products;
    NSMutableSet *_productsRequestDelegates;
    NSMutableArray *_restoredTransactions;
    long long _pendingRestoredTransactionsCount;
    _Bool _restoredCompletedTransactionsFinished;
    SKReceiptRefreshRequest *_refreshReceiptRequest;
    CDUnknownBlockType _refreshReceiptFailureBlock;
    CDUnknownBlockType _refreshReceiptSuccessBlock;
    CDUnknownBlockType _restoreTransactionsFailureBlock;
    CDUnknownBlockType _restoreTransactionsSuccessBlock;
    id <RMStoreContentDownloader> _contentDownloader;
    id <RMStoreReceiptVerifier> _receiptVerifier;
    id <RMStoreTransactionPersistor> _transactionPersistor;
}

+ (_Bool)hasPendingDownloadsInTransaction:(id)arg1;
+ (id)localizedPriceOfProduct:(id)arg1;
+ (id)receiptURL;
+ (_Bool)canMakePayments;
+ (id)defaultStore;
@property(nonatomic) __weak id <RMStoreTransactionPersistor> transactionPersistor; // @synthesize transactionPersistor=_transactionPersistor;
@property(nonatomic) __weak id <RMStoreReceiptVerifier> receiptVerifier; // @synthesize receiptVerifier=_receiptVerifier;
@property(nonatomic) __weak id <RMStoreContentDownloader> contentDownloader; // @synthesize contentDownloader=_contentDownloader;
- (void).cxx_destruct;
- (void)removeProductsRequestDelegate:(id)arg1;
- (void)postNotificationWithName:(id)arg1 transaction:(id)arg2 userInfoExtras:(id)arg3;
- (void)postNotificationWithName:(id)arg1 download:(id)arg2 userInfoExtras:(id)arg3;
- (void)addProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)popAddPaymentParametersForIdentifier:(id)arg1;
- (void)notifyRestoreTransactionFinishedIfApplicableAfterTransaction:(id)arg1;
- (void)finishTransaction:(id)arg1 queue:(id)arg2;
- (void)didDownloadSelfHostedContentForTransaction:(id)arg1 queue:(id)arg2;
- (void)didVerifyTransaction:(id)arg1 queue:(id)arg2;
- (void)didDeferTransaction:(id)arg1;
- (void)didRestoreTransaction:(id)arg1 queue:(id)arg2;
- (void)didFailTransaction:(id)arg1 queue:(id)arg2 error:(id)arg3;
- (void)didPurchaseTransaction:(id)arg1 queue:(id)arg2;
- (void)didUpdateDownload:(id)arg1 queue:(id)arg2;
- (void)didPauseDownload:(id)arg1 queue:(id)arg2;
- (void)didFinishDownload:(id)arg1 queue:(id)arg2;
- (void)didFailDownload:(id)arg1 queue:(id)arg2;
- (void)didCancelDownload:(id)arg1 queue:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)addStoreObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3;
- (void)removeStoreObserver:(id)arg1;
- (void)addStoreObserver:(id)arg1;
- (id)productForIdentifier:(id)arg1;
- (void)refreshReceiptOnSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)refreshReceipt;
- (void)restoreTransactionsOfUser:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)restoreTransactionsOnSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)restoreTransactions;
- (void)requestProducts:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestProducts:(id)arg1;
- (void)addPayment:(id)arg1 user:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addPayment:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addPayment:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

