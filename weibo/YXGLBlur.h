//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXGLVideoEffectBase.h"

@interface YXGLBlur : YXGLVideoEffectBase
{
    int _inputWidth;
    int _inputHeight;
}

@property(nonatomic) int inputHeight; // @synthesize inputHeight=_inputHeight;
@property(nonatomic) int inputWidth; // @synthesize inputWidth=_inputWidth;
- (void)freeBlurEffect;
- (unsigned int)BlurEffect:(int)arg1 hflip:(_Bool)arg2;
- (void)createBlurEffect:(int)arg1 outputHeight:(int)arg2;

@end

