//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface JETBluetoothSetupStatus : NSObject
{
    _Bool _online;
    _Bool _ethernetLinkUp;
    _Bool _PPPoEDetected;
    _Bool _invalidPPPoECredentials;
    _Bool _updateRequired;
    unsigned char _updateStatus;
    unsigned long long _updateProgress;
    NSNumber *_lanLinkUp;
}

@property(retain, nonatomic) NSNumber *lanLinkUp; // @synthesize lanLinkUp=_lanLinkUp;
@property(nonatomic) unsigned long long updateProgress; // @synthesize updateProgress=_updateProgress;
@property(nonatomic) unsigned char updateStatus; // @synthesize updateStatus=_updateStatus;
@property(nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(nonatomic) _Bool invalidPPPoECredentials; // @synthesize invalidPPPoECredentials=_invalidPPPoECredentials;
@property(nonatomic) _Bool PPPoEDetected; // @synthesize PPPoEDetected=_PPPoEDetected;
@property(nonatomic) _Bool ethernetLinkUp; // @synthesize ethernetLinkUp=_ethernetLinkUp;
@property(nonatomic) _Bool online; // @synthesize online=_online;
- (void).cxx_destruct;

@end
