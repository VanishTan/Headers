//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEGlobalTips : MTLModel <MTLJSONSerializing>
{
    NSString *_notComment;
    NSString *_shareFail;
    NSString *_notShare;
    NSString *_draftPublish;
    NSString *_atTooMore;
    NSString *_netWeak;
    NSString *_searchTip;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *searchTip; // @synthesize searchTip=_searchTip;
@property(retain, nonatomic) NSString *netWeak; // @synthesize netWeak=_netWeak;
@property(retain, nonatomic) NSString *atTooMore; // @synthesize atTooMore=_atTooMore;
@property(retain, nonatomic) NSString *draftPublish; // @synthesize draftPublish=_draftPublish;
@property(retain, nonatomic) NSString *notShare; // @synthesize notShare=_notShare;
@property(retain, nonatomic) NSString *shareFail; // @synthesize shareFail=_shareFail;
@property(retain, nonatomic) NSString *notComment; // @synthesize notComment=_notComment;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
