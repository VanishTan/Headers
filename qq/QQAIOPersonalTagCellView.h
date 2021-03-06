//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCellView.h>

@class CALayer, QQAIOPersonalTagModel, UIImageView, UILabel, UIView;

@interface QQAIOPersonalTagCellView : QQAIOCellView
{
    UIView *_contentView;
    UIImageView *_imageView;
    UIImageView *_coverImgView;
    UILabel *_titleLabel;
    UIImageView *_leftImgView;
    UIImageView *_rightImgView;
    UILabel *_summaryLabel;
    CALayer *_highlightLayer;
    QQAIOPersonalTagModel *_model;
}

- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (id)coverImageResize:(id)arg1;
- (id)decodedImageWithImage:(id)arg1;
- (void)downdloadImage:(id)arg1;
- (id)personalUrl:(id)arg1;
- (void)displayImage:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAioModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

