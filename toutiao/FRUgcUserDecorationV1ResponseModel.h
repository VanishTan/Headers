//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray, NSNumber;
@protocol FRUserDecorationStructModel><Optional;

@interface FRUgcUserDecorationV1ResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSArray<FRUserDecorationStructModel><Optional> *_user_decoration_list;
}

@property(retain, nonatomic) NSArray<FRUserDecorationStructModel><Optional> *user_decoration_list; // @synthesize user_decoration_list=_user_decoration_list;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

