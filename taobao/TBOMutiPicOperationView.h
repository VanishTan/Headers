//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBOMutiItemAddViewDelegate-Protocol.h"
#import "TBOMutiPicItemViewDelegate-Protocol.h"

@class CATextLayer, NSArray, NSMutableArray, NSString, TBOMutiItemAddView, UIScrollView;
@protocol TBOMutiPicOperationDelegate;

@interface TBOMutiPicOperationView : UIView <TBOMutiItemAddViewDelegate, TBOMutiPicItemViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_imageArray;
    NSMutableArray *_imagePathArray;
    TBOMutiItemAddView *addItem;
    NSMutableArray *_viewItemArray;
    double _fixedHeight;
    double _fixedWidth;
    CATextLayer *_notiText;
    id <TBOMutiPicOperationDelegate> _delegate;
    unsigned long long _maxSelection;
}

@property(nonatomic) unsigned long long maxSelection; // @synthesize maxSelection=_maxSelection;
@property(nonatomic) __weak id <TBOMutiPicOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)TBOMutiPicItemShouldPreview:(id)arg1;
- (void)TBOMutiPicItemShouldRemove:(id)arg1;
- (void)TBOMutiPicItemShoundAdd;
- (void)reset;
- (void)removeImage:(id)arg1;
- (void)refreshItems;
- (void)addImages:(id)arg1;
- (void)addImageWithUrl:(id)arg1;
- (unsigned long long)currentSelection;
@property(readonly, nonatomic) NSArray *imagePathArray;
@property(readonly, nonatomic) NSArray *imageArray;
- (id)generateAttribute;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

