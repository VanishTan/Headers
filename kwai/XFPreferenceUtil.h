//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XFPreferenceUtil : NSObject
{
}

+ (id)getDictKey:(id)arg1 userId:(id)arg2;
+ (void)setDictKey:(id)arg1 value:(id)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (void)removeUserKey:(id)arg1 userId:(id)arg2 syncWrite:(_Bool)arg3;
+ (id)getArrayKey:(id)arg1 userId:(id)arg2;
+ (void)setArrayKey:(id)arg1 value:(id)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (long long)getLongLongKey:(id)arg1 userId:(id)arg2;
+ (void)setLongLongKey:(id)arg1 value:(long long)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (long long)getIntegerKey:(id)arg1 userId:(id)arg2;
+ (void)setIntegerKey:(id)arg1 value:(long long)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (double)getDoubleKey:(id)arg1 userId:(id)arg2;
+ (void)setDoubleKey:(id)arg1 value:(double)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (_Bool)getBoolKey:(id)arg1 userId:(id)arg2;
+ (void)setBoolKey:(id)arg1 value:(_Bool)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (id)getKey:(id)arg1 userId:(id)arg2;
+ (void)setKey:(id)arg1 value:(id)arg2 userId:(id)arg3 syncWrite:(_Bool)arg4;
+ (void)removeGlobalKey:(id)arg1;
+ (id)getGlobalArrayKey:(id)arg1;
+ (void)setGlobalArrayKey:(id)arg1 value:(id)arg2 syncWrite:(_Bool)arg3;
+ (double)getGlobalDoubleKey:(id)arg1;
+ (void)setGlobalDoubleKey:(id)arg1 value:(double)arg2 syncWrite:(_Bool)arg3;
+ (long long)getGlobalIntegerKey:(id)arg1;
+ (void)setGlobalIntegerKey:(id)arg1 value:(long long)arg2 syncWrite:(_Bool)arg3;
+ (_Bool)getGlobalBoolKey:(id)arg1;
+ (void)setGlobalBoolKey:(id)arg1 value:(_Bool)arg2 syncWrite:(_Bool)arg3;
+ (id)getGlobalDictKey:(id)arg1;
+ (void)setGlobalDictKey:(id)arg1 value:(id)arg2 syncWrite:(_Bool)arg3;
+ (id)getGlobalKey:(id)arg1;
+ (void)setGlobalKey:(id)arg1 value:(id)arg2 syncWrite:(_Bool)arg3;
+ (id)standardUserDefaults;
+ (void)clearPrefenence;
+ (void)setAppGroupKey:(id)arg1;
+ (void)copyPrefenenceFromAppContainer:(id)arg1;

@end
