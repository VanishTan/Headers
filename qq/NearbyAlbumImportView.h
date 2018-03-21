//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol NearbyAlbumImportViewDelegate;

@interface NearbyAlbumImportView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_descriptionLabel;
    UIButton *_importButton;
    id <NearbyAlbumImportViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NearbyAlbumImportViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)importAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
