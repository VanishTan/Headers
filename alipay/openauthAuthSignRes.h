//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface openauthAuthSignRes : NSObject
{
    _Bool _isSucess;
    NSString *_authCode;
    NSString *_code;
    NSString *_errorMsg;
    NSString *_memo;
}

@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) _Bool isSucess; // @synthesize isSucess=_isSucess;
- (void).cxx_destruct;

@end

