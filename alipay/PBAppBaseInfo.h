//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface PBAppBaseInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAppId;
    _Bool _hasName;
    _Bool _hasIcoUrl;
    _Bool _hasDesc;
    _Bool _hasSlogan;
    _Bool _hasVersion;
    _Bool _hasPkgUrl;
    _Bool _hasPkgUrlNew;
    _Bool _hasPkgSize;
    _Bool _hasMd5;
    _Bool _hasIncrementPkgUrl;
    _Bool _hasH5AppCdnBaseUrl;
    _Bool _hasPkgType;
    _Bool _hasStatus;
    _Bool _hasAlipayApp;
    _Bool _hasAppSource;
    _Bool _hasThirdPkgName;
    _Bool _hasSchemaUri;
    _Bool _hasPageUrl;
    _Bool _hasExtra;
    _Bool _hasDisplay;
    _Bool _hasRecommand;
    _Bool _hasNeedAuthorize;
    _Bool _hasAutoAuthorize;
    _Bool _hasAutoStatus;
    _Bool _hasDownloadScene;
    _Bool _hasAppIcon;
    _Bool _hasAppTag;
    _Bool _hasAppIdAlias;
    _Bool _hasTinyApp;
    _Bool _hasUpdateFrequency;
    _Bool _alipayApp;
    _Bool _display;
    _Bool _recommand;
    _Bool _needAuthorize;
    _Bool _autoAuthorize;
    _Bool _autoStatus;
    _Bool _tinyApp;
    int _pkgSize;
    int _pkgType;
    int _status;
    int _appSource;
    int _downloadScene;
    int _updateFrequency;
    NSString *_appId;
    NSString *_name;
    NSString *_icoUrl;
    NSString *_desc;
    NSString *_slogan;
    NSString *_version;
    NSString *_pkgUrl;
    NSString *_pkgUrlNew;
    NSString *_md5;
    NSString *_incrementPkgUrl;
    NSString *_h5AppCdnBaseUrl;
    NSString *_thirdPkgName;
    NSString *_schemaUri;
    NSString *_pageUrl;
    NSString *_extra;
    NSString *_appIcon;
    NSString *_appTag;
    NSString *_appIdAlias;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property(nonatomic) _Bool tinyApp; // @synthesize tinyApp=_tinyApp;
@property(retain, nonatomic) NSString *appIdAlias; // @synthesize appIdAlias=_appIdAlias;
@property(retain, nonatomic) NSString *appTag; // @synthesize appTag=_appTag;
@property(retain, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(nonatomic) int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) _Bool autoStatus; // @synthesize autoStatus=_autoStatus;
@property(nonatomic) _Bool autoAuthorize; // @synthesize autoAuthorize=_autoAuthorize;
@property(nonatomic) _Bool needAuthorize; // @synthesize needAuthorize=_needAuthorize;
@property(nonatomic) _Bool recommand; // @synthesize recommand=_recommand;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *schemaUri; // @synthesize schemaUri=_schemaUri;
@property(retain, nonatomic) NSString *thirdPkgName; // @synthesize thirdPkgName=_thirdPkgName;
@property(nonatomic) int appSource; // @synthesize appSource=_appSource;
@property(nonatomic) _Bool alipayApp; // @synthesize alipayApp=_alipayApp;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int pkgType; // @synthesize pkgType=_pkgType;
@property(retain, nonatomic) NSString *h5AppCdnBaseUrl; // @synthesize h5AppCdnBaseUrl=_h5AppCdnBaseUrl;
@property(retain, nonatomic) NSString *incrementPkgUrl; // @synthesize incrementPkgUrl=_incrementPkgUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int pkgSize; // @synthesize pkgSize=_pkgSize;
@property(retain, nonatomic) NSString *pkgUrlNew; // @synthesize pkgUrlNew=_pkgUrlNew;
@property(retain, nonatomic) NSString *pkgUrl; // @synthesize pkgUrl=_pkgUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icoUrl; // @synthesize icoUrl=_icoUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly) _Bool hasUpdateFrequency; // @synthesize hasUpdateFrequency=_hasUpdateFrequency;
@property(readonly) _Bool hasTinyApp; // @synthesize hasTinyApp=_hasTinyApp;
@property(readonly) _Bool hasAppIdAlias; // @synthesize hasAppIdAlias=_hasAppIdAlias;
@property(readonly) _Bool hasAppTag; // @synthesize hasAppTag=_hasAppTag;
@property(readonly) _Bool hasAppIcon; // @synthesize hasAppIcon=_hasAppIcon;
@property(readonly) _Bool hasDownloadScene; // @synthesize hasDownloadScene=_hasDownloadScene;
@property(readonly) _Bool hasAutoStatus; // @synthesize hasAutoStatus=_hasAutoStatus;
@property(readonly) _Bool hasAutoAuthorize; // @synthesize hasAutoAuthorize=_hasAutoAuthorize;
@property(readonly) _Bool hasNeedAuthorize; // @synthesize hasNeedAuthorize=_hasNeedAuthorize;
@property(readonly) _Bool hasRecommand; // @synthesize hasRecommand=_hasRecommand;
@property(readonly) _Bool hasDisplay; // @synthesize hasDisplay=_hasDisplay;
@property(readonly) _Bool hasExtra; // @synthesize hasExtra=_hasExtra;
@property(readonly) _Bool hasPageUrl; // @synthesize hasPageUrl=_hasPageUrl;
@property(readonly) _Bool hasSchemaUri; // @synthesize hasSchemaUri=_hasSchemaUri;
@property(readonly) _Bool hasThirdPkgName; // @synthesize hasThirdPkgName=_hasThirdPkgName;
@property(readonly) _Bool hasAppSource; // @synthesize hasAppSource=_hasAppSource;
@property(readonly) _Bool hasAlipayApp; // @synthesize hasAlipayApp=_hasAlipayApp;
@property(readonly) _Bool hasStatus; // @synthesize hasStatus=_hasStatus;
@property(readonly) _Bool hasPkgType; // @synthesize hasPkgType=_hasPkgType;
@property(readonly) _Bool hasH5AppCdnBaseUrl; // @synthesize hasH5AppCdnBaseUrl=_hasH5AppCdnBaseUrl;
@property(readonly) _Bool hasIncrementPkgUrl; // @synthesize hasIncrementPkgUrl=_hasIncrementPkgUrl;
@property(readonly) _Bool hasMd5; // @synthesize hasMd5=_hasMd5;
@property(readonly) _Bool hasPkgSize; // @synthesize hasPkgSize=_hasPkgSize;
@property(readonly) _Bool hasPkgUrlNew; // @synthesize hasPkgUrlNew=_hasPkgUrlNew;
@property(readonly) _Bool hasPkgUrl; // @synthesize hasPkgUrl=_hasPkgUrl;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasSlogan; // @synthesize hasSlogan=_hasSlogan;
@property(readonly) _Bool hasDesc; // @synthesize hasDesc=_hasDesc;
@property(readonly) _Bool hasIcoUrl; // @synthesize hasIcoUrl=_hasIcoUrl;
@property(readonly) _Bool hasName; // @synthesize hasName=_hasName;
@property(readonly) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
