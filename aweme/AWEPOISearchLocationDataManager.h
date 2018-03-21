//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class CLLocation, NSMutableArray, NSNumber, NSString;

@interface AWEPOISearchLocationDataManager : AWEListDataController
{
    CLLocation *_location;
    NSString *_keywords;
    long long _searchType;
    NSMutableArray *_placeholderArrayForSchoolType;
    NSMutableArray *_placeholderArrayForNoShowLocationSection;
    NSNumber *_page;
}

@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *placeholderArrayForNoShowLocationSection; // @synthesize placeholderArrayForNoShowLocationSection=_placeholderArrayForNoShowLocationSection;
@property(retain, nonatomic) NSMutableArray *placeholderArrayForSchoolType; // @synthesize placeholderArrayForSchoolType=_placeholderArrayForSchoolType;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)requestParameter;
- (void)p_fetchLocationArrayWithParameter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_invalidParameterError;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
