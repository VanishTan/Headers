//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LYStorage, QQARJHRedPointModel;

@interface QQARJHRedPointEngine : NSObject
{
    LYStorage *_storage;
    NSObject *_lock;
    QQARJHRedPointModel *_model;
}

+ (id)getInstance;
@property(retain, nonatomic) QQARJHRedPointModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)clickedRedPoint;
- (double)getServerTimeIntervalSince1970;
- (void)requestRedPoint:(CDUnknownBlockType)arg1;
- (_Bool)isShowRedPoint;
- (void)updateModel:(id)arg1;
- (void)logoutNotification;
- (id)init;

@end
