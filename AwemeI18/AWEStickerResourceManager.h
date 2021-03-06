//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface AWEStickerResourceManager : NSObject
{
    NSURL *_coverMarkImgURL;
    NSURL *_coverImgURL;
    NSArray *_recordStickersNew;
    NSArray *_liveStickers;
    NSArray *_arModelArray;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSArray *arModelArray; // @synthesize arModelArray=_arModelArray;
@property(copy, nonatomic) NSArray *liveStickers; // @synthesize liveStickers=_liveStickers;
@property(copy, nonatomic) NSArray *recordStickersNew; // @synthesize recordStickersNew=_recordStickersNew;
@property(retain, nonatomic) NSURL *coverImgURL; // @synthesize coverImgURL=_coverImgURL;
@property(retain, nonatomic) NSURL *coverMarkImgURL; // @synthesize coverMarkImgURL=_coverMarkImgURL;
- (void).cxx_destruct;
- (_Bool)shouldShowStickerBtnMarkImg;
- (void)clearStickerCache;
- (id)getARModelArray;
- (id)getLiveStickerItmes;
- (id)getRecordStickerItmes;
- (id)SDKResourcePath;
- (id)resourcePath;
- (id)p_stickerPath;
- (void)downloadStickerResourceWithSessionManager:(id)arg1 item:(id)arg2 index:(long long)arg3 inProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadStickerResourceWithItem:(id)arg1 inProgress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isFileExistAtPath:(id)arg1;
- (void)deleteStickerResource:(id)arg1;
- (_Bool)isStickerExistInLocal:(id)arg1;
- (id)decompressedResourcePathForItem:(id)arg1;
- (id)compressResourcePathForItem:(id)arg1;
- (id)resourcePathForItem:(id)arg1;
- (void)fetchStickerItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)getLiveStickersFrom:(id)arg1;
- (id)getRecordStickersFrom:(id)arg1;
- (id)fileterStickersFrom:(id)arg1 withFileterBlock:(CDUnknownBlockType)arg2;

@end

