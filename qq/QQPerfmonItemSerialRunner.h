//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQPerfmonItemSerialRunner : NSObject
{
    struct QQPerfmonItem *_arr;
    unsigned int _size;
    unsigned int _index;
}

- (void)runItemAtIndex:(unsigned int)arg1;
- (void)runAll;
- (_Bool)hasNext;
- (id)initWithRawArray:(struct QQPerfmonItem *)arg1 size:(unsigned int)arg2;

@end

