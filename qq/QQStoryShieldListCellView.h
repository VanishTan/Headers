//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, TBQQUserInfoModel, UIButton, UILabel;
@protocol QQStoryShieldListCellViewProtocol;

@interface QQStoryShieldListCellView : UIView
{
    TBQQUserInfoModel *_infoModel;
    QQAvatarView *_headImgView;
    UILabel *_nameLabel;
    UIButton *_removeBtn;
    id <QQStoryShieldListCellViewProtocol> _delegate;
}

@property(nonatomic) id <QQStoryShieldListCellViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void)removeBtnCliked;
- (void)refresh;
- (void)setInfoModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

