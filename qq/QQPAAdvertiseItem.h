//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQPAAdvertiseItem : NSObject
{
    NSString *_indexName;
    NSString *_showName;
    unsigned long long _indexType;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void)dealloc;

@end
