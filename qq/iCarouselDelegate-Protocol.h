//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class iCarousel;

@protocol iCarouselDelegate <NSObject>

@optional
- (double)carousel:(iCarousel *)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)carousel:(iCarousel *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)carouselItemWidth:(iCarousel *)arg1;
- (void)carousel:(iCarousel *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)carousel:(iCarousel *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)carouselDidEndDecelerating:(iCarousel *)arg1;
- (void)carouselWillBeginDecelerating:(iCarousel *)arg1;
- (void)carouselDidEndDragging:(iCarousel *)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselWillBeginDragging:(iCarousel *)arg1;
- (void)carouselCurrentItemIndexDidChange:(iCarousel *)arg1;
- (void)carouselDidScroll:(iCarousel *)arg1;
- (void)carouselDidEndScrollingAnimation:(iCarousel *)arg1;
- (void)carouselWillBeginScrollingAnimation:(iCarousel *)arg1;
@end

