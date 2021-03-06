//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETTFileUploadService.h"

#import "TTImageUploadClientProtocol-Protocol.h"

@class AWEPhotoUploadParametersResponseModel, NSError, NSString, TTImageUploadClient;

@interface AWETTPhotoUploadService : AWETTFileUploadService <TTImageUploadClientProtocol>
{
    AWEPhotoUploadParametersResponseModel *_imageUploadParameters;
    TTImageUploadClient *_imageUploadClient;
    NSString *_materialId;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) TTImageUploadClient *imageUploadClient; // @synthesize imageUploadClient=_imageUploadClient;
@property(retain, nonatomic) AWEPhotoUploadParametersResponseModel *imageUploadParameters; // @synthesize imageUploadParameters=_imageUploadParameters;
- (void).cxx_destruct;
- (void)uploadProgressDidUpdate:(long long)arg1 fileIndex:(long long)arg2;
- (void)uploadDidFinish:(id)arg1 error:(id)arg2;
- (void)uploadImagesDidFinish;
- (void)startUploading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

