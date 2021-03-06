//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURLConnection;

@interface DownloadModel : NSObject
{
    NSURLConnection *_urlConnection;
    float _progress;
    long long _totalSize;
    long long _receive;
    NSMutableData *_data;
    NSString *_filePath;
    NSString *_urlPath;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSMutableData *data; // @dynamic data;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) float progress; // @dynamic progress;
@property(nonatomic) long long receive; // @dynamic receive;
@property(nonatomic) long long totalSize; // @dynamic totalSize;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @dynamic urlConnection;
@property(copy, nonatomic) NSString *urlPath; // @dynamic urlPath;

@end

