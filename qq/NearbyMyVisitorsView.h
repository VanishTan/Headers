//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface NearbyMyVisitorsView : UIView
{
    NSMutableArray *_headViews;
    double _avatarViewGap;
    double _avatarViewWidth;
    NSArray *_visitorList;
}

+ (struct CGSize)visitorsViewSize:(long long)arg1 gap:(double)arg2 width:(double)arg3;
@property(retain, nonatomic) NSArray *visitorList; // @synthesize visitorList=_visitorList;
@property(nonatomic) double avatarViewWidth; // @synthesize avatarViewWidth=_avatarViewWidth;
@property(nonatomic) double avatarViewGap; // @synthesize avatarViewGap=_avatarViewGap;
- (void).cxx_destruct;
- (void)loadHeaderViewsIfNeed;
- (void)layoutVisitorsView;
- (id)initWithVisitors:(id)arg1;

@end

