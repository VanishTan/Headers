//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NearbyFriendCellTag, UIImageView, UILabel;
@protocol NearbyNewBaseInfoClickActionDelegate;

@interface NearbyNewBaseInfoView : UIView
{
    _Bool _bIsMyself;
    UIImageView *_sexImageView;
    UILabel *_ageTagLabel;
    NearbyFriendCellTag *_levelTagLabel;
    UILabel *_marriageTagLabel;
    UILabel *_constellationTagLabel;
    UILabel *_followsLabel;
    UILabel *_fansLabel;
    UILabel *_distanceTimeLabel;
    id <NearbyNewBaseInfoClickActionDelegate> _delegate;
}

@property(nonatomic) __weak id <NearbyNewBaseInfoClickActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end
