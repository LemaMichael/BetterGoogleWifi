//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSOService;

@interface ARIServiceProvider : NSObject
{
    SSOService *_SSOService;
    NSString *_APIKey;
    long long _serverEnvironment;
}

@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(readonly, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(readonly, nonatomic) SSOService *SSOService; // @synthesize SSOService=_SSOService;
- (void).cxx_destruct;
- (id)initWithSSOService:(id)arg1 APIKey:(id)arg2;

@end

