//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEButton, NSArray, NSString, UICollectionView, UILabel;
@protocol AWEVideoEffectViewDelegate;

@interface AWEVideoEffectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <AWEVideoEffectViewDelegate> _delegate;
    unsigned long long _type;
    UICollectionView *_collectionView;
    UILabel *_textLabel;
    AWEButton *_revokeBtn;
    NSArray *_timeEffects;
    NSArray *_filterEffects;
}

@property(copy, nonatomic) NSArray *filterEffects; // @synthesize filterEffects=_filterEffects;
@property(copy, nonatomic) NSArray *timeEffects; // @synthesize timeEffects=_timeEffects;
@property(retain, nonatomic) AWEButton *revokeBtn; // @synthesize revokeBtn=_revokeBtn;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <AWEVideoEffectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setDescriptionText:(id)arg1;
- (void)selectTimeEffect:(long long)arg1;
- (void)hideRevokeBtn:(_Bool)arg1;
- (void)didClickedRevokeBtn:(id)arg1;
- (void)endLongPress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)reload;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

