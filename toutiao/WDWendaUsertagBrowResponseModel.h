//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, WDConcernTagStructModel><Optional;

@interface WDWendaUsertagBrowResponseModel : TTResponseModel
{
    NSNumber<Optional> *_err_no;
    NSString<Optional> *_err_tips;
    NSNumber<Optional> *_start_offset;
    NSNumber<Optional> *_end_offset;
    NSArray<WDConcernTagStructModel><Optional> *_tag_list;
}

@property(copy, nonatomic) NSArray<WDConcernTagStructModel><Optional> *tag_list; // @synthesize tag_list=_tag_list;
@property(retain, nonatomic) NSNumber<Optional> *end_offset; // @synthesize end_offset=_end_offset;
@property(retain, nonatomic) NSNumber<Optional> *start_offset; // @synthesize start_offset=_start_offset;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber<Optional> *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
