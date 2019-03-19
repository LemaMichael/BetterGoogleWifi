//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface MDCPageControlIndicator : CAShapeLayer
{
    _Bool _isAnimating;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (struct CGPath *)circlePathWithRadius:(double)arg1;
- (void)updateIndicatorTransformX:(double)arg1;
- (void)updateIndicatorTransformX:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 mediaTimingFunction:(id)arg4;
- (void)revealIndicator;
- (void)setOpacity:(float)arg1;
- (id)initWithCenter:(struct CGPoint)arg1 radius:(double)arg2;

@end

