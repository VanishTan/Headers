//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STPBankAccountParams.h"

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDictionary, NSString;

@interface STPBankAccount : STPBankAccountParams <STPAPIResponseDecodable>
{
    NSString *routingNumber;
    NSString *country;
    NSString *currency;
    NSString *accountHolderName;
    long long accountHolderType;
    NSString *_bankAccountId;
    NSString *_bankName;
    NSString *_fingerprint;
    long long _status;
    NSString *_last4;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)requiredFields;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSString *last4; // @synthesize last4=_last4;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *bankAccountId; // @synthesize bankAccountId=_bankAccountId;
@property(nonatomic) long long accountHolderType; // @synthesize accountHolderType;
@property(copy, nonatomic) NSString *accountHolderName; // @synthesize accountHolderName;
@property(copy, nonatomic) NSString *currency; // @synthesize currency;
@property(copy, nonatomic) NSString *country; // @synthesize country;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool disabled;
@property(readonly, nonatomic) _Bool validated;
- (_Bool)isEqualToBankAccount:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setAccountNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

