//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface TTRealnameAuthUploadResponseModel : JSONModel
{
    NSString<Optional> *_identity_number;
    NSString<Optional> *_uri;
    NSString<Optional> *_real_name;
}

@property(copy, nonatomic) NSString<Optional> *real_name; // @synthesize real_name=_real_name;
@property(copy, nonatomic) NSString<Optional> *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString<Optional> *identity_number; // @synthesize identity_number=_identity_number;
- (void).cxx_destruct;

@end
