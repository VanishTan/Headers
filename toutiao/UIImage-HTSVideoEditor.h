//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (HTSVideoEditor)
+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2 position:(struct CGRect)arg3;
+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)imageFromBundle:(id)arg1;
- (id)htsVideo_gaussianBlurImageWithRadius:(double)arg1;
- (void)previewImageUsingFilterEffect:(unsigned long long)arg1 compeletion:(CDUnknownBlockType)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (void)previewImageUsingFilter:(unsigned long long)arg1 compeletion:(CDUnknownBlockType)arg2;
@end

