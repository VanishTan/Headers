//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseJob.h>

#import <QQMainProject/QZJob-Protocol.h>

@class NSDictionary, NSString, UIImage;

@interface QZPhotoPreUploadJob : QZBaseJob <QZJob>
{
    _Bool _isNewUpload;
    NSString *_preUploadId;
}

+ (id)operationWithJob:(id)arg1;
@property(copy, nonatomic) NSString *preUploadId; // @synthesize preUploadId=_preUploadId;
@property(nonatomic) _Bool isNewUpload; // @synthesize isNewUpload=_isNewUpload;
- (void).cxx_destruct;
- (_Bool)persistent;

// Remaining properties
@property(copy, nonatomic) NSString *UUID; // @dynamic UUID;
@property(copy, nonatomic) NSString *albumName; // @dynamic albumName;
@property(nonatomic) long long albumType; // @dynamic albumType;
@property(nonatomic) _Bool canceled;
@property(nonatomic) long long compressionBatchID; // @dynamic compressionBatchID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long imageQuality; // @dynamic imageQuality;
@property(copy, nonatomic) NSString *jobBatchID;
@property(copy, nonatomic) NSString *jobID;
@property(copy, nonatomic) NSDictionary *mediaMetadata; // @dynamic mediaMetadata;
@property(nonatomic) long long source; // @dynamic source;
@property(nonatomic) long long state;
@property(nonatomic) long long subJobCount;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(copy, nonatomic) NSString *thumbnailPath;
@property(nonatomic) long long uploadEntrance; // @dynamic uploadEntrance;
@property(nonatomic) _Bool waitForWifi;

@end

