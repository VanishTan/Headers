//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface TTImagePickerCameraCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_mask;
}

@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedCountDidChange:(id)arg1;
- (void)imageAction;
- (void)interceptTapAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end
