//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPTGraph.h"

@interface CPTXYGraph : CPTGraph
{
    int xScaleType;
    int yScaleType;
}

@property(nonatomic) int yScaleType; // @synthesize yScaleType;
@property(nonatomic) int xScaleType; // @synthesize xScaleType;
- (id)newAxisSet;
- (id)newPlotSpace;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 xScaleType:(int)arg2 yScaleType:(int)arg3;

@end
