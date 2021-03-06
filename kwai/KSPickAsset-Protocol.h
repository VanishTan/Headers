//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol KSPickAsset <NSObject>
@property(copy, nonatomic) CDUnknownBlockType onPickStatusChanged;
@property(nonatomic) unsigned long long pickStatus;
- (void)loadSizedImageCompletion:(void (^)(UIImage *, _Bool, id <KSPickAsset>))arg1;
- (void)loadVideoDurationCompletion:(void (^)(double))arg1;
- (_Bool)isVideoAsset;
- (_Bool)isLivePhoto;
- (_Bool)isPhotoAsset;
@end

