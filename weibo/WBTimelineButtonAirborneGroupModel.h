//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonButtonModel.h"

@class NSNumber, NSString;

@interface WBTimelineButtonAirborneGroupModel : WBCommonButtonModel
{
    NSNumber *_isMemeberMark;
}

+ (id)buttonIdWithButtonDict:(id)arg1;
+ (id)modelTypeStrs;
@property(retain, nonatomic) NSNumber *isMemeberMark; // @synthesize isMemeberMark=_isMemeberMark;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSString *groupId;
@property(readonly, nonatomic) NSString *from_sourcename;
@property(readonly, nonatomic) NSString *from_sourceid;
- (void)didQuitGroupNotification:(id)arg1;
- (id)init;

@end

