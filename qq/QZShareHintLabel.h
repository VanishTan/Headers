//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@protocol QZEditAlbumCellDelegate;

@interface QZShareHintLabel : UILabel
{
    id <QZEditAlbumCellDelegate> _delegate;
    struct _NSRange _introductionRange;
}

@property(nonatomic) __weak id <QZEditAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _NSRange introductionRange; // @synthesize introductionRange=_introductionRange;
- (void).cxx_destruct;

@end
