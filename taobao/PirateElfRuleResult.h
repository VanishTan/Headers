//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateRuleResult.h"

@class NSArray, NSDictionary, NSString;

@interface PirateElfRuleResult : PirateRuleResult
{
    long long _action;
    NSString *_rectStr;
    long long _click;
    long long _type;
    long long _windowSize;
    NSArray *_imagePaths;
    NSString *_resZip;
    NSString *_pageUrl;
    NSString *_clickPageUrl;
    NSString *_desc;
    NSDictionary *_bizInfo;
    NSArray *_res;
}

@property(retain, nonatomic) NSArray *res; // @synthesize res=_res;
@property(retain, nonatomic) NSDictionary *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *clickPageUrl; // @synthesize clickPageUrl=_clickPageUrl;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *resZip; // @synthesize resZip=_resZip;
@property(retain, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
@property(nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long click; // @synthesize click=_click;
@property(retain, nonatomic) NSString *rectStr; // @synthesize rectStr=_rectStr;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setResourceFromModel:(id)arg1;
- (void)setActionFromModel:(id)arg1;

@end

