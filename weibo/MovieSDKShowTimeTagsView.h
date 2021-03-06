//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MovieSDKCinemaShowTimeTag, NSArray, NSMutableArray, UICollectionView, UICollectionViewFlowLayout;

@interface MovieSDKShowTimeTagsView : UIView
{
    UICollectionViewFlowLayout *_layout;
    NSArray *_tags;
    UICollectionView *_tagsCollectionView;
    NSMutableArray *_tagsForShow;
    MovieSDKCinemaShowTimeTag *_moreTag;
}

@property(retain, nonatomic) MovieSDKCinemaShowTimeTag *moreTag; // @synthesize moreTag=_moreTag;
@property(retain, nonatomic) NSMutableArray *tagsForShow; // @synthesize tagsForShow=_tagsForShow;
@property(retain, nonatomic) UICollectionView *tagsCollectionView; // @synthesize tagsCollectionView=_tagsCollectionView;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)tagWidth:(id)arg1;
- (void)checkTagsForShow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

