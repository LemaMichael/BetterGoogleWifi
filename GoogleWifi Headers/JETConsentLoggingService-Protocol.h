//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class JETConsentDecision, JETConsentText, NSError;

@protocol JETConsentLoggingService
+ (NSError *)triggerNSErrorForwardDeclarationInObjectiveC;
- (void)logConsent:(JETConsentDecision *)arg1 contextType:(long long)arg2 consentText:(JETConsentText *)arg3 completion:(void (^)(NSError *))arg4;
- (void)bestEffortLogConsent:(JETConsentDecision *)arg1 contextType:(long long)arg2 consentText:(JETConsentText *)arg3;
- (void)bestEffortLogDisclosure:(long long)arg1 contextType:(long long)arg2;
@end

