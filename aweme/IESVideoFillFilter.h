//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@interface IESVideoFillFilter : HTSGLFilter
{
    float _width;
    float _height;
    struct CGSize _outputSize;
}

@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;

@end
