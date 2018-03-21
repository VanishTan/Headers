//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PhotoBrowserBaseViewContoller.h>

@class QZonePhotoWallCacheInfo;

@interface QZCoverPhotoBrowserViewController : PhotoBrowserBaseViewContoller
{
    long long _uin;
    _Bool _enableLoadMore;
    QZonePhotoWallCacheInfo *_photoWallCacheInfo;
    long long _requestId;
    long long _delRequestId;
    long long _delIndex;
}

- (void).cxx_destruct;
- (void)ForwardToWeChat:(id)arg1;
- (void)SaveToAlbum:(id)arg1;
- (void)ForwardToQQ:(id)arg1;
- (void)onNotifyGetPhotoWall:(id)arg1;
- (void)hidePhotoBrowser;
- (id)getToolbarItems;
- (void)longPressDetected;
- (id)getToolbar;
- (void)updatePageControl;
- (_Bool)canShowPageControl;
- (void)didScrollToPage:(int)arg1;
- (void)viewDidLoad;
- (void)setPhotoWallCacheInfo:(id)arg1 firstVisibleIndex:(long long)arg2 visibleRects:(id)arg3 thumbRects:(id)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool enableLoadMore; // @dynamic enableLoadMore;
@property(nonatomic) long long uin; // @dynamic uin;

@end
