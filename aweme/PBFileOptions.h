//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBExtendableMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PBFileOptions : PBExtendableMessage <GeneratedMessageProtocol>
{
    unsigned int hasJavaMultipleFiles_:1;
    unsigned int hasJavaGenerateEqualsAndHash_:1;
    unsigned int hasJavaStringCheckUtf8_:1;
    unsigned int hasCcGenericServices_:1;
    unsigned int hasJavaGenericServices_:1;
    unsigned int hasPyGenericServices_:1;
    unsigned int hasDeprecated_:1;
    unsigned int hasJavaPackage_:1;
    unsigned int hasJavaOuterClassname_:1;
    unsigned int hasGoPackage_:1;
    unsigned int hasOptimizeFor_:1;
    unsigned int javaMultipleFiles_:1;
    unsigned int javaGenerateEqualsAndHash_:1;
    unsigned int javaStringCheckUtf8_:1;
    unsigned int ccGenericServices_:1;
    unsigned int javaGenericServices_:1;
    unsigned int pyGenericServices_:1;
    unsigned int deprecated_:1;
    NSString *javaPackage;
    NSString *javaOuterClassname;
    NSString *goPackage;
    int optimizeFor;
    NSMutableArray *uninterpretedOptionArray;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSMutableArray *uninterpretedOptionArray; // @synthesize uninterpretedOptionArray;
@property(retain) NSString *goPackage; // @synthesize goPackage;
@property int optimizeFor; // @synthesize optimizeFor;
@property(retain) NSString *javaOuterClassname; // @synthesize javaOuterClassname;
@property(retain) NSString *javaPackage; // @synthesize javaPackage;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *uninterpretedOption; // @dynamic uninterpretedOption;
- (id)defaultInstance;
- (id)init;
@property _Bool deprecated;
- (void)setHasDeprecated:(_Bool)arg1;
- (_Bool)hasDeprecated;
@property _Bool pyGenericServices;
- (void)setHasPyGenericServices:(_Bool)arg1;
- (_Bool)hasPyGenericServices;
@property _Bool javaGenericServices;
- (void)setHasJavaGenericServices:(_Bool)arg1;
- (_Bool)hasJavaGenericServices;
@property _Bool ccGenericServices;
- (void)setHasCcGenericServices:(_Bool)arg1;
- (_Bool)hasCcGenericServices;
- (void)setHasGoPackage:(_Bool)arg1;
- (_Bool)hasGoPackage;
- (void)setHasOptimizeFor:(_Bool)arg1;
- (_Bool)hasOptimizeFor;
@property _Bool javaStringCheckUtf8;
- (void)setHasJavaStringCheckUtf8:(_Bool)arg1;
- (_Bool)hasJavaStringCheckUtf8;
@property _Bool javaGenerateEqualsAndHash;
- (void)setHasJavaGenerateEqualsAndHash:(_Bool)arg1;
- (_Bool)hasJavaGenerateEqualsAndHash;
@property _Bool javaMultipleFiles;
- (void)setHasJavaMultipleFiles:(_Bool)arg1;
- (_Bool)hasJavaMultipleFiles;
- (void)setHasJavaOuterClassname:(_Bool)arg1;
- (_Bool)hasJavaOuterClassname;
- (void)setHasJavaPackage:(_Bool)arg1;
- (_Bool)hasJavaPackage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
