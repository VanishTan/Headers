//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol GMSFeature;

@interface GMSVectorModifier : NSObject <NSCopying>
{
    id <GMSFeature> _feature;
    int _attributes;
    unsigned long long _serverRenderOpIndex;
}

+ (id)unpackedWithEditProtos:(id)arg1 wireContext:(id)arg2;
- (void).cxx_destruct;
- (id)feature;
- (unsigned long long)serverRenderOpIndex;
- (_Bool)isAdd;
- (int)attributes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRemoveServerRenderOpIndex:(unsigned long long)arg1;
- (id)initWithServerRenderOpIndex:(unsigned long long)arg1 feature:(id)arg2;
- (id)init;

@end
