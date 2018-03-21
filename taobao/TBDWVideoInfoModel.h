//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBDWVideoInfoModel : TBJSONModel
{
    NSString *_interactiveVideoId;
    NSString *_videoId;
    NSString *_videoUid;
    NSString *_coverUrl;
    NSString *_videoUrl;
    double _videoWidth;
    double _videoHeight;
    NSString *_source;
}

+ (id)modelKeyMapper;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *videoUid; // @synthesize videoUid=_videoUid;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *interactiveVideoId; // @synthesize interactiveVideoId=_interactiveVideoId;
- (void).cxx_destruct;

@end
