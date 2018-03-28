//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDRelatedQuestionStructModel : WDBaseModel
{
    NSNumber<Optional> *_banner_type;
    NSString<Optional> *_title;
    NSString<Optional> *_question_schema;
    NSString<Optional> *_reason_schema;
}

@property(retain, nonatomic) NSString<Optional> *reason_schema; // @synthesize reason_schema=_reason_schema;
@property(retain, nonatomic) NSString<Optional> *question_schema; // @synthesize question_schema=_question_schema;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *banner_type; // @synthesize banner_type=_banner_type;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
