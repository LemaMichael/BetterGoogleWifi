//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NICellObject-Protocol.h"

@class NSString;

@interface NIFormElement : NSObject <NICellObject>
{
    long long _elementID;
}

+ (id)elementWithID:(long long)arg1;
@property(nonatomic) long long elementID; // @synthesize elementID=_elementID;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

