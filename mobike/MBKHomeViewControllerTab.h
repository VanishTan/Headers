//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface MBKHomeViewControllerTab : NSObject
{
    unsigned long long _type;
    NSString *_tabName;
    UIViewController *_controller;
}

@property(retain, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 controller:(id)arg3;

@end

