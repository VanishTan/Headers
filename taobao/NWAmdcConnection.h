//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSError, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;

@interface NWAmdcConnection : NSObject
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSError *_error;
    NSMutableData *_data;
    NSCondition *_condition;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (id)init;

@end

