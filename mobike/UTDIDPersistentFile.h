//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableDictionary, NSString;

@interface UTDIDPersistentFile : NSObject
{
    NSFileManager *mDefaultFileManager;
    NSString *mOurDocumentPath;
    NSString *mFilePath;
    NSMutableDictionary *mData;
}

+ (id)createWithFile:(id)arg1 and:(id)arg2;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)commit;
- (void)reload;
- (_Bool)save;
- (id)objectForKey:(id)arg1;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setDataDict:(id)arg1;
- (id)dataDict;
- (void)create:(id)arg1 and:(id)arg2;
- (void)initData;
- (void)checkPath;

@end

