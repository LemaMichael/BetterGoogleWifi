//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUPBaseHelpUnit.h"

@class NSString;

@interface SUPCustomActionHelpUnit : SUPBaseHelpUnit
{
    NSString *_actionID;
}

+ (id)helpUnitFromMojoJSON:(id)arg1;
+ (id)helpUnitFromSuggestionProto:(id)arg1;
+ (id)helpUnitFromAutocompleteJSON:(id)arg1 isInternal:(_Bool)arg2;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;

@end

