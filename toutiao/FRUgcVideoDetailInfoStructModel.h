//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRImageUrlStructModel, NSNumber, NSString;

@interface FRUgcVideoDetailInfoStructModel : JSONModel
{
    NSNumber *_group_flags;
    NSString *_video_id;
    NSNumber *_video_preloading_flag;
    NSNumber *_direct_play;
    FRImageUrlStructModel *_detail_video_large_image;
    NSNumber *_show_pgc_subscribe;
}

@property(retain, nonatomic) NSNumber *show_pgc_subscribe; // @synthesize show_pgc_subscribe=_show_pgc_subscribe;
@property(retain, nonatomic) FRImageUrlStructModel *detail_video_large_image; // @synthesize detail_video_large_image=_detail_video_large_image;
@property(retain, nonatomic) NSNumber *direct_play; // @synthesize direct_play=_direct_play;
@property(retain, nonatomic) NSNumber *video_preloading_flag; // @synthesize video_preloading_flag=_video_preloading_flag;
@property(retain, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(retain, nonatomic) NSNumber *group_flags; // @synthesize group_flags=_group_flags;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

