//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class NSMutableArray;

@interface DNSIPItem : QZoneModel
{
    NSMutableArray *_DNSIPs;
    double _lastVisitTime;
    double _DNSParseTime;
}

@property(nonatomic) double DNSParseTime; // @synthesize DNSParseTime=_DNSParseTime;
@property(nonatomic) double lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(retain, nonatomic) NSMutableArray *DNSIPs; // @synthesize DNSIPs=_DNSIPs;
- (void).cxx_destruct;

@end

