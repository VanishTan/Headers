//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WAPermissionWeAppBindInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSMutableArray *arrJumpToAppInfo;
    NSMutableArray *arrPluginInfo;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *arrPluginInfo; // @synthesize arrPluginInfo;
@property(retain, nonatomic) NSMutableArray *arrJumpToAppInfo; // @synthesize arrJumpToAppInfo;
- (void).cxx_destruct;
- (id)archivedWCTValue;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

