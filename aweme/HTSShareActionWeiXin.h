//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSShareAction-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class NSString;

@interface HTSShareActionWeiXin : NSObject <WXApiDelegate, HTSShareAction>
{
    long long _shareType;
    CDUnknownBlockType _openURLCompletion;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType openURLCompletion; // @synthesize openURLCompletion=_openURLCompletion;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 openURLCompletion:(CDUnknownBlockType)arg2;
- (void)_sendExtendInfoWithThumbImage:(id)arg1 title:(id)arg2 description:(id)arg3 extInfo:(id)arg4 withCallbackUserInfo:(id)arg5 wxScene:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_sendMiniProgramWithPath:(id)arg1 userName:(id)arg2 thumbImage:(id)arg3 URLString:(id)arg4 title:(id)arg5 description:(id)arg6 wxScene:(int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_sendVideoWithURLString:(id)arg1 thumbImage:(id)arg2 title:(id)arg3 description:(id)arg4 wxScene:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_sendWebPageWithThumbImage:(id)arg1 title:(id)arg2 description:(id)arg3 URLString:(id)arg4 wxScene:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_sendImage:(id)arg1 wxScene:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendEmoticonWithData:(id)arg1 thumbImage:(id)arg2 wxScene:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareWithShareType:(long long)arg1 shareContentModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithShareType:(long long)arg1 shareModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shareActionAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
