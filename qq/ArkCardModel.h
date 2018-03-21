//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ArkKeyword, ArkUIView, NSDictionary, NSNumber, NSString, UIImage;

@interface ArkCardModel : NSObject
{
    _Bool _equalInputText;
    _Bool _isBabyMsg;
    _Bool _usingDefaultCardWidth;
    _Bool _canSend;
    _Bool _createArkViewAsync;
    _Bool _showShareMenu;
    int _contextMatchType;
    int _accostType;
    int _flag;
    NSString *_appPath;
    NSString *_appName;
    NSString *_appViewName;
    NSString *_appVersion;
    NSString *_meta;
    NSString *_appViewID;
    ArkKeyword *_keyword;
    NSString *_prompt;
    NSString *_appDescription;
    NSString *_context;
    NSObject *_messageModel;
    NSString *_source;
    UIImage *_sourceIcon;
    long long _createArkViewErrorCode;
    NSString *_createArkViewErrorMessage;
    ArkUIView *_arkCardView;
    unsigned long long _arkViewCreationState;
    id _extra;
    NSString *_reportMsgId;
    NSNumber *_reportTypeNum;
    NSString *_reportExtra;
    struct CGSize _cardSize;
}

+ (id)cardModelWithAppInfo:(id)arg1 accostType:(int)arg2 isBabyQMsg:(_Bool)arg3;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *reportExtra; // @synthesize reportExtra=_reportExtra;
@property(copy, nonatomic) NSNumber *reportTypeNum; // @synthesize reportTypeNum=_reportTypeNum;
@property(copy, nonatomic) NSString *reportMsgId; // @synthesize reportMsgId=_reportMsgId;
@property(copy, nonatomic) id extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool showShareMenu; // @synthesize showShareMenu=_showShareMenu;
@property(nonatomic) unsigned long long arkViewCreationState; // @synthesize arkViewCreationState=_arkViewCreationState;
@property(retain, nonatomic) ArkUIView *arkCardView; // @synthesize arkCardView=_arkCardView;
@property(copy, nonatomic) NSString *createArkViewErrorMessage; // @synthesize createArkViewErrorMessage=_createArkViewErrorMessage;
@property(nonatomic) long long createArkViewErrorCode; // @synthesize createArkViewErrorCode=_createArkViewErrorCode;
@property(nonatomic) _Bool createArkViewAsync; // @synthesize createArkViewAsync=_createArkViewAsync;
@property(nonatomic) struct CGSize cardSize; // @synthesize cardSize=_cardSize;
@property(nonatomic) _Bool canSend; // @synthesize canSend=_canSend;
@property(retain, nonatomic) UIImage *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak NSObject *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) _Bool usingDefaultCardWidth; // @synthesize usingDefaultCardWidth=_usingDefaultCardWidth;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *appDescription; // @synthesize appDescription=_appDescription;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) _Bool isBabyMsg; // @synthesize isBabyMsg=_isBabyMsg;
@property(nonatomic) int accostType; // @synthesize accostType=_accostType;
@property(nonatomic) int contextMatchType; // @synthesize contextMatchType=_contextMatchType;
@property(nonatomic) _Bool equalInputText; // @synthesize equalInputText=_equalInputText;
@property(retain, nonatomic) ArkKeyword *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *appViewID; // @synthesize appViewID=_appViewID;
@property(copy, nonatomic) NSString *meta; // @synthesize meta=_meta;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appViewName; // @synthesize appViewName=_appViewName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dump;
- (_Bool)isAppDataEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *metaDic;
- (id)init;

@end
