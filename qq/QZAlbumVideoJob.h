//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZMediaVideoJob.h>

@class CLLocation, NSDate;

@interface QZAlbumVideoJob : QZMediaVideoJob
{
    NSDate *_shootTime;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *shootTime; // @synthesize shootTime=_shootTime;
- (void).cxx_destruct;
- (id)createVideoCoverPacketWithBatchJob:(id)arg1;
- (id)createUploadPacket:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)persistent;

@end
