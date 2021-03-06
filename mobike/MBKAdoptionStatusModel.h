//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MBKAdoptionStatusObjectModel, NSString;

@interface MBKAdoptionStatusModel : NSObject <NSCoding>
{
    int _adoptionShowType;
    int _adoptionStatus;
    NSString *_bikeId;
    NSString *_code;
    NSString *_h5Url;
    NSString *_isinvitation;
    NSString *_lastTimes;
    NSString *_message;
    NSString *_orderId;
    NSString *_prize;
    NSString *_redPacketBike;
    MBKAdoptionStatusObjectModel *_object;
}

@property(nonatomic) int adoptionStatus; // @synthesize adoptionStatus=_adoptionStatus;
@property(nonatomic) int adoptionShowType; // @synthesize adoptionShowType=_adoptionShowType;
@property(retain, nonatomic) MBKAdoptionStatusObjectModel *object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *redPacketBike; // @synthesize redPacketBike=_redPacketBike;
@property(retain, nonatomic) NSString *prize; // @synthesize prize=_prize;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *lastTimes; // @synthesize lastTimes=_lastTimes;
@property(retain, nonatomic) NSString *isinvitation; // @synthesize isinvitation=_isinvitation;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *bikeId; // @synthesize bikeId=_bikeId;
- (void).cxx_destruct;
- (void)updateAdoptionModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)getAdoptionStatus:(id)arg1;
- (int)getAdoptionShowType:(id)arg1;
- (id)initWithDictModel:(id)arg1;

@end

