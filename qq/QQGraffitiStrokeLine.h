//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQGraffitiStrokeLine : NSObject
{
    struct vector<OneDrawAttriData *, std::allocator<OneDrawAttriData *>> _draws;
    struct OneDrawAttriData *_curDraw;
    struct __normal_iterator<OneDrawAttriData **, std::vector<OneDrawAttriData *, std::allocator<OneDrawAttriData *>>> {
        struct OneDrawAttriData **_M_current;
    } _it;
    _Bool _isFirstGet;
    _Bool _useTextrue;
    int _type;
    unsigned int _texId;
    NSString *_resDir;
}

@property(nonatomic) unsigned int texId; // @synthesize texId=_texId;
@property(nonatomic) _Bool useTextrue; // @synthesize useTextrue=_useTextrue;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *resDir; // @synthesize resDir=_resDir;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getOneDrawCount;
- (unsigned int)getOneDrawPatternIndex;
- (void)getOneDrawData:(unsigned int)arg1 outData:(void **)arg2 outLen:(unsigned int *)arg3;
- (_Bool)hasNext;
- (void)setOneDrawCount:(int)arg1;
- (void)setPatternIndex:(unsigned int)arg1;
- (void)geneOneDrawAttriData:(unsigned int)arg1 data:(void *)arg2 dataLen:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

@end
