//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSString, UITableViewCell;

@interface ALPMemberCardListModel : O2OHTTPListModel
{
    NSString *_passId;
    double _latitude;
    double _longitude;
    UITableViewCell *_headCell;
}

@property(retain, nonatomic) UITableViewCell *headCell; // @synthesize headCell=_headCell;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (id)operationType;
- (id)fetchAuxiliaryArrayResult:(id)arg1;
- (id)responseObjects:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)cacheKey;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (struct requestConfig)requestConfig;
- (id)spmKey;
- (id)key;

@end
