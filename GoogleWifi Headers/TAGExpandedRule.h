//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface TAGExpandedRule : NSObject <NSCopying>
{
    NSArray *_positivePredicates;
    NSArray *_negativePredicates;
    NSArray *_addTags;
    NSArray *_removeTags;
    NSArray *_addMacros;
    NSArray *_removeMacros;
}

+ (id)builder;
@property(readonly, retain, nonatomic) NSArray *removeMacros; // @synthesize removeMacros=_removeMacros;
@property(readonly, retain, nonatomic) NSArray *addMacros; // @synthesize addMacros=_addMacros;
@property(readonly, retain, nonatomic) NSArray *removeTags; // @synthesize removeTags=_removeTags;
@property(readonly, retain, nonatomic) NSArray *addTags; // @synthesize addTags=_addTags;
@property(readonly, retain, nonatomic) NSArray *negativePredicates; // @synthesize negativePredicates=_negativePredicates;
@property(readonly, retain, nonatomic) NSArray *positivePredicates; // @synthesize positivePredicates=_positivePredicates;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithPositivePredicates:(id)arg1 negativePredicates:(id)arg2 addTags:(id)arg3 removeTags:(id)arg4 addMacros:(id)arg5 removeMacros:(id)arg6;

@end

