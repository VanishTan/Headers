//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AlibcURLParam : NSObject
{
    NSString *_url;
    NSString *_degradeToH5Url;
    NSString *_linkkey;
    NSString *_backURL;
    NSMutableDictionary *_extraParam;
}

@property(retain, nonatomic) NSMutableDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(copy, nonatomic) NSString *backURL; // @synthesize backURL=_backURL;
@property(copy, nonatomic) NSString *linkkey; // @synthesize linkkey=_linkkey;
@property(copy, nonatomic) NSString *degradeToH5Url; // @synthesize degradeToH5Url=_degradeToH5Url;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

