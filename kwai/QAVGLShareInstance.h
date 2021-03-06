//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, QAVGLImage;

@interface QAVGLShareInstance : NSObject
{
    EAGLContext *_context;
    unsigned int *_textureUniforms;
    unsigned int _rotateXMatrixUniform;
    unsigned int _rotateYMatrixUniform;
    unsigned int _rotateZMatrixUniform;
    unsigned int _positionAttributeLocation;
    unsigned int _texCoordAttributeLocation;
    unsigned int _vertexShaderHandle;
    unsigned int _fragmentShaderHandle;
    unsigned int _programHandle;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    unsigned int _boundsUniform;
    unsigned int _boundsCoordXUniform;
    unsigned int _boundsCoordYUniform;
    unsigned int _drawTypeUniform;
    unsigned int _vertexDrawTypeUniform;
    unsigned int _displayType;
    unsigned int _textureRotateUniform;
    unsigned int _textureBoundsUniform;
    unsigned int _textureScaleUniform;
    unsigned int _yuvTypeUniform;
    QAVGLImage *_loadingImage;
    unsigned int _textureRotateUinform;
}

+ (id)shareInstance;
@property(nonatomic) unsigned int drawTypeUniform; // @synthesize drawTypeUniform=_drawTypeUniform;
@property(nonatomic) unsigned int vertexDrawTypeUniform; // @synthesize vertexDrawTypeUniform=_vertexDrawTypeUniform;
@property(nonatomic) unsigned int yuvTypeUniform; // @synthesize yuvTypeUniform=_yuvTypeUniform;
@property(nonatomic) unsigned int textureScaleUniform; // @synthesize textureScaleUniform=_textureScaleUniform;
@property(nonatomic) unsigned int textureBoundsUniform; // @synthesize textureBoundsUniform=_textureBoundsUniform;
@property(nonatomic) unsigned int textureRotateUinform; // @synthesize textureRotateUinform=_textureRotateUinform;
@property(retain, nonatomic) QAVGLImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) unsigned int boundsCoordYUniform; // @synthesize boundsCoordYUniform=_boundsCoordYUniform;
@property(nonatomic) unsigned int boundsCoordXUniform; // @synthesize boundsCoordXUniform=_boundsCoordXUniform;
@property(nonatomic) unsigned int boundsUniform; // @synthesize boundsUniform=_boundsUniform;
@property(nonatomic) unsigned int rotateZMatrixUniform; // @synthesize rotateZMatrixUniform=_rotateZMatrixUniform;
@property(nonatomic) unsigned int rotateYMatrixUniform; // @synthesize rotateYMatrixUniform=_rotateYMatrixUniform;
@property(nonatomic) unsigned int rotateXMatrixUniform; // @synthesize rotateXMatrixUniform=_rotateXMatrixUniform;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int *textureUniforms; // @synthesize textureUniforms=_textureUniforms;
@property(nonatomic) unsigned int texCoordAttributeLocation; // @synthesize texCoordAttributeLocation=_texCoordAttributeLocation;
@property(nonatomic) unsigned int positionAttributeLocation; // @synthesize positionAttributeLocation=_positionAttributeLocation;
@property(nonatomic) unsigned int indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(nonatomic) unsigned int vetexBuffer; // @synthesize vetexBuffer=_vertexBuffer;
- (void)compileShaders;
- (void)destroyOpenGL;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)setupIndices;
- (void)setupVBO;
- (void)setupContext;
- (char *)getImageData:(id)arg1;
- (void)setuploadingImage;
- (void)initOpenGL;

@end

