//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKPrePayBaseOrder.h"

@class NSString;

@interface MBKPrePayMvpOrder : MBKPrePayBaseOrder
{
    NSString *_userId;
    long long _totalfee;
    long long _index;
    long long _cardId;
    NSString *_productType;
}

@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long totalfee; // @synthesize totalfee=_totalfee;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

