//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TAGExpandedFunctionCall;

@interface TAGMacroInfo : NSObject
{
    NSMutableSet *_rules;
    NSMutableDictionary *_addMacros;
    NSMutableDictionary *_removeMacros;
    TAGExpandedFunctionCall *_defaultFunctionCall;
}

@property(retain, nonatomic) TAGExpandedFunctionCall *defaultFunctionCall; // @synthesize defaultFunctionCall=_defaultFunctionCall;
@property(retain, nonatomic) NSMutableDictionary *removeMacros; // @synthesize removeMacros=_removeMacros;
@property(retain, nonatomic) NSMutableDictionary *addMacros; // @synthesize addMacros=_addMacros;
@property(retain, nonatomic) NSMutableSet *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;
- (void)addRemoveMacro:(id)arg1 forRule:(id)arg2;
- (void)addAddMacro:(id)arg1 forRule:(id)arg2;
- (id)init;

@end

