//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LDNetGetAddress : NSObject
{
}

+ (id)formatIPV4Address:(struct in_addr)arg1;
+ (id)formatIPV6Address:(struct in6_addr)arg1;
+ (int)getNetworkTypeFromStatusBar;
+ (id)outPutDNSServers;
+ (id)getIPV6DNSWithHostName:(id)arg1;
+ (id)getIPV4DNSWithHostName:(id)arg1;
+ (id)getDNSsWithDormain:(id)arg1;
+ (id)getGatewayIPV6Address;
+ (id)getGatewayIPV4Address;
+ (id)getGatewayIPAddress;
+ (id)deviceIPAdress;
+ (id)ipv6WithIp:(id)arg1;
+ (id)ipv4WithIp:(id)arg1;
+ (_Bool)isIpv6WithIpString:(id)arg1;
+ (id)validatedIpWithIpString:(id)arg1;

@end
