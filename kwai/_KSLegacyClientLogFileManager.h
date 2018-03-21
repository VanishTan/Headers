//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray, NSString;

@interface _KSLegacyClientLogFileManager : NSObject
{
    NSMutableArray *_orderedItems;
    NSString *_directory;
    NSFileHandle *_currentFileHandle;
    long long _priority;
    long long _maximumLogFileSize;
}

@property(readonly, nonatomic) long long maximumLogFileSize; // @synthesize maximumLogFileSize=_maximumLogFileSize;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSFileHandle *currentFileHandle; // @synthesize currentFileHandle=_currentFileHandle;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
- (_Bool)matchPriority:(long long)arg1;
- (void)removeFile:(id)arg1;
- (id)currentFileInfo;
- (void)appendRecordLine:(id)arg1;
- (id)orderedFileInfos;
- (id)initWithPriority:(long long)arg1;

@end
