//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DjangoRequest : NSObject
{
}

+ (id)getUUid;
+ (id)addParameters:(id)arg1 toUrlString:(id)arg2;
+ (id)encodeParameters:(id)arg1;
+ (id)urlEscapeString:(id)arg1;
+ (id)commonParametersWithDjangoId:(id)arg1 token:(id)arg2;
+ (id)traceId;

@end
