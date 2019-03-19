//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETInsightCustomCard.h"

#import "JETInsightCard-Protocol.h"

@class JETWANStatus, NSMutableArray, NSString;

@interface JETInsightsNetworkUnavailableCard : JETInsightCustomCard <JETInsightCard>
{
    _Bool _online;
    _Bool _internetAvailable;
    _Bool _localApiAvailable;
    JETWANStatus *_wanStatus;
    NSString *_cardTitle;
    NSString *_cardBody;
    NSMutableArray *_actionButtons;
    NSString *_type;
    NSString *_state;
}

@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(copy, nonatomic) NSString *cardBody; // @synthesize cardBody=_cardBody;
@property(copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(readonly, nonatomic) JETWANStatus *wanStatus; // @synthesize wanStatus=_wanStatus;
@property(readonly, nonatomic) _Bool localApiAvailable; // @synthesize localApiAvailable=_localApiAvailable;
@property(readonly, nonatomic) _Bool internetAvailable; // @synthesize internetAvailable=_internetAvailable;
@property(readonly, nonatomic) _Bool online; // @synthesize online=_online;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)restartModemHelpButtonTapped;
- (void)setPPPoEButtonTapped;
- (void)checkCablesHelpButtonTapped;
- (void)noDataConnectionHelpButtonTapped;
- (void)apOfflineHelpButtonTapped;
- (void)notConnectedToAPHelpButtonTapped;
- (void)retryButtonTapped;
- (void)generateCardContent;
- (id)cardActionButtons;
- (id)cardBodyAccessibilityIdentifier;
- (id)cardTitleAccessibilityIdentifier;
- (id)cardCategory;
- (id)constructViewSection;
- (_Bool)isDismissable;
- (id)initWithUserState:(id)arg1 group:(id)arg2 imageCache:(id)arg3 delegate:(id)arg4;
- (id)initWithUserState:(id)arg1 group:(id)arg2 delegate:(id)arg3 internetAvailable:(_Bool)arg4 localApiAvailable:(_Bool)arg5 online:(_Bool)arg6 wanStatus:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
