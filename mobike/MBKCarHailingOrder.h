//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKComparingProtocal-Protocol.h"

@class MBKCarHailingUser, MBKCarPoolProposal, MBKFeeInfoModel, MBKOrderTaxiInfo, MBKShouQiDriverModel, MBKTitleModel, NSArray, NSAttributedString, NSString;

@interface MBKCarHailingOrder : NSObject <MBKComparingProtocal>
{
    _Bool _finish;
    _Bool _joinable;
    long long _status;
    NSAttributedString *_feeDetailStr;
    NSAttributedString *_feeDetailAttributedString;
    long long _bizType;
    MBKCarHailingUser *_companionInfo;
    NSString *_orderId;
    MBKOrderTaxiInfo *_taxiInfo;
    double _orderCreateTime;
    double _currentTime;
    double _waitConfigTime;
    double _readyTime;
    NSString *_payId;
    NSString *_planStartPlace;
    NSString *_planEndPlace;
    double _planStartLat;
    double _planStartLng;
    double _planEndLat;
    double _planEndLng;
    NSString *_cancelUrl;
    long long _cancelType;
    NSString *_cancelReason;
    NSString *_cancelReasonUrl;
    NSString *_cancelCreateUrl;
    long long _payType;
    double _bookTime;
    NSString *_bookTimeFormatedString;
    long long _type;
    NSString *_costUrl;
    NSString *_customerServiceUrl;
    NSString *_customerPhone;
    MBKShouQiDriverModel *_driverInfo;
    MBKFeeInfoModel *_feeInfo;
    NSArray *_timeLinePoList;
    NSArray *_paymentPoList;
    MBKTitleModel *_title;
    NSArray *_feeInfoList;
    long long _refreshInterval;
    long long _driverInfoInterval;
    NSString *_comment;
    long long _payForPickUp;
    MBKCarPoolProposal *_carpoolProposal;
}

+ (id)ignoredComparingPropertyNames;
+ (id)jsonKeyToClassNameMap;
@property(retain, nonatomic) MBKCarPoolProposal *carpoolProposal; // @synthesize carpoolProposal=_carpoolProposal;
@property(nonatomic) long long payForPickUp; // @synthesize payForPickUp=_payForPickUp;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long driverInfoInterval; // @synthesize driverInfoInterval=_driverInfoInterval;
@property(nonatomic) long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSArray *feeInfoList; // @synthesize feeInfoList=_feeInfoList;
@property(retain, nonatomic) MBKTitleModel *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *paymentPoList; // @synthesize paymentPoList=_paymentPoList;
@property(retain, nonatomic) NSArray *timeLinePoList; // @synthesize timeLinePoList=_timeLinePoList;
@property(retain, nonatomic) MBKFeeInfoModel *feeInfo; // @synthesize feeInfo=_feeInfo;
@property(retain, nonatomic) MBKShouQiDriverModel *driverInfo; // @synthesize driverInfo=_driverInfo;
@property(copy, nonatomic) NSString *customerPhone; // @synthesize customerPhone=_customerPhone;
@property(copy, nonatomic) NSString *customerServiceUrl; // @synthesize customerServiceUrl=_customerServiceUrl;
@property(copy, nonatomic) NSString *costUrl; // @synthesize costUrl=_costUrl;
@property(nonatomic) _Bool joinable; // @synthesize joinable=_joinable;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *bookTimeFormatedString; // @synthesize bookTimeFormatedString=_bookTimeFormatedString;
@property(nonatomic) double bookTime; // @synthesize bookTime=_bookTime;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *cancelCreateUrl; // @synthesize cancelCreateUrl=_cancelCreateUrl;
@property(copy, nonatomic) NSString *cancelReasonUrl; // @synthesize cancelReasonUrl=_cancelReasonUrl;
@property(copy, nonatomic) NSString *cancelReason; // @synthesize cancelReason=_cancelReason;
@property(nonatomic) long long cancelType; // @synthesize cancelType=_cancelType;
@property(copy, nonatomic) NSString *cancelUrl; // @synthesize cancelUrl=_cancelUrl;
@property(nonatomic) double planEndLng; // @synthesize planEndLng=_planEndLng;
@property(nonatomic) double planEndLat; // @synthesize planEndLat=_planEndLat;
@property(nonatomic) double planStartLng; // @synthesize planStartLng=_planStartLng;
@property(nonatomic) double planStartLat; // @synthesize planStartLat=_planStartLat;
@property(copy, nonatomic) NSString *planEndPlace; // @synthesize planEndPlace=_planEndPlace;
@property(copy, nonatomic) NSString *planStartPlace; // @synthesize planStartPlace=_planStartPlace;
@property(copy, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(nonatomic) double readyTime; // @synthesize readyTime=_readyTime;
@property(nonatomic) double waitConfigTime; // @synthesize waitConfigTime=_waitConfigTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double orderCreateTime; // @synthesize orderCreateTime=_orderCreateTime;
@property(retain, nonatomic) MBKOrderTaxiInfo *taxiInfo; // @synthesize taxiInfo=_taxiInfo;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) MBKCarHailingUser *companionInfo; // @synthesize companionInfo=_companionInfo;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSAttributedString *feeDetailAttributedString; // @synthesize feeDetailAttributedString=_feeDetailAttributedString;
@property(copy, nonatomic) NSAttributedString *feeDetailStr; // @synthesize feeDetailStr=_feeDetailStr;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)maximumWaitDuration;
@property(readonly, nonatomic) _Bool isMonitoring;
@property(readonly, nonatomic) _Bool shouldBeMonitored;
@property(readonly, nonatomic) _Bool shouldShowPaySucceededToast;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

