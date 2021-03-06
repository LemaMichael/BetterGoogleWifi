//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "JETFamilyHubSetupWrapperDelegate-Protocol.h"
#import "JETFamilyHubStartEndTimeViewDelegate-Protocol.h"

@class GTLRAccesspoints_BlockingSchedule, JETAccessPointGroup, JETFamilyHubSetupWrapperView, JETFamilyHubStartEndTimeView, NSString;
@protocol JETUserStateProtocol;

@interface JETFamilyHubScheduleTimeViewController : UIViewController <JETFamilyHubSetupWrapperDelegate, JETFamilyHubStartEndTimeViewDelegate>
{
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    GTLRAccesspoints_BlockingSchedule *_schedule;
    JETFamilyHubSetupWrapperView *_wrapperView;
    JETFamilyHubStartEndTimeView *_timeView;
}

@property(nonatomic) __weak JETFamilyHubStartEndTimeView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) JETFamilyHubSetupWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) GTLRAccesspoints_BlockingSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (void)startEndTimeView:(id)arg1 didUpdateValidity:(_Bool)arg2;
- (void)nextButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)navigationStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 schedule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

