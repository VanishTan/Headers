//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SocialPlugin-Protocol.h"

@class NSArray, NSDictionary, SOOption, SOOptionCount;

@protocol SOOptionCardPluginDelegate <SocialPlugin>

@optional
- (_Bool)updateCardWithSOOption:(SOOption *)arg1 action:(int)arg2 optionCount:(SOOptionCount *)arg3 params:(NSDictionary *)arg4;
- (NSArray *)findOptionCountListWithCardOptionCountList:(NSArray *)arg1;
@end
