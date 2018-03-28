//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "SSImpressionProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDataSourcePrefetching-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WDRecommendUserCardCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionViewCell;
@protocol UICollectionViewDelegate, WDRecommendUserCollectionViewDelegate;

@interface WDRecommendUserCollectionView : UICollectionView <UICollectionViewDataSourcePrefetching, WDRecommendUserCardCellDelegate, SSImpressionProtocol, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _disableDislike;
    _Bool _needScrollBehindFollowed;
    _Bool _isDisplay;
    _Bool _isLoadingMore;
    _Bool _hasMore;
    id <WDRecommendUserCollectionViewDelegate> _recommendUserDelegate;
    unsigned long long _followSource;
    UICollectionViewCell *_currentClickFollowCell;
    NSArray *_originalCardModels;
    NSMutableArray *_userCardModels;
    id <UICollectionViewDelegate> _collectionViewDelegate;
    double _beginDragX;
}

+ (id)collectionView;
@property(nonatomic) double beginDragX; // @synthesize beginDragX=_beginDragX;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(retain, nonatomic) NSMutableArray *userCardModels; // @synthesize userCardModels=_userCardModels;
@property(retain, nonatomic) NSArray *originalCardModels; // @synthesize originalCardModels=_originalCardModels;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) __weak UICollectionViewCell *currentClickFollowCell; // @synthesize currentClickFollowCell=_currentClickFollowCell;
@property(nonatomic) _Bool needScrollBehindFollowed; // @synthesize needScrollBehindFollowed=_needScrollBehindFollowed;
@property(nonatomic) _Bool disableDislike; // @synthesize disableDislike=_disableDislike;
@property(nonatomic) unsigned long long followSource; // @synthesize followSource=_followSource;
@property(nonatomic) __weak id <WDRecommendUserCollectionViewDelegate> recommendUserDelegate; // @synthesize recommendUserDelegate=_recommendUserDelegate;
- (void).cxx_destruct;
- (id)_currentCategoryName;
- (id)_currentUniqueId;
- (void)trackWithEvent:(id)arg1 extraDic:(id)arg2;
- (void)onClickDislike:(id)arg1;
- (void)onClickFollow:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)loadMore;
- (void)setDelegate:(id)arg1;
- (void)followSuccess:(id)arg1;
- (void)dealloc;
- (void)needRerecordImpressions;
- (void)didEndDisplaying;
- (void)willDisplay;
- (_Bool)modelChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *allUserModels;
- (void)configUserModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
