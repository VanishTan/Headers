//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMapNaviViewUtility : NSObject
{
}

+ (double)angleFromNaviPoint:(id)arg1 toNaviPoint:(id)arg2;
+ (id)calcPointWithStartPoint:(id)arg1 endPoint:(id)arg2 rate:(double)arg3;
+ (double)distanceBetweenCoordinates:(id)arg1 andPoint:(id)arg2;
+ (double)calcDistanceBetweenPoint:(id)arg1 andPoint:(id)arg2;
+ (struct MAMapPoint)convertNaviPointToMapPoint:(id)arg1;
+ (id)convertMapPointToNaviPoint:(struct MAMapPoint)arg1;
+ (_Bool)doesThisSize:(struct CGSize)arg1 fitInThisSize:(struct CGSize)arg2;
+ (_Bool)wouldThisFont:(id)arg1 workForThisLabel:(id)arg2;
+ (void)adjustFontSizeForLabel:(id)arg1 andLabel:(id)arg2;
+ (double)normalizeDegree:(double)arg1;
+ (id)normalizedRemainTime:(long long)arg1;
+ (id)normalizedRemainDistanceEn:(long long)arg1;
+ (id)normalizedRemainDistance:(long long)arg1;

@end

