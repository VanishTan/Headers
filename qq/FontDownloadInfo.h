//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FontDownloadInfo : NSObject
{
    int _fontId;
    long long _fontType;
    CDUnknownBlockType _complete;
}

@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;
@property(nonatomic) int fontId; // @synthesize fontId=_fontId;
- (void)dealloc;

@end
