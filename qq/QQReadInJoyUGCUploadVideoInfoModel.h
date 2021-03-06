//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, ReadInJoyUGCVideoInfo;

@interface QQReadInJoyUGCUploadVideoInfoModel : NSObject
{
    float _frameRate;
    unsigned int _bitRate;
    NSString *_filePath;
    unsigned long long _fileSize;
    ReadInJoyUGCVideoInfo *_videoInfo;
}

@property(retain, nonatomic) ReadInJoyUGCVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) unsigned int bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTrack:(id)arg1;
- (id)init;

@end

