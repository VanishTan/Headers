//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBRspGeneralListModel.h>

@class NSString;

@interface TBRspGetLocation : TBRspGeneralListModel
{
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_street;
}

@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void)dealloc;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

@end
