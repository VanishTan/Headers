//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface TFHomeRecord : NSObject <NSCoding>
{
    _Bool _income;
    NSString *_billNo;
    NSString *_title;
    NSString *_subTitle;
    NSString *_amount;
    NSDictionary *_extInfo;
}

+ (id)recordWithTransferRecordVO:(id)arg1;
@property(nonatomic) _Bool income; // @synthesize income=_income;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)recordCellIdentifier;
- (Class)recordCellClass;

@end

