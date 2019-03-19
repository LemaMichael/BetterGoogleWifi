//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "MDCActivityIndicatorDelegate-Protocol.h"

@class JETAccessPointGroup, MDCActivityIndicator, NSString, SSOService;
@protocol JETUserStateProtocol;

@interface JETWifiCareSupportViewController : QTMCollectionViewController <MDCActivityIndicatorDelegate>
{
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    NSString *_supportPhoneNumber;
    NSString *_requestCallbackURL;
    MDCActivityIndicator *_activityIndicator;
    SSOService *_ssoService;
}

@property(readonly, nonatomic) SSOService *ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) MDCActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSString *requestCallbackURL; // @synthesize requestCallbackURL=_requestCallbackURL;
@property(retain, nonatomic) NSString *supportPhoneNumber; // @synthesize supportPhoneNumber=_supportPhoneNumber;
@property(readonly, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (_Bool)isOnline;
- (void)handleDiagnosticReportItemTapped;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)constructModel;
- (id)analyticsScreenName;
- (void)viewDidLoad;
- (void)loadView;
- (void)activityIndicatorAnimationDidFinish:(id)arg1;
- (id)initWithUserState:(id)arg1 group:(id)arg2 ssoService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

