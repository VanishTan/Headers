//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBArticleSlideData : WBModelObject
{
    NSString *_scheme;
    NSDictionary *_slideActionlog;
    NSString *_demension;
}

@property(copy, nonatomic) NSString *demension; // @synthesize demension=_demension;
@property(copy, nonatomic) NSDictionary *slideActionlog; // @synthesize slideActionlog=_slideActionlog;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

