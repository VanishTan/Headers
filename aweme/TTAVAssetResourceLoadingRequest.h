//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, TTAVAssetResourceLoadingContentInformationRequest, TTAVAssetResourceLoadingDataRequest;

@interface TTAVAssetResourceLoadingRequest : NSObject
{
    _Bool _finished;
    _Bool _cancelled;
    TTAVAssetResourceLoadingContentInformationRequest *_contentInformationRequest;
    TTAVAssetResourceLoadingDataRequest *_dataRequest;
    NSURL *_requestUrl;
}

@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(copy, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) TTAVAssetResourceLoadingDataRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) TTAVAssetResourceLoadingContentInformationRequest *contentInformationRequest; // @synthesize contentInformationRequest=_contentInformationRequest;
- (void).cxx_destruct;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;

@end
