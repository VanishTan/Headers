//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STPPostalCodeValidator : NSObject
{
}

+ (id)countriesWithNoPostalCodes;
+ (long long)postalCodeTypeForCountryCode:(id)arg1;
+ (_Bool)stringIsValidPostalCode:(id)arg1 countryCode:(id)arg2;
+ (_Bool)stringIsValidPostalCode:(id)arg1 type:(long long)arg2;

@end
