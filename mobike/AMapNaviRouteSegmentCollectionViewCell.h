//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AMapNaviRouteExtendSegment, UIImageView, UILabel;

@interface AMapNaviRouteSegmentCollectionViewCell : UICollectionViewCell
{
    AMapNaviRouteExtendSegment *_myObj;
    UIImageView *_imageView;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AMapNaviRouteExtendSegment *myObj; // @synthesize myObj=_myObj;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
