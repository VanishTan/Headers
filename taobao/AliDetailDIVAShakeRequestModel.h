//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AliDetailDIVAShakeRequestModel : NSObject
{
    NSString *_fileId;
    NSString *_sellerId;
    NSString *_itemId;
    NSString *_addition;
    NSString *_mediaType;
}

@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *addition; // @synthesize addition=_addition;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;

@end
