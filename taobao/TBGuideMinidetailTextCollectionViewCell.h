//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideMinidetailBaseCollectionViewCell.h"

@class UIButton;

@interface TBGuideMinidetailTextCollectionViewCell : TBGuideMinidetailBaseCollectionViewCell
{
    UIButton *_textButton;
}

+ (struct CGSize)contentSizeWithItem:(id)arg1;
+ (double)margin;
+ (double)height;
+ (id)spm;
@property(retain, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)onTextButtonCallBack:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
