//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSArray, NSNumber, NSString;

@interface KSLiveQuizWinnerResponse : KSUBaseResponse
{
    NSString *_title;
    NSNumber *_releaseTime;
    NSArray *_winners;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSArray *winners; // @synthesize winners=_winners;
@property(retain, nonatomic) NSNumber *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
