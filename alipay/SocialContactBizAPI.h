//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SocialContactBizAPI : NSObject
{
}

+ (void)forwardWithDataContactList:(id)arg1 forwardDic:(id)arg2 isMultiMessage:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)forwardShowCardWithDataContactList:(id)arg1 forwardDic:(id)arg2 isMultiMessage:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)generateControllerName:(id)arg1;
+ (id)pickFromCombinedContactVCWithParamDict:(id)arg1 strangerCallback:(CDUnknownBlockType)arg2 selectCallback:(CDUnknownBlockType)arg3 backCallback:(CDUnknownBlockType)arg4;
+ (id)pickFromCombinedContactVCWithParamDict:(id)arg1 selectCallback:(CDUnknownBlockType)arg2 backCallback:(CDUnknownBlockType)arg3;
+ (id)pickFromCombinedContactVCWithDelegate:(id)arg1 paramDict:(id)arg2;

@end
