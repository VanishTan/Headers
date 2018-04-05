//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol STPSource;

@interface STPCustomer : NSObject
{
    NSString *_stripeID;
    id <STPSource> _defaultSource;
    NSArray *_sources;
}

+ (id)customerWithStripeID:(id)arg1 defaultSource:(id)arg2 sources:(id)arg3;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) id <STPSource> defaultSource; // @synthesize defaultSource=_defaultSource;
@property(copy, nonatomic) NSString *stripeID; // @synthesize stripeID=_stripeID;
- (void).cxx_destruct;

@end

