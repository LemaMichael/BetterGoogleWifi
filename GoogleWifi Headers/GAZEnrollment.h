//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface GAZEnrollment : NSObject
{
    _Bool _verified;
    int _version;
    NSData *_keyHandle;
    NSString *_userID;
    long long _counter;
    NSDate *_creationDate;
    double _lifetime;
    NSString *_appBundleId;
    NSData *_deviceAPNToken;
}

@property(copy, nonatomic) NSData *deviceAPNToken; // @synthesize deviceAPNToken=_deviceAPNToken;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic) double lifetime; // @synthesize lifetime=_lifetime;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSData *keyHandle; // @synthesize keyHandle=_keyHandle;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

