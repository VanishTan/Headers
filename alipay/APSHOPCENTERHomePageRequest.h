//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface APSHOPCENTERHomePageRequest : NSObject
{
    NSString *_systemType;
    NSString *_templateType;
    NSString *_templateParams;
    NSDictionary *_blockMd5s;
    NSString *_cityCode;
    NSString *_countryCode;
    double _longitude;
    double _latitude;
    NSString *_chInfo;
}

+ (Class)blockMd5sElementClass;
@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSDictionary *blockMd5s; // @synthesize blockMd5s=_blockMd5s;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
- (void).cxx_destruct;

@end
