//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRPlus_FieldAcl, NSArray, NSNumber, NSString;

@interface GTLRPlus_PersonFieldMetadata : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *affinity; // @dynamic affinity;
@property(copy, nonatomic) NSString *container; // @dynamic container;
@property(retain, nonatomic) NSNumber *containerId; // @dynamic containerId;
@property(retain, nonatomic) NSNumber *containerPrimary; // @dynamic containerPrimary;
@property(retain, nonatomic) NSNumber *deprecatedContactContainerId; // @dynamic deprecatedContactContainerId;
@property(retain, nonatomic) NSNumber *edgeKey; // @dynamic edgeKey;
@property(retain, nonatomic) NSArray *edgeKeyInfo; // @dynamic edgeKeyInfo;
@property(copy, nonatomic) NSString *encodedContainerId; // @dynamic encodedContainerId;
@property(retain, nonatomic) GTLRPlus_FieldAcl *fieldAcl; // @dynamic fieldAcl;
@property(retain, nonatomic) NSArray *matchingInfo; // @dynamic matchingInfo;
@property(retain, nonatomic) NSNumber *primary; // @dynamic primary;
@property(retain, nonatomic) NSNumber *verified; // @dynamic verified;
@property(copy, nonatomic) NSString *visibility; // @dynamic visibility;
@property(retain, nonatomic) NSNumber *writeable; // @dynamic writeable;

@end

