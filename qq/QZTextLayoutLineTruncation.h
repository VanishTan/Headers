//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZTextLayoutLine.h>

@interface QZTextLayoutLineTruncation : QZTextLayoutLine
{
    _Bool _isWrapping;
    unsigned int _truncationType;
    double _availableSpace;
}

@property(nonatomic) _Bool isWrapping; // @synthesize isWrapping=_isWrapping;
@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) unsigned int truncationType; // @synthesize truncationType=_truncationType;
- (struct __CTLine *)QZTextCreateCTLineWithStyle:(id)arg1 range:(struct _NSRange)arg2 styleRange:(struct _NSRange *)arg3;
- (void)calculateTextRect;
- (id)initWithLineText:(id)arg1 lineRage:(struct _NSRange)arg2 textRect:(struct QZTextRect)arg3;

@end

