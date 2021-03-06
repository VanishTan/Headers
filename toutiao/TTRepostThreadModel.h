//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTRepostThreadModel : NSObject
{
    _Bool _repostToComment;
    NSString *_cover_url;
    NSString *_content;
    NSString *_content_rich_span;
    NSString *_mentionUsers;
    NSString *_mentionConcerns;
    unsigned long long _repost_type;
    NSString *_group_id;
    NSString *_fw_id;
    long long _fw_id_type;
    NSString *_opt_id;
    long long _opt_id_type;
    NSString *_fw_user_id;
    NSString *_repostSchema;
    NSString *_repostTitle;
    unsigned long long _repost_operation_type;
}

@property(nonatomic) _Bool repostToComment; // @synthesize repostToComment=_repostToComment;
@property(nonatomic) unsigned long long repost_operation_type; // @synthesize repost_operation_type=_repost_operation_type;
@property(copy, nonatomic) NSString *repostTitle; // @synthesize repostTitle=_repostTitle;
@property(copy, nonatomic) NSString *repostSchema; // @synthesize repostSchema=_repostSchema;
@property(copy, nonatomic) NSString *fw_user_id; // @synthesize fw_user_id=_fw_user_id;
@property(nonatomic) long long opt_id_type; // @synthesize opt_id_type=_opt_id_type;
@property(copy, nonatomic) NSString *opt_id; // @synthesize opt_id=_opt_id;
@property(nonatomic) long long fw_id_type; // @synthesize fw_id_type=_fw_id_type;
@property(copy, nonatomic) NSString *fw_id; // @synthesize fw_id=_fw_id;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
@property(nonatomic) unsigned long long repost_type; // @synthesize repost_type=_repost_type;
@property(copy, nonatomic) NSString *mentionConcerns; // @synthesize mentionConcerns=_mentionConcerns;
@property(copy, nonatomic) NSString *mentionUsers; // @synthesize mentionUsers=_mentionUsers;
@property(copy, nonatomic) NSString *content_rich_span; // @synthesize content_rich_span=_content_rich_span;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
- (void).cxx_destruct;
- (id)initWithRepostParam:(id)arg1;

@end

