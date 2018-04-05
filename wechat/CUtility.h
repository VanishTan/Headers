//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUtility : NSObject
{
}

+ (_Bool)isBeingDebugged;
+ (int)getGeneralNetworkType;
+ (int)getWebpNetworkType;
+ (id)genWebpUrlWithOriUrl:(id)arg1;
+ (_Bool)isNeedUseWebpFormatUrl:(id)arg1;
+ (id)getMatchFullPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (id)getMatchShortPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (_Bool)hasPinYinPrefix:(id)arg1 searchText:(id)arg2 options:(unsigned long long)arg3;
+ (_Bool)isEnglishLetter:(unsigned short)arg1;
+ (_Bool)isTrailSurrogates:(unsigned short)arg1;
+ (_Bool)isLeadSurrogates:(unsigned short)arg1;
+ (_Bool)isValidWeChatID:(id)arg1;
+ (_Bool)containOnlyLetterOrDigit:(id)arg1;
+ (_Bool)isNumber:(id)arg1;
+ (_Bool)isEnglishWord:(id)arg1;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)GetEmoticonLinkPid:(id)arg1;
+ (id)imageBorderFromColor:(id)arg1 size:(struct CGSize)arg2 conerSize:(double)arg3;
+ (id)imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)ellipseImageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)snapshotForUIView:(id)arg1;
+ (id)GetKeyValueFromPB:(id)arg1;
+ (id)dumpSqlString:(id)arg1;
+ (id)filterAllWhiteSpaceAndNewLineString:(id)arg1;
+ (id)filterWhiteSpaceAndNewLineString:(id)arg1;
+ (id)filterString:(id)arg1;
+ (id)trimString:(id)arg1;
+ (id)GetExcutablePath;
+ (void)ClearAllWebViewCookies;
+ (void)UpdateUserAgent;
+ (id)GetMMUserAgent;
+ (id)GetUserAgentSuffix;
+ (int)imageTypeForImageData:(id)arg1;
+ (void)ReportFailIPToNewDNS:(id)arg1;
+ (id)DoNewDns:(id)arg1;
+ (id)DoNewDnsForSns:(id)arg1 DnsType:(unsigned int *)arg2 IsOldData:(_Bool)arg3;
+ (id)DoNewDns:(id)arg1 DnsType:(unsigned int *)arg2;
+ (id)DoDns:(id)arg1;
+ (id)GetDNSServers;
+ (id)md5OfString:(id)arg1;
+ (_Bool)isGIFFile:(id)arg1;
+ (int)DecodePack:(id)arg1 Output:(id)arg2 DESKey:(char *)arg3 KeyLen:(unsigned int)arg4;
+ (id)SafeUnarchiveFromData:(id)arg1;
+ (id)SafeUnarchive:(id)arg1 hasError:(_Bool *)arg2;
+ (id)SafeUnarchive:(id)arg1;
+ (struct CLLocationCoordinate2D)MakeLocationCoordinate2D:(double)arg1 andLongitude:(double)arg2;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)getDomainName:(id)arg1;
+ (id)ReplaceClientVersion:(id)arg1;
+ (id)GetMimeTypeByFileExt:(id)arg1;
+ (id)getIconNameByFileType:(int)arg1 iconSize:(int)arg2;
+ (id)getIconNameByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)getFavIconNameByFileExt:(id)arg1;
+ (id)getFavIconImageByFileExt:(id)arg1;
+ (int)getFileTypeByFileExt:(id)arg1;
+ (id)getIconImageByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)UTF8HexToNSString:(id)arg1;
+ (id)NSStringToUTF8Hex:(id)arg1;
+ (_Bool)IsFacebookAuthName:(id)arg1;
+ (id)SafeUtf8WithCString:(const char *)arg1;
+ (_Bool)CheckSyncMediaNote:(id)arg1;
+ (id)componentsSeparated:(id)arg1 byString:(id)arg2;
+ (_Bool)IsCurLanguageChineseTraditional;
+ (id)getCurSystemLanguage;
+ (id)getSystemTimeZoneString;
+ (_Bool)IsURLFromAppStore:(id)arg1;
+ (unsigned int)getRegSrcVersionNum;
+ (id)stringOfFriendlySizeForApple:(double)arg1 maxFractionDigits:(unsigned long long)arg2;
+ (id)stringOfFriendlySize:(double)arg1 maxFractionDigits:(unsigned long long)arg2;
+ (id)SyncBufferToString:(id)arg1;
+ (id)MergeSyncBuffer:(id)arg1 NewBuffer:(id)arg2;
+ (id)IntToIPString:(unsigned int)arg1;
+ (id)SockAddrToIPV4String:(struct sockaddr_in *)arg1;
+ (unsigned int)IPStringToInt:(id)arg1;
+ (_Bool)NeedNewSync:(unsigned int)arg1;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned int)genCurrentTime;
+ (unsigned int)genServerCurrentTime;
+ (unsigned int)genServerCurrentTimeNotABTest;
+ (_Bool)isStartPhoneTimeChanged;
+ (unsigned int)ChatNotifyC2S:(unsigned int)arg1;
+ (unsigned int)ChatNotifyS2C:(unsigned int)arg1;
+ (unsigned int)CheckUsrNameType:(id)arg1;
+ (_Bool)isEnterpriseSingleUsrName:(id)arg1;
+ (_Bool)isEnterpriseUsrName:(id)arg1;
+ (id)ReplaceSingleQuote:(id)arg1;
+ (id)ReplaceInvalidChar:(id)arg1;
+ (_Bool)is64BitEnvironment;
+ (void)PrintClientInfo;
+ (id)ParseFullVersionString:(unsigned int)arg1;
+ (id)ParseVersionString:(unsigned int)arg1;
+ (void)ParseVersion:(unsigned int)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4;
+ (void)SetNewVersion:(unsigned int)arg1;
+ (unsigned int)GetVersionFromPList;
+ (unsigned int)GetVersion;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)EncodeWithBase64:(id)arg1;
+ (id)DecodeBase64:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)EncodeBase64:(id)arg1;
+ (id)GetSystemCachePath;
+ (id)GetLibraryCachePath;
+ (id)GetTmpPath;
+ (id)GetDocPath;
+ (id)GetPathOfLocationCache;
+ (id)GetPathOfURLCache;
+ (id)GetDownloadPathOfEmoticonPackage:(id)arg1;
+ (id)GetPathOfTempPackage:(id)arg1;
+ (id)GetThumbPathOfPackage:(id)arg1;
+ (id)GetPathOfPackage:(id)arg1;
+ (id)GetPathOfMassShortVideoDir:(id)arg1 andVideoName:(id)arg2 DocPath:(id)arg3;
+ (id)getPathOfMsgVcodec2NormalImg:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2HDImg:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2Img:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2ImgThumb:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfVcodec2ImageDir:(id)arg1 docPath:(id)arg2;
+ (id)getPathOfVcodec2ImageDir:(id)arg1;
+ (id)getPathOfVcodec2ToJpgTmpDir:(id)arg1 docPath:(id)arg2;
+ (id)GetTempPathOfDocVideoPath:(id)arg1 ensureCreate:(_Bool)arg2;
+ (id)GetPathOfMesOpenDataDir:(id)arg1;
+ (id)GetPathOfMesOpenDataDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfTempCacheVideo;
+ (unsigned int)getCrc32ClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (id)GetClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (id)GetPathOfMesVideoDir:(id)arg1;
+ (id)GetPathOfMesVideoThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetTempPathOfMesVideo:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesVideo:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesVideoDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfWebMesAudioTrans:(id)arg1 LocalID:(id)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudioDir:(id)arg1;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudioDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesSettingDir;
+ (id)GetPathOfMesImgDir:(id)arg1;
+ (id)GetPathOfDraftUsrDir;
+ (id)GetPathOfMesHDImgTemp:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgTemp:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMaskedMesVideoThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMaskedMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImg:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMiddleImgForSender:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImg:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfProductItem:(id)arg1;
+ (id)GetPathOfProductDetail;
+ (id)GetPathOfAlbumCoverRootPath;
+ (id)GetPathOfLyricsRootPath;
+ (id)GetPathOfSnsMusicStoragePB;
+ (id)GetPathOfShakeBkgUp;
+ (id)GetPathOfShakeBeaconStorage;
+ (id)GetPathOfShakeBeaconStoragePB;
+ (id)GetPathOfShakeTvMsgStorage;
+ (id)GetPathOfShakeTvStorage;
+ (id)GetPathOfShakeTvStoragePB;
+ (id)GetPathOfShakeMusicStorage;
+ (id)GetPathOfShakeMusicStoragePB;
+ (id)GetPathOfSHakePeopleStorage;
+ (id)GetPathOfShakePeopleStoragePB;
+ (id)GetUserAlbumRootDir;
+ (id)GetRandomPathOfTrash;
+ (id)GetRootPathOfTrash;
+ (id)GetPathOfWCRedEnvelopesBaseFile;
+ (id)GetPathOfJSApiLocalDataFile:(id)arg1 CurrentUrl:(id)arg2;
+ (id)GetPathOfJSApiLocalDataBaseFile;
+ (id)GetPathOfWCPayBaseFile;
+ (id)GetPathOfWCMallBaseFile;
+ (id)GetPathOfWCAddressBaseFile;
+ (id)GetPathOfSystemAuthorization;
+ (id)GetPathOfWeSport;
+ (id)GetPathOfBakChat;
+ (id)GetPathOfFileTempPath;
+ (id)GetPathOfShakeBgImg;
+ (id)GetPathOfShakeBgImgTmp:(unsigned int)arg1;
+ (id)GetPathOfUsrShakeImg:(id)arg1;
+ (id)GetPathOfCacheLocalUsrDir;
+ (id)GetPathOfLocalUsrDir;
+ (void)SetPathOfLocalUsrDir;
+ (id)GetPathOfLocalUsrDirAsync;
+ (id)GetPathOfUsrWCBKSetting;
+ (id)GetPathOfUsrChatBKSetting;
+ (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)GetMd5StrOfUsr:(id)arg1;
+ (id)GetMd5StrsOfOtherUsrs;
+ (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)GetMd5StrOfLocalUsr;
+ (void)SetLocalUsrNameMD5:(id)arg1;
+ (id)GetHttpEndData;
+ (char *)NewStrFromNSStr:(id)arg1;
+ (id)GetRandomMD5;
+ (const void *)computeKey:(id)arg1 fromString:(id)arg2;
+ (unsigned int)GenSeq;
+ (unsigned int)GenID;
+ (long long)GetNetWorkReachable;
+ (id)GetRandomKeyWithSalt:(id)arg1;
+ (id)GetRandomKey;
+ (id)GetRandomUUID;
+ (void)Initial;
+ (id)obfuscate:(id)arg1 withKey:(id)arg2;
+ (id)GetUUIDNew;
+ (_Bool)isLaunchBeforeDeviceFirstUnlock;
+ (_Bool)IsNotBackupPath:(id)arg1;
+ (_Bool)SetDoNotBackupForPath:(id)arg1;
+ (id)hashForString:(id)arg1;
+ (id)hashPathForString:(id)arg1;

@end

