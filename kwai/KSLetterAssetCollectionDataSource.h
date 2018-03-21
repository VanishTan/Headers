//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSMutableArray, NSString, PHCachingImageManager;

@interface KSLetterAssetCollectionDataSource : NSObject <UICollectionViewDataSource>
{
    _Bool _hasTakePictureAsset;
    NSArray *_assets;
    NSMutableArray *_selectedIndexes;
    PHCachingImageManager *_imageManager;
    CDUnknownBlockType _selectedChanged;
    CDUnknownBlockType _showMaxSelectionCountTip;
    struct CGSize _cellSize;
}

@property(copy, nonatomic) CDUnknownBlockType showMaxSelectionCountTip; // @synthesize showMaxSelectionCountTip=_showMaxSelectionCountTip;
@property(copy, nonatomic) CDUnknownBlockType selectedChanged; // @synthesize selectedChanged=_selectedChanged;
@property(nonatomic) __weak PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) NSMutableArray *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) _Bool hasTakePictureAsset; // @synthesize hasTakePictureAsset=_hasTakePictureAsset;
- (void).cxx_destruct;
- (id)getSeletedAssets;
- (void)updateCellSelectableStateWithCell:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
