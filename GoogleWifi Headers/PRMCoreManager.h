//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPPseudonymousIDObserver-Protocol.h"
#import "PRMCollectibleDelegate-Protocol.h"
#import "PRMManager-Protocol.h"
#import "PRMSingleton-Protocol.h"

@class NSMutableArray, NSString, NSUUID, PRMCollectibleProvider;

@interface PRMCoreManager : NSObject <GIPPseudonymousIDObserver, PRMSingleton, PRMManager, PRMCollectibleDelegate>
{
    PRMCollectibleProvider *_provider;
    NSMutableArray *_transmitters;
    NSUUID *_launchID;
    _Bool _isRunning;
    float _samplingRate;
}

+ (id)sharedInstance;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) float samplingRate; // @synthesize samplingRate=_samplingRate;
@property(readonly, nonatomic) NSUUID *launchID; // @synthesize launchID=_launchID;
- (void).cxx_destruct;
- (_Bool)shouldStart;
- (void)resetLaunchID;
- (void)pseudonymousIDDidReset:(id)arg1;
- (void)setup;
- (void)addTransmitterIfExisting:(id)arg1;
- (void)broadcastCollectible:(id)arg1 withEventContext:(id)arg2;
- (void)collectType:(unsigned long long)arg1 onEventWithName:(id)arg2;
- (void)stopCollectingType:(unsigned long long)arg1 onEventWithName:(id)arg2;
- (void)startCollectingType:(unsigned long long)arg1 onEventWithName:(id)arg2;
- (void)collectType:(unsigned long long)arg1 onEventWithEventName:(id)arg2;
- (void)stopCollectingType:(unsigned long long)arg1 onEventWithEventName:(id)arg2;
- (void)startCollectingType:(unsigned long long)arg1 onEventWithEventName:(id)arg2;
- (void)addTransmitter:(id)arg1;
- (void)unblacklistCollectibleSetupWithClass:(Class)arg1;
- (void)blacklistCollectibleSetupWithClass:(Class)arg1;
- (void)launch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

