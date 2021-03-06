//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class KSIAPPurchaseValidater, NSString, NSTimer, SKProductsRequest;

@interface KSIAPPurchaseManager : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    _Bool _appleAccountOutOfChina;
    _Bool _purchaseProcessing;
    CDUnknownBlockType _obtainProductSuccess;
    CDUnknownBlockType _obtainProductError;
    CDUnknownBlockType _obtainReceiptSuccess;
    CDUnknownBlockType _obtainReceiptError;
    CDUnknownBlockType _obtainReceiptCancel;
    KSIAPPurchaseValidater *_purchaseValidater;
    NSTimer *_timeoutThreshold;
    SKProductsRequest *_request;
    NSString *_currency;
}

+ (id)sharedKSIAPPurchaseManager;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) SKProductsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSTimer *timeoutThreshold; // @synthesize timeoutThreshold=_timeoutThreshold;
@property(retain, nonatomic) KSIAPPurchaseValidater *purchaseValidater; // @synthesize purchaseValidater=_purchaseValidater;
@property(copy, nonatomic) CDUnknownBlockType obtainReceiptCancel; // @synthesize obtainReceiptCancel=_obtainReceiptCancel;
@property(copy, nonatomic) CDUnknownBlockType obtainReceiptError; // @synthesize obtainReceiptError=_obtainReceiptError;
@property(copy, nonatomic) CDUnknownBlockType obtainReceiptSuccess; // @synthesize obtainReceiptSuccess=_obtainReceiptSuccess;
@property(copy, nonatomic) CDUnknownBlockType obtainProductError; // @synthesize obtainProductError=_obtainProductError;
@property(copy, nonatomic) CDUnknownBlockType obtainProductSuccess; // @synthesize obtainProductSuccess=_obtainProductSuccess;
@property(nonatomic) _Bool purchaseProcessing; // @synthesize purchaseProcessing=_purchaseProcessing;
@property(nonatomic) _Bool appleAccountOutOfChina; // @synthesize appleAccountOutOfChina=_appleAccountOutOfChina;
- (void).cxx_destruct;
- (void)finishTransaction:(id)arg1;
- (void)appleAccountInchina:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)productWithId:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)receiptWithProduct:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onCancel:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 onTimeout:(CDUnknownBlockType)arg5;
- (void)restoreTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)verifyWithProduce:(id)arg1 source:(int)arg2 currency:(id)arg3 error:(id)arg4;
- (void)fetchReceiptWithProduce:(id)arg1 currency:(id)arg2 error:(id)arg3;
- (void)fetchProduce:(id)arg1 currency:(id)arg2 error:(id)arg3;
- (void)verifyPaymentWithProduct:(id)arg1 currency:(id)arg2 errorCode:(int)arg3;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (_Bool)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
- (void)validateIfNeed;
- (void)buyProduct:(id)arg1 afterConsume:(CDUnknownBlockType)arg2 onSuccess:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5 onTimeout:(CDUnknownBlockType)arg6;
- (void)onLaunch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

