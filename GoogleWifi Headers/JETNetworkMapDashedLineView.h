//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JETSpeedTestDashedLineView;

@interface JETNetworkMapDashedLineView : UIView
{
    _Bool _animateAfterLayout;
    JETSpeedTestDashedLineView *_dashedLine;
    UIView *_sourcePositionView;
    UIView *_destinationPositionView;
}

@property(nonatomic) _Bool animateAfterLayout; // @synthesize animateAfterLayout=_animateAfterLayout;
@property(retain, nonatomic) UIView *destinationPositionView; // @synthesize destinationPositionView=_destinationPositionView;
@property(retain, nonatomic) UIView *sourcePositionView; // @synthesize sourcePositionView=_sourcePositionView;
@property(readonly, nonatomic) JETSpeedTestDashedLineView *dashedLine; // @synthesize dashedLine=_dashedLine;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1;

@end

