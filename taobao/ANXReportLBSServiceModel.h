//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ANXRPCRequestProtocol-Protocol.h"

@class ANXLogManager, ANXRuntimeConfig, DeviceLocationReqPb, NSDictionary, NSString;

@interface ANXReportLBSServiceModel : NSObject <ANXRPCRequestProtocol>
{
    DeviceLocationReqPb *_requestPB;
    ANXLogManager *_logManager;
    NSDictionary *_params;
    ANXRuntimeConfig *_runtimeConfig;
}

@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
@property(retain, nonatomic) DeviceLocationReqPb *requestPB; // @synthesize requestPB=_requestPB;
- (void).cxx_destruct;
- (id)ANXRPCComponentHeaders;
- (id)ANXRPCComponentBody;
- (id)ANXRPCComponentMethod;
- (void)initializeFoundation;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
