//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NearbyZanCacheModel : NSObject
{
    NSString *_uin;
    unsigned int _freeZanCount;
    unsigned int _payZanCount;
    int _type;
    int _xo;
}


// Remaining properties
@property(nonatomic) unsigned int freeZanCount; // @dynamic freeZanCount;
@property(nonatomic) unsigned int payZanCount; // @dynamic payZanCount;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;
@end

