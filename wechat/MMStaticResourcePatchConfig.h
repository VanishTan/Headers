//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMStaticResourcePatchConfig : NSObject <PBCoding>
{
    unsigned int m_resVersion;
    unsigned int m_supportMinVersion;
    unsigned int m_supportMaxVersion;
    unsigned int m_newVersion;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_newVersion; // @synthesize m_newVersion;
@property(nonatomic) unsigned int m_supportMaxVersion; // @synthesize m_supportMaxVersion;
@property(nonatomic) unsigned int m_supportMinVersion; // @synthesize m_supportMinVersion;
@property(nonatomic) unsigned int m_resVersion; // @synthesize m_resVersion;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

