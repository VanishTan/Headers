//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UGCCellViewAction-Protocol.h"

@class ExploreCellViewBase, ExploreOrderedData, NSString;

@interface UGCHotCommentAction : NSObject <UGCCellViewAction>
{
    ExploreCellViewBase *_cellView;
    ExploreOrderedData *_orderedData;
}

@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (id)categoryID;
- (id)impressionParams;
- (void)trackWithEvent:(id)arg1 extraDic:(id)arg2;
- (id)commentSchemeURLStr;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)exploreDislikeViewOKBtnClicked:(id)arg1;
- (void)beginRelevantDurationTrackerStayTime0;
- (id)v3EnterFrom;
- (void)trackWithEventV3:(id)arg1 extraDictionary:(id)arg2;
- (void)trackV3WithEvent:(id)arg1 extraDic:(id)arg2;
- (void)trackWithEvent:(id)arg1 label:(id)arg2 extraDictionary:(id)arg3;
- (void)didSelectWithContext:(id)arg1;
- (void)unInterestedAction:(id)arg1;
- (void)forwardAction;
- (void)commentAction;
- (void)diggAction:(id)arg1;
- (void)webpageTouchUpInside;
- (void)followAction:(id)arg1;
- (void)tapUserName;
- (void)tapUserAvatar;
- (void)tapAvatarOrName;
- (void)trackCellShow;
- (void)setData:(id)arg1;
- (id)initWithCellView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

