//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETResponseCache.h"

@class NSString;
@protocol JETUserStateProtocol;

@interface JETGroupStateCache : JETResponseCache
{
    long long _WANConnectivityState;
    NSString *_groupID;
    id <JETUserStateProtocol> _userState;
}

@property(nonatomic) __weak id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long WANConnectivityState; // @synthesize WANConnectivityState=_WANConnectivityState;
- (void).cxx_destruct;
- (_Bool)allAccessPointsOnline;
- (long long)connectivityStateForAccessPoint:(id)arg1;
- (void)refresh:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithGroupID:(id)arg1 userState:(id)arg2;

@end

