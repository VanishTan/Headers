//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTLauncherWidgetGroupObject.h"

@class APContactBaseViewController, ContactAppLauncher;

@interface SocialWidgetGroup : DTLauncherWidgetGroupObject
{
    ContactAppLauncher *_contactAppLauncher;
    APContactBaseViewController *_rootVC;
}

@property(retain, nonatomic) APContactBaseViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) ContactAppLauncher *contactAppLauncher; // @synthesize contactAppLauncher=_contactAppLauncher;
- (void).cxx_destruct;
- (id)badgeValue;
- (void)refresh;
- (void)setName:(id)arg1;
- (id)name;
- (id)launcher;
- (void)setLauncher:(id)arg1;
- (id)allWidgets;
- (id)indicatorView;
- (id)contentViewController;
- (id)init;

@end
