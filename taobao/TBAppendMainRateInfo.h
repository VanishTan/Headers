//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class TBAppendMainRateItemInfo;

@interface TBAppendMainRateInfo : TBJSONModel
{
    _Bool _allowUploadPic;
    _Bool _canAppend;
    _Bool _forceAnnoy;
    int _anony;
    TBAppendMainRateItemInfo *_mainRate;
}

@property(nonatomic) int anony; // @synthesize anony=_anony;
@property(nonatomic) _Bool forceAnnoy; // @synthesize forceAnnoy=_forceAnnoy;
@property(nonatomic) _Bool canAppend; // @synthesize canAppend=_canAppend;
@property(nonatomic) _Bool allowUploadPic; // @synthesize allowUploadPic=_allowUploadPic;
@property(retain, nonatomic) TBAppendMainRateItemInfo *mainRate; // @synthesize mainRate=_mainRate;
- (void).cxx_destruct;

@end
