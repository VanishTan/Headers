//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VRGLProgram : NSObject
{
    unsigned int _program;
}

+ (void)checkForError:(const char *)arg1 line:(int)arg2;
@property(nonatomic) unsigned int program; // @synthesize program=_program;
- (void)dealloc;
- (_Bool)link:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (id)initWithShaders:(id)arg1 fragmentShader:(id)arg2;
- (void)initShader:(id)arg1 fragmentShader:(id)arg2;

@end

