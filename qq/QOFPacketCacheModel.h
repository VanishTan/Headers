//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class QQLockDictionary;

@interface QOFPacketCacheModel : NSObject <NSCoding>
{
    long long _bid;
    long long _version;
    QQLockDictionary *_packetDataCacheDic;
    int _xo;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) long long bid; // @dynamic bid;
@property(retain, nonatomic) QQLockDictionary *packetDataCacheDic; // @dynamic packetDataCacheDic;
@property(nonatomic) long long version; // @dynamic version;

@end

