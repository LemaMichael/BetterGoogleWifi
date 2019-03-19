//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETAccessPointGroup, JETFamilyHubTransactionHelper, NSArray, NSDateFormatter;
@protocol JETFamilyHubHelperDelegate, JETUserStateProtocol;

@interface JETFamilyHubHelper : NSObject
{
    id <JETFamilyHubHelperDelegate> _delegate;
    JETFamilyHubTransactionHelper *_transactionHelper;
    JETAccessPointGroup *_group;
    id <JETUserStateProtocol> _userState;
    NSDateFormatter *_dateFormatter;
    NSArray *_stationList;
}

+ (void)trySelectStations:(id)arg1 selectCompletion:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
+ (id)iconForSchedule:(id)arg1 largeVersion:(_Bool)arg2;
+ (id)largeScheduleIcon;
+ (id)scheduleIcon;
+ (id)largeBedtimeIcon;
+ (id)bedtimeIcon;
+ (id)largeHomeworkIcon;
+ (id)homeworkIcon;
+ (_Bool)isScheduleDisabled:(id)arg1;
+ (id)closestDurationForSchedule:(id)arg1 startingFromWeekday:(long long)arg2;
+ (id)dateForTimeOfDay:(id)arg1 onDayOfWeek:(long long)arg2 inTimeZoneWithID:(id)arg3 withRefrenceDate:(id)arg4;
+ (_Bool)isSchedule:(id)arg1 activeOnDate:(id)arg2;
+ (id)applyModification:(id)arg1 toDuration:(id)arg2 forDate:(id)arg3;
+ (_Bool)isScheduleCurrentlyActive:(id)arg1;
+ (id)durationDescriptionForSchedule:(id)arg1;
+ (id)sundayAbbreviationString;
+ (id)saturdayAbbreviationString;
+ (id)fridayAbbreviationString;
+ (id)thursdayAbbreviationString;
+ (id)wednesdayAbbreviationString;
+ (id)tuesdayAbbreviationString;
+ (id)mondayAbbreviationString;
+ (id)dayOfWeekToAbbreviationMappings;
+ (id)abbreviationStringForDayOfWeek:(id)arg1;
+ (id)selectedDaysDescriptionForSchedule:(id)arg1;
+ (id)presetDaysDescription:(id)arg1;
+ (id)presetWeekend;
+ (id)presetWeekdays;
+ (id)presetSchoolNights;
+ (id)presetAllWeek;
+ (id)localizedWeekdays;
+ (id)orderedWeek;
+ (double)lengthOfDuration:(id)arg1 withModification:(id)arg2;
+ (void)handleScheduleCreationConflict;
+ (id)descriptionForTimeOfDay:(id)arg1;
+ (id)endTimeDescriptionForSchedule:(id)arg1 modified:(_Bool)arg2;
+ (id)startTimeDescriptionForSchedule:(id)arg1 modified:(_Bool)arg2;
+ (id)activeTimeDescriptionForSchedule:(id)arg1;
+ (id)dayIntervalDescriptionForSchedule:(id)arg1;
+ (id)dayCountDescriptionForSchedule:(id)arg1;
+ (_Bool)isBlockingActiveForStationSetWithID:(id)arg1 inGroup:(id)arg2;
+ (_Bool)introductionHasRun;
@property(copy, nonatomic) NSArray *stationList; // @synthesize stationList=_stationList;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) JETFamilyHubTransactionHelper *transactionHelper; // @synthesize transactionHelper=_transactionHelper;
@property(nonatomic) __weak id <JETFamilyHubHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tryToggleBlockingForStation:(id)arg1 setBlockingCompletion:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)tryToggleBlockingForStationSet:(id)arg1 setBlockingCompletion:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (_Bool)isStationIncludedInActiveSchedules:(id)arg1;
- (_Bool)isStationSetIncludedInActiveSchedules:(id)arg1;
- (id)schedulesContainingStationSetWithID:(id)arg1;
- (_Bool)isStationSetIncludedInSchedules:(id)arg1;
@property(readonly, nonatomic) NSArray *pausedStations;
- (void)unpauseAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)unpauseAllDevicesWithCompletion:(CDUnknownBlockType)arg1 timeoutDate:(id)arg2;
- (void)deleteBlockingSchedule:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBlockingSchedule:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createBlockingSchedule:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFailureSettingBlocking:(_Bool)arg1 forStationID:(id)arg2;
- (void)handleFailureSettingBlocking:(_Bool)arg1 forStationSetID:(id)arg2;
- (void)updateAPWithFamilyHubPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2 operationBackloggedHandler:(CDUnknownBlockType)arg3;
- (id)scheduleDurationsForDays:(id)arg1 basedOnDuration:(id)arg2;
- (id)scheduleDayStringFromDayOfWeek:(unsigned long long)arg1;
- (id)pauseDescriptionForPolicy:(id)arg1;
- (id)pauseDescriptionForStationSetWithID:(id)arg1;
- (id)pauseDescriptionForStationWithID:(id)arg1;
- (void)deleteStationSetWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateStationSet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBlockingActive:(_Bool)arg1 forStationSetWithID:(id)arg2 withExpiry:(id)arg3 completion:(CDUnknownBlockType)arg4 operationBackloggedHandler:(CDUnknownBlockType)arg5;
- (void)setBlockingActive:(_Bool)arg1 forStationSetWithID:(id)arg2 withExpiry:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBlockingActive:(_Bool)arg1 forStationWithID:(id)arg2 withExpiry:(id)arg3 completion:(CDUnknownBlockType)arg4 operationBackloggedHandler:(CDUnknownBlockType)arg5;
- (void)setBlockingActive:(_Bool)arg1 forStationWithID:(id)arg2 withExpiry:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)policyForStationSetWithID:(id)arg1;
- (id)policyForStationWithID:(id)arg1;
- (_Bool)isBlockingActiveForStationSetWithID:(id)arg1;
- (_Bool)isBlockingActiveForStationWithID:(id)arg1;
- (id)stationSetsContainingStationWithID:(id)arg1;
- (id)stationSetContainingStationWithID:(id)arg1;
- (_Bool)isFamilyHubPolicyActive:(id)arg1;
- (id)stationSetWithID:(id)arg1;
- (id)stationWithID:(id)arg1;
- (id)orderStationArray:(id)arg1;
- (id)pauseableStations;
- (id)groupableStations;
- (void)refreshStationList;
- (void)refreshRecentlySeenDevices;
- (id)recentlySeenStations;
- (id)activeStations;
- (id)activeStationSetPolicies;
- (id)activeStationPolicies;
- (void)introductionFlowDidFinish;
@property(readonly, nonatomic) _Bool needsIntroduction;
- (id)init;
- (id)initWithGroup:(id)arg1 userState:(id)arg2 refreshImmediately:(_Bool)arg3;

@end

