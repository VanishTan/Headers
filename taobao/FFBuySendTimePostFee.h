//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FFBuySendTimePostFee : NSObject
{
    _Bool _compensate;
    NSString *_postFee;
    NSString *_originalPostFee;
}

@property(nonatomic) _Bool compensate; // @synthesize compensate=_compensate;
@property(copy, nonatomic) NSString *originalPostFee; // @synthesize originalPostFee=_originalPostFee;
@property(copy, nonatomic) NSString *postFee; // @synthesize postFee=_postFee;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

