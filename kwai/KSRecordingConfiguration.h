//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSRecordingConfiguration : NSObject
{
    long long _deviceOrientation;
    NSString *_backgroundMusicPath;
    NSString *_outputPath;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _maxVideoLength;
}

@property(retain, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) NSString *backgroundMusicPath; // @synthesize backgroundMusicPath=_backgroundMusicPath;
@property(nonatomic) CDStruct_1b6d18a9 maxVideoLength; // @synthesize maxVideoLength=_maxVideoLength;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;
- (id)description;

@end

