//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKCarbonModel : NSObject
{
    int _carbonWithdrawType;
    NSString *_bikeId;
    NSString *_carbon;
    NSString *_date;
    NSString *_distance;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_money;
    NSString *_people;
    NSString *_withdraw;
}

@property(nonatomic) int carbonWithdrawType; // @synthesize carbonWithdrawType=_carbonWithdrawType;
@property(retain, nonatomic) NSString *withdraw; // @synthesize withdraw=_withdraw;
@property(retain, nonatomic) NSString *people; // @synthesize people=_people;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *carbon; // @synthesize carbon=_carbon;
@property(retain, nonatomic) NSString *bikeId; // @synthesize bikeId=_bikeId;
- (void).cxx_destruct;
- (id)initWithDictModel:(id)arg1;

@end

