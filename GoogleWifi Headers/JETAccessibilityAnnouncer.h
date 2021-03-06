//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer;
@protocol JETAccessibilityAnnouncerDelegate;

@interface JETAccessibilityAnnouncer : NSObject
{
    id <JETAccessibilityAnnouncerDelegate> _delegate;
    NSMutableArray *_scheduledAnnouncements;
    NSString *_currentAnnouncement;
    NSTimer *_initialDelayTimer;
}

@property(retain, nonatomic) NSTimer *initialDelayTimer; // @synthesize initialDelayTimer=_initialDelayTimer;
@property(copy, nonatomic) NSString *currentAnnouncement; // @synthesize currentAnnouncement=_currentAnnouncement;
@property(retain, nonatomic) NSMutableArray *scheduledAnnouncements; // @synthesize scheduledAnnouncements=_scheduledAnnouncements;
@property(nonatomic) __weak id <JETAccessibilityAnnouncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runNextScheduledAnnouncement;
- (void)scheduleAnnouncement:(id)arg1;
- (void)onDidFinishNotification:(id)arg1;
- (_Bool)isIdle;
- (void)onInitialDelayCompleted:(id)arg1;
- (void)dealloc;
- (id)initWithInitialDelay:(double)arg1;

@end

