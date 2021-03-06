//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, WDQuestionEntity;

@interface WDPostQuestionReviewStatusViewModel : NSObject
{
    NSDictionary *_apiParameter;
    NSDictionary *_gdExtJson;
    NSString *_qid;
    NSMutableArray *_inviteUserModels;
    WDQuestionEntity *_questionEntity;
    NSString *_tips;
    NSString *_tipsUrl;
}

+ (void)requestForQuestionStatusWithQid:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *tipsUrl; // @synthesize tipsUrl=_tipsUrl;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WDQuestionEntity *questionEntity; // @synthesize questionEntity=_questionEntity;
@property(retain, nonatomic) NSMutableArray *inviteUserModels; // @synthesize inviteUserModels=_inviteUserModels;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
- (void).cxx_destruct;
- (id)custActityItems;
- (id)editItem;
- (id)deleteItem;
- (id)reviewTips;
- (id)reviewDesc;
- (id)reviewTitle;
- (_Bool)isDeleteStatus;
- (_Bool)isReviewStatus;
- (void)editQuestionWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)deleteQuestionWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)requestQuestionStatusWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)initWithQid:(id)arg1 gdExtJson:(id)arg2 apiParameter:(id)arg3;

@end

