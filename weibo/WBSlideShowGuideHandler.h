//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMediaGuideHandler.h"

@interface WBSlideShowGuideHandler : WBMediaGuideHandler
{
}

- (void)_slideShow:(unsigned long long)arg1 afterDate:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_selectDate;
- (void)checkGuide:(CDUnknownBlockType)arg1;
- (_Bool)enable;
- (void)handleSlideShowAssets:(id)arg1;
- (double)guideViewHeight;
- (Class)guideViewClass;
- (void)setResponseObject:(id)arg1;
- (void)closeGuideBecause:(long long)arg1;
- (id)userInfo;
- (id)init;

@end

