//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UITapGestureRecognizer;
@protocol MQZoneDragCollectionViewCellDelegate;

@interface MQZoneDragCollectionViewCell : UICollectionViewCell
{
    _Bool _isEditingModel;
    UITapGestureRecognizer *_tapGesture;
    _Bool _disableEdit;
    _Bool _showDeleteButton;
    id <MQZoneDragCollectionViewCellDelegate> _delegate;
    UIButton *_deleteButton;
}

@property(nonatomic) _Bool showDeleteButton; // @synthesize showDeleteButton=_showDeleteButton;
@property(nonatomic) _Bool disableEdit; // @synthesize disableEdit=_disableEdit;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak id <MQZoneDragCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDeleteButtonHidden:(_Bool)arg1;
- (void)doExitAnimationAnimated:(_Bool)arg1;
- (void)doEnterAnimationAnimated:(_Bool)arg1;
- (void)stopEditingModeAnimated:(_Bool)arg1;
- (void)enterEditingModeAnimated:(_Bool)arg1;
- (void)resetSubviews;
- (void)prepareForReuse;
- (void)handleTapGesture:(id)arg1;
- (void)didDeleteBtnClicked:(id)arg1;
- (void)addTapGesture;
- (void)addDeleteButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

