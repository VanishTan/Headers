//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, WDAbstractStructModel, WDProfitLabelStructModel, WDShareStructModel, WDUserStructModel;
@protocol Optional;

@interface WDAnswerStructModel : WDBaseModel
{
    NSString<Optional> *_ansid;
    NSString<Optional> *_content;
    NSNumber<Optional> *_create_time;
    WDUserStructModel<Optional> *_user;
    WDAbstractStructModel<Optional> *_content_abstract;
    NSNumber<Optional> *_digg_count;
    NSNumber<Optional> *_is_digg;
    NSString<Optional> *_ans_url;
    WDShareStructModel<Optional> *_share_data;
    NSNumber<Optional> *_bury_count;
    NSNumber<Optional> *_is_buryed;
    NSNumber<Optional> *_is_show_bury;
    NSString<Optional> *_schema;
    NSNumber<Optional> *_comment_count;
    NSNumber<Optional> *_brow_count;
    NSNumber<Optional> *_forward_count;
    NSString<Optional> *_comment_schema;
    NSNumber<Optional> *_modify_time;
    WDProfitLabelStructModel<Optional> *_profit_label;
    NSNumber<Optional> *_is_light_answer;
    NSNumber<Optional> *_answer_type;
}

@property(retain, nonatomic) NSNumber<Optional> *answer_type; // @synthesize answer_type=_answer_type;
@property(retain, nonatomic) NSNumber<Optional> *is_light_answer; // @synthesize is_light_answer=_is_light_answer;
@property(retain, nonatomic) WDProfitLabelStructModel<Optional> *profit_label; // @synthesize profit_label=_profit_label;
@property(retain, nonatomic) NSNumber<Optional> *modify_time; // @synthesize modify_time=_modify_time;
@property(retain, nonatomic) NSString<Optional> *comment_schema; // @synthesize comment_schema=_comment_schema;
@property(retain, nonatomic) NSNumber<Optional> *forward_count; // @synthesize forward_count=_forward_count;
@property(retain, nonatomic) NSNumber<Optional> *brow_count; // @synthesize brow_count=_brow_count;
@property(retain, nonatomic) NSNumber<Optional> *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber<Optional> *is_show_bury; // @synthesize is_show_bury=_is_show_bury;
@property(retain, nonatomic) NSNumber<Optional> *is_buryed; // @synthesize is_buryed=_is_buryed;
@property(retain, nonatomic) NSNumber<Optional> *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) WDShareStructModel<Optional> *share_data; // @synthesize share_data=_share_data;
@property(retain, nonatomic) NSString<Optional> *ans_url; // @synthesize ans_url=_ans_url;
@property(retain, nonatomic) NSNumber<Optional> *is_digg; // @synthesize is_digg=_is_digg;
@property(retain, nonatomic) NSNumber<Optional> *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) WDAbstractStructModel<Optional> *content_abstract; // @synthesize content_abstract=_content_abstract;
@property(retain, nonatomic) WDUserStructModel<Optional> *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber<Optional> *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *ansid; // @synthesize ansid=_ansid;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

