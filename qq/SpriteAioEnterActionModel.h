//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SpriteAioEnterActionModel : NSObject
{
    int _actionId;
    unsigned int _type;
    int _updateTs;
    long long _uin;
}

@property(nonatomic) int updateTs; // @synthesize updateTs=_updateTs;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int actionId; // @synthesize actionId=_actionId;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (id)initWithDict:(id)arg1 uin:(long long)arg2;

@end
