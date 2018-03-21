//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseItemView.h"

@class NSMutableArray, UIImageView, UIView;

@interface MCSubMenuItemView : MCBaseItemView
{
    NSMutableArray *_buttonViewLsit;
    UIView *_contentView;
    UIImageView *_triangleImageView;
}

@property(retain, nonatomic) UIImageView *triangleImageView; // @synthesize triangleImageView=_triangleImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *buttonViewLsit; // @synthesize buttonViewLsit=_buttonViewLsit;
- (void).cxx_destruct;
- (void)menuButtonClick:(id)arg1;
- (void)buildMenu:(id)arg1;
- (double)maxButtonWidth:(id)arg1;
- (void)setTriangleCenterX:(double)arg1;
- (void)onDataChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end
