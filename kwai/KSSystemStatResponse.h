//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface KSSystemStatResponse : KSUBaseResponse
{
    _Bool _hidden_nearby_tab;
    NSNumber *_connection_timeout;
    NSNumber *_cdn_fail_threshold;
    NSNumber *_mov_timeout;
    NSNumber *_pic_timeout;
    NSNumber *_cdn_count_threshold;
    NSDictionary *_bind_phone_tips_model;
    NSNumber *_show_tab;
    NSNumber *_phonecode_interval;
    NSNumber *_anonym_shot_enabled;
    NSNumber *_cp_disabled;
    NSNumber *_us_cmd_switch;
    NSNumber *_tag_hash_type;
    NSNumber *_reviewing;
    NSString *_units;
    NSString *_qrDomain;
    NSNumber *_ver;
    NSString *_iphone_ver_tips;
    NSNumber *_upload_log_rs;
    NSNumber *_send_sdata;
    NSNumber *_owner_id;
    NSString *_owner_name;
    NSString *_owner_head;
    NSString *_owner_sex;
    NSString *_user_profile_bg_url;
    NSString *_user_name_modify_tip;
    NSString *_bind_phone_tips;
    NSDictionary *_idc_list;
    NSDictionary *_ssl_list;
    NSString *_serverIdcOnly;
    NSArray *_speedTestTypeAndOrder;
    NSNumber *_goodIdcThresholdMs;
}

@property(retain, nonatomic) NSNumber *goodIdcThresholdMs; // @synthesize goodIdcThresholdMs=_goodIdcThresholdMs;
@property(retain, nonatomic) NSArray *speedTestTypeAndOrder; // @synthesize speedTestTypeAndOrder=_speedTestTypeAndOrder;
@property(retain, nonatomic) NSString *serverIdcOnly; // @synthesize serverIdcOnly=_serverIdcOnly;
@property(retain, nonatomic) NSDictionary *ssl_list; // @synthesize ssl_list=_ssl_list;
@property(retain, nonatomic) NSDictionary *idc_list; // @synthesize idc_list=_idc_list;
@property(retain, nonatomic) NSString *bind_phone_tips; // @synthesize bind_phone_tips=_bind_phone_tips;
@property(retain, nonatomic) NSString *user_name_modify_tip; // @synthesize user_name_modify_tip=_user_name_modify_tip;
@property(retain, nonatomic) NSString *user_profile_bg_url; // @synthesize user_profile_bg_url=_user_profile_bg_url;
@property(retain, nonatomic) NSString *owner_sex; // @synthesize owner_sex=_owner_sex;
@property(retain, nonatomic) NSString *owner_head; // @synthesize owner_head=_owner_head;
@property(retain, nonatomic) NSString *owner_name; // @synthesize owner_name=_owner_name;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *send_sdata; // @synthesize send_sdata=_send_sdata;
@property(retain, nonatomic) NSNumber *upload_log_rs; // @synthesize upload_log_rs=_upload_log_rs;
@property(retain, nonatomic) NSString *iphone_ver_tips; // @synthesize iphone_ver_tips=_iphone_ver_tips;
@property(retain, nonatomic) NSNumber *ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *qrDomain; // @synthesize qrDomain=_qrDomain;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(nonatomic) _Bool hidden_nearby_tab; // @synthesize hidden_nearby_tab=_hidden_nearby_tab;
@property(retain, nonatomic) NSNumber *reviewing; // @synthesize reviewing=_reviewing;
@property(retain, nonatomic) NSNumber *tag_hash_type; // @synthesize tag_hash_type=_tag_hash_type;
@property(retain, nonatomic) NSNumber *us_cmd_switch; // @synthesize us_cmd_switch=_us_cmd_switch;
@property(retain, nonatomic) NSNumber *cp_disabled; // @synthesize cp_disabled=_cp_disabled;
@property(retain, nonatomic) NSNumber *anonym_shot_enabled; // @synthesize anonym_shot_enabled=_anonym_shot_enabled;
@property(retain, nonatomic) NSNumber *phonecode_interval; // @synthesize phonecode_interval=_phonecode_interval;
@property(retain, nonatomic) NSNumber *show_tab; // @synthesize show_tab=_show_tab;
@property(retain, nonatomic) NSDictionary *bind_phone_tips_model; // @synthesize bind_phone_tips_model=_bind_phone_tips_model;
@property(retain, nonatomic) NSNumber *cdn_count_threshold; // @synthesize cdn_count_threshold=_cdn_count_threshold;
@property(retain, nonatomic) NSNumber *pic_timeout; // @synthesize pic_timeout=_pic_timeout;
@property(retain, nonatomic) NSNumber *mov_timeout; // @synthesize mov_timeout=_mov_timeout;
@property(retain, nonatomic) NSNumber *cdn_fail_threshold; // @synthesize cdn_fail_threshold=_cdn_fail_threshold;
@property(retain, nonatomic) NSNumber *connection_timeout; // @synthesize connection_timeout=_connection_timeout;
- (void).cxx_destruct;

@end
