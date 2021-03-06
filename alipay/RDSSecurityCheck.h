//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface RDSSecurityCheck : NSObject
{
    NSMutableData *_headerBytes;
    NSMutableData *_codeSignBytes;
}

@property(retain, nonatomic) NSMutableData *codeSignBytes; // @synthesize codeSignBytes=_codeSignBytes;
@property(retain, nonatomic) NSMutableData *headerBytes; // @synthesize headerBytes=_headerBytes;
- (void).cxx_destruct;
- (_Bool)checkSecurityHeaderRestrictSection;
- (id)checkSignatureWithDefaultMobileProvisioning;
- (_Bool)getEncryptionStatus:(unsigned int)arg1 loadCommand:(struct load_command *)arg2;
- (void)queryBinaryFile;
- (void)getCodeSignBytes:(unsigned int)arg1 loadCommand:(struct load_command *)arg2 file:(struct __sFILE *)arg3;
- (void)getBinaryHashInfo;
- (id)getCodeSignByte;
- (id)getHeaderByte;
- (id)checkDylibTweak;
- (_Bool)checkEncryptionStatus;
- (_Bool)checkPIEStatus;
- (_Bool)checkAntiDebugStauts;
- (id)init;

@end

