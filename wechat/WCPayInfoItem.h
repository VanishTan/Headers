//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayInfoItem : NSObject <PBCoding, NSCopying>
{
    unsigned int m_uiPaySubType;
    NSString *m_nsFeeDesc;
    NSString *m_nsTranscationID;
    unsigned int m_uiInvalidTime;
    unsigned int m_uiBeginTransferTime;
    NSString *m_nsTransferID;
    unsigned int m_uiEffectiveDate;
    unsigned int m_templateID;
    NSString *m_c2cUrl;
    NSString *m_c2cNativeUrl;
    NSString *m_c2cIconUrl;
    NSString *m_receiverTitle;
    NSString *m_receiverDesc;
    NSString *m_senderTitle;
    NSString *m_senderDesc;
    NSString *m_hintText;
    NSString *m_sceneText;
    NSString *m_total_fee;
    NSString *m_fee_type;
    unsigned int m_c2c_msg_subtype;
    NSString *m_nsPayMsgID;
    NSString *m_payMemo;
    NSString *m_nsImageID;
    NSString *m_nsImageAesKey;
    unsigned int m_uiImageLength;
    unsigned int m_sceneId;
    NSString *m_aaOrderBillNum;
    unsigned int m_aaNewAAType;
    NSString *m_aaLauncherTitle;
    NSString *m_aaNotinerTitle;
    NSString *m_aaReceiverTitle;
    NSString *m_aaReceiverList;
    NSString *m_aaPayerTitle;
    NSString *m_aaPayerList;
    NSString *m_aaLauncherUsername;
    NSString *m_c2cLocalLogoIcon;
    int m_redEnvelopeType;
    long long m_redEnvelopeReceiveAmount;
    NSString *m_c2cLocalBubbleImage;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *m_c2cLocalBubbleImage; // @synthesize m_c2cLocalBubbleImage;
@property(retain, nonatomic) NSString *m_c2cLocalLogoIcon; // @synthesize m_c2cLocalLogoIcon;
@property(nonatomic) long long m_redEnvelopeReceiveAmount; // @synthesize m_redEnvelopeReceiveAmount;
@property(nonatomic) int m_redEnvelopeType; // @synthesize m_redEnvelopeType;
@property(retain, nonatomic) NSString *m_aaLauncherUsername; // @synthesize m_aaLauncherUsername;
@property(retain, nonatomic) NSString *m_aaPayerList; // @synthesize m_aaPayerList;
@property(retain, nonatomic) NSString *m_aaPayerTitle; // @synthesize m_aaPayerTitle;
@property(retain, nonatomic) NSString *m_aaReceiverList; // @synthesize m_aaReceiverList;
@property(retain, nonatomic) NSString *m_aaReceiverTitle; // @synthesize m_aaReceiverTitle;
@property(retain, nonatomic) NSString *m_aaNotinerTitle; // @synthesize m_aaNotinerTitle;
@property(retain, nonatomic) NSString *m_aaLauncherTitle; // @synthesize m_aaLauncherTitle;
@property(nonatomic) unsigned int m_aaNewAAType; // @synthesize m_aaNewAAType;
@property(retain, nonatomic) NSString *m_aaOrderBillNum; // @synthesize m_aaOrderBillNum;
@property(nonatomic) unsigned int m_sceneId; // @synthesize m_sceneId;
@property(nonatomic) unsigned int m_uiImageLength; // @synthesize m_uiImageLength;
@property(retain, nonatomic) NSString *m_nsImageAesKey; // @synthesize m_nsImageAesKey;
@property(retain, nonatomic) NSString *m_nsImageID; // @synthesize m_nsImageID;
@property(retain, nonatomic) NSString *m_payMemo; // @synthesize m_payMemo;
@property(retain, nonatomic) NSString *m_nsPayMsgID; // @synthesize m_nsPayMsgID;
@property(nonatomic) unsigned int m_c2c_msg_subtype; // @synthesize m_c2c_msg_subtype;
@property(retain, nonatomic) NSString *m_c2cNativeUrl; // @synthesize m_c2cNativeUrl;
@property(retain, nonatomic) NSString *m_fee_type; // @synthesize m_fee_type;
@property(retain, nonatomic) NSString *m_total_fee; // @synthesize m_total_fee;
@property(retain, nonatomic) NSString *m_senderDesc; // @synthesize m_senderDesc;
@property(retain, nonatomic) NSString *m_receiverDesc; // @synthesize m_receiverDesc;
@property(retain, nonatomic) NSString *m_sceneText; // @synthesize m_sceneText;
@property(retain, nonatomic) NSString *m_hintText; // @synthesize m_hintText;
@property(retain, nonatomic) NSString *m_senderTitle; // @synthesize m_senderTitle;
@property(retain, nonatomic) NSString *m_receiverTitle; // @synthesize m_receiverTitle;
@property(retain, nonatomic) NSString *m_c2cIconUrl; // @synthesize m_c2cIconUrl;
@property(retain, nonatomic) NSString *m_c2cUrl; // @synthesize m_c2cUrl;
@property(nonatomic) unsigned int m_templateID; // @synthesize m_templateID;
@property(nonatomic) unsigned int m_uiEffectiveDate; // @synthesize m_uiEffectiveDate;
@property(nonatomic) unsigned int m_uiBeginTransferTime; // @synthesize m_uiBeginTransferTime;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(nonatomic) unsigned int m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsTranscationID; // @synthesize m_nsTranscationID;
@property(retain, nonatomic) NSString *m_nsFeeDesc; // @synthesize m_nsFeeDesc;
@property(nonatomic) unsigned int m_uiPaySubType; // @synthesize m_uiPaySubType;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

