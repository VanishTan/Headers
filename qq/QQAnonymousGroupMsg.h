//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQAnonymousGroupMsg : NSObject
{
    unsigned int _flags;
    NSString *_anon_id;
    NSString *_anon_nick;
    unsigned int _head_portrait;
    unsigned int _expire_time;
    _Bool _isResendModel;
    unsigned int _anonymousBubbleID;
    int _xo;
}


// Remaining properties
@property(copy, nonatomic) NSString *anon_id; // @dynamic anon_id;
@property(copy, nonatomic) NSString *anon_nick; // @dynamic anon_nick;
@property(nonatomic) unsigned int expire_time; // @dynamic expire_time;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) unsigned int head_portrait; // @dynamic head_portrait;
@end

