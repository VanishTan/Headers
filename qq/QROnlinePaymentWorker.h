//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QROnlinePaymentRequest;
@protocol QROnlinePaymentWorkerDelegate;

@interface QROnlinePaymentWorker : NSObject
{
    id <QROnlinePaymentWorkerDelegate> _delegate;
    QROnlinePaymentRequest *_request;
}

@property(retain, nonatomic) QROnlinePaymentRequest *request; // @synthesize request=_request;
@property(nonatomic) id <QROnlinePaymentWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)composeBuyChapters:(id)arg1;
- (void)doPayment;

@end
