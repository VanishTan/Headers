//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSIndexPath, NSString, TBRecmdCardBaseModel, TBRecmdProcessor, UIActivityIndicatorView, UIButton;

@interface TBRecmdMaskView : UIView
{
    UIButton *_itemDeleteButton;
    UIButton *_itemSimilarButton;
    TBRecmdProcessor *_processor;
    UIButton *_itemBgButton;
    NSArray *_btns;
    UIActivityIndicatorView *_loadingView;
    UIView *_reasonMask;
    TBRecmdCardBaseModel *_itemModel;
    NSIndexPath *_itemIndexPath;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _failedBlock;
}

+ (void)showDeleteActionToast:(id)arg1 onView:(id)arg2;
+ (void)showDeleteHintToastDeleted:(_Bool)arg1 onView:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) __weak TBRecmdCardBaseModel *itemModel; // @synthesize itemModel=_itemModel;
@property(nonatomic) __weak UIView *reasonMask; // @synthesize reasonMask=_reasonMask;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) UIButton *itemBgButton; // @synthesize itemBgButton=_itemBgButton;
@property(nonatomic) __weak TBRecmdProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) UIButton *itemSimilarButton; // @synthesize itemSimilarButton=_itemSimilarButton;
@property(retain, nonatomic) UIButton *itemDeleteButton; // @synthesize itemDeleteButton=_itemDeleteButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *itemDeleteId;
@property(readonly, nonatomic) NSString *similarUrl;
- (void)switchSimularButtonStatusWithUrl:(id)arg1;
- (void)pressSimilarButton:(id)arg1;
- (void)deleteFailedWithError:(id)arg1 indexPath:(id)arg2 oldDeleteId:(id)arg3;
- (void)deleteSuccessWithIndexPath:(id)arg1 oldDeleteId:(id)arg2 newCardData:(id)arg3;
- (void)startLoadingAnimation;
- (void)performDeleteAnimation;
- (void)hideDeleteReasonAnimationWithReasonView:(id)arg1;
- (void)showDeleteReasonAnimation;
- (void)showDeleteReasonWithData:(id)arg1;
- (id)deleteReasonsWithModel:(id)arg1;
- (void)pressDeleteButton:(id)arg1;
- (void)dismissDeleteMaskViewWithAnimationCompletion:(CDUnknownBlockType)arg1;
- (id)maskViewShowingCellIndexPath;
- (void)dismissDeleteMaskView;
- (void)showMaskViewAbove:(id)arg1 indexPath:(id)arg2 model:(id)arg3;
- (void)changeSimilarBtnTitle:(id)arg1 bgColor:(id)arg2;
- (void)changeDeleteBtnTitle:(id)arg1 bgColor:(id)arg2;
- (void)customBtns:(id)arg1;
- (id)initWithDeleteSuccessBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;

@end

