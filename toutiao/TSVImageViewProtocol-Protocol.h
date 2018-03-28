//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TTImageInfosModel, UIImage;

@protocol TSVImageViewProtocol <NSObject>
@property(nonatomic) long long imageContentMode;
@property(copy, nonatomic) NSString *backgroundColorThemeKey;
- (void)tsv_setImageWithModel:(TTImageInfosModel *)arg1 placeholderImage:(UIImage *)arg2 options:(unsigned long long)arg3 isAnimatedImage:(_Bool)arg4 success:(void (^)(UIImage *, _Bool))arg5 failure:(void (^)(NSError *))arg6;
- (void)tsv_setImageWithModel:(TTImageInfosModel *)arg1 placeholderImage:(UIImage *)arg2;
@end
