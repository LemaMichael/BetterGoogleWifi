//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class GTLRAccesspoints_InsightAction;

@interface InsightCardUIAccessibilityCustomAction : UIAccessibilityCustomAction
{
    GTLRAccesspoints_InsightAction *_insightAction;
}

@property(readonly, nonatomic) GTLRAccesspoints_InsightAction *insightAction; // @synthesize insightAction=_insightAction;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 insightAction:(id)arg2 target:(id)arg3 selector:(SEL)arg4;

@end

