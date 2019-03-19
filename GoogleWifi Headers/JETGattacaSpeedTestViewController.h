//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETLANSpeedTestViewDelegate-Protocol.h"
#import "JETVideoViewDelegate-Protocol.h"

@class GOONavigationStyle, JETAccessibilityAnnouncer, JETGroupStateCache, JETInsightsDataCache, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, UIScrollView, UIView;

@interface JETGattacaSpeedTestViewController : JETGroupAwareViewController <GOONavigationCustomization, JETVideoViewDelegate, JETLANSpeedTestViewDelegate>
{
    _Bool _testAborted;
    _Bool _testStarted;
    JETAccessibilityAnnouncer *_accessibilityAnnouncer;
    NSMutableArray *_meshNodesToTest;
    NSMutableDictionary *_meshNodeStartTimes;
    NSMutableArray *_offlineMeshNodes;
    struct NSMutableDictionary *_resultsByAccessPointID;
    JETGroupStateCache *_groupStateCache;
    JETInsightsDataCache *_insightsDataCache;
    NSNumber *_attemptCount;
    NSDate *_startTime;
    unsigned long long _loadingStep;
    NSDate *_startWallTime;
}

+ (id)pollingCurve;
@property(readonly, nonatomic) NSDate *startWallTime; // @synthesize startWallTime=_startWallTime;
@property(nonatomic) unsigned long long loadingStep; // @synthesize loadingStep=_loadingStep;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSNumber *attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain, nonatomic) JETInsightsDataCache *insightsDataCache; // @synthesize insightsDataCache=_insightsDataCache;
@property(retain, nonatomic) JETGroupStateCache *groupStateCache; // @synthesize groupStateCache=_groupStateCache;
@property(retain, nonatomic) NSMutableDictionary *resultsByAccessPointID; // @synthesize resultsByAccessPointID=_resultsByAccessPointID;
@property(retain, nonatomic) NSMutableArray *offlineMeshNodes; // @synthesize offlineMeshNodes=_offlineMeshNodes;
@property(retain, nonatomic) NSMutableDictionary *meshNodeStartTimes; // @synthesize meshNodeStartTimes=_meshNodeStartTimes;
@property(retain, nonatomic) NSMutableArray *meshNodesToTest; // @synthesize meshNodesToTest=_meshNodesToTest;
@property(retain, nonatomic) JETAccessibilityAnnouncer *accessibilityAnnouncer; // @synthesize accessibilityAnnouncer=_accessibilityAnnouncer;
@property(nonatomic) _Bool testStarted; // @synthesize testStarted=_testStarted;
@property(nonatomic) _Bool testAborted; // @synthesize testAborted=_testAborted;
- (void).cxx_destruct;
- (void)backButtonTapped;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)testFailed;
- (void)displayResults;
- (void)testFinished;
- (void)runNextTest;
- (void)pollForWifiblasterSpeedTestResult:(id)arg1 meshNodeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)timeoutForAP:(id)arg1;
- (unsigned long long)numberOfConnectedStationsToAP:(id)arg1;
- (long long)pollIntervalForAttempt:(long long)arg1;
- (void)setupTest;
- (void)refreshGroupStateCache;
- (void)beginTest;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)speedTestViewIsIdle:(id)arg1;
- (void)animationIsFinished:(id)arg1;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

