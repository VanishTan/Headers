//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBPhotoObject, UIImage;

@interface TBSNSTopicPostPhotoModel : TBJSONModel
{
    UIImage *_image;
    TBPhotoObject *_tbPhotoObject;
    NSString *_imageUploadURLString;
}

@property(copy, nonatomic) NSString *imageUploadURLString; // @synthesize imageUploadURLString=_imageUploadURLString;
@property(retain, nonatomic) TBPhotoObject *tbPhotoObject; // @synthesize tbPhotoObject=_tbPhotoObject;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end
