//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TBXSearchFilterLocationModel : TBJSONModel
{
    NSArray *_regionList;
    NSArray *_cityList;
    NSArray *_provinceList;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSArray *provinceList; // @synthesize provinceList=_provinceList;
@property(retain, nonatomic) NSArray *cityList; // @synthesize cityList=_cityList;
@property(retain, nonatomic) NSArray *regionList; // @synthesize regionList=_regionList;
- (void).cxx_destruct;
- (void)modelInit;

@end

