//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTVCommodityEntity, UIButton, UIImageView;

@interface TTVCommodityButton : UIView
{
    _Bool _isFull;
    TTVCommodityEntity *_entity;
    UIImageView *_imageView;
    UIImageView *_recommandIcon;
    UIButton *_button;
}

@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *recommandIcon; // @synthesize recommandIcon=_recommandIcon;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TTVCommodityEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

