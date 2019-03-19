//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"
#import "JETContentViewObjectCustomColoring-Protocol.h"

@class NSArray, NSString, UIColor;

@interface JETButtonContentViewObject : NSObject <GOOContentViewObject, JETContentViewObjectCustomColoring>
{
    _Bool _leftAligned;
    double _buttonPadding;
    UIColor *_backgroundColor;
    NSArray *_buttons;
}

@property(readonly, nonatomic) _Bool leftAligned; // @synthesize leftAligned=_leftAligned;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)init;
- (id)initWithButtons:(id)arg1 buttonPadding:(double)arg2 backgroundColor:(id)arg3 leftAligned:(_Bool)arg4;
- (id)initWithButtons:(id)arg1 leftButtonPadding:(double)arg2 backgroundColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

