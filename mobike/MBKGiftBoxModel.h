//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKGiftBoxModel : NSObject
{
    NSString *_activityDescription;
    NSString *_logo;
    NSString *_name;
    NSString *_id;
    NSString *_couponName;
    NSString *_couponCode;
    NSString *_prizeLink;
    NSString *_shareLink;
    unsigned long long _type;
    double _amount;
}

@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(copy, nonatomic) NSString *prizeLink; // @synthesize prizeLink=_prizeLink;
@property(copy, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(copy, nonatomic) NSString *couponName; // @synthesize couponName=_couponName;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

