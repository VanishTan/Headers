//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MsgType0x210SubMsgType0x13, MsgType0x210SubMsgType0x17, MsgType0x210SubMsgType0x1d, MsgType0x210SubMsgType0x2, MsgType0x210SubMsgType0x20, MsgType0x210SubMsgType0x24, MsgType0x210SubMsgType0xa, MsgType0x210SubMsgType0xe;

@interface MsgType0x210 : NSObject
{
    unsigned int _uSubMsgType;
    unsigned int _uMsgTime;
    unsigned int _shMsgSeq;
    MsgType0x210SubMsgType0x2 *_stMsgInfo0x2;
    MsgType0x210SubMsgType0xa *_stMsgInfo0xa;
    MsgType0x210SubMsgType0xe *_stMsgInfo0xe;
    MsgType0x210SubMsgType0x13 *_stMsgInfo0x13;
    MsgType0x210SubMsgType0x17 *_stMsgInfo0x17;
    MsgType0x210SubMsgType0x20 *_stMsgInfo0x20;
    MsgType0x210SubMsgType0x1d *_stMsgInfo0x1d;
    MsgType0x210SubMsgType0x24 *_stMsgInfo0x24;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct MsgType0x210 *)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int shMsgSeq; // @dynamic shMsgSeq;
@property(retain, nonatomic) MsgType0x210SubMsgType0x13 *stMsgInfo0x13; // @dynamic stMsgInfo0x13;
@property(retain, nonatomic) MsgType0x210SubMsgType0x17 *stMsgInfo0x17; // @dynamic stMsgInfo0x17;
@property(retain, nonatomic) MsgType0x210SubMsgType0x1d *stMsgInfo0x1d; // @dynamic stMsgInfo0x1d;
@property(retain, nonatomic) MsgType0x210SubMsgType0x2 *stMsgInfo0x2; // @dynamic stMsgInfo0x2;
@property(retain, nonatomic) MsgType0x210SubMsgType0x20 *stMsgInfo0x20; // @dynamic stMsgInfo0x20;
@property(retain, nonatomic) MsgType0x210SubMsgType0x24 *stMsgInfo0x24; // @dynamic stMsgInfo0x24;
@property(retain, nonatomic) MsgType0x210SubMsgType0xa *stMsgInfo0xa; // @dynamic stMsgInfo0xa;
@property(retain, nonatomic) MsgType0x210SubMsgType0xe *stMsgInfo0xe; // @dynamic stMsgInfo0xe;
@property(nonatomic) unsigned int uMsgTime; // @dynamic uMsgTime;
@property(nonatomic) unsigned int uSubMsgType; // @dynamic uSubMsgType;

@end
