//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIGoogleWifiConsent, ARIParentConsentNotification;

@interface ARIEventDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIGoogleWifiConsent *googleWifiConsent; // @dynamic googleWifiConsent;
@property(nonatomic) _Bool hasGoogleWifiConsent; // @dynamic hasGoogleWifiConsent;
@property(nonatomic) _Bool hasParentNotification; // @dynamic hasParentNotification;
@property(retain, nonatomic) ARIParentConsentNotification *parentNotification; // @dynamic parentNotification;

@end

