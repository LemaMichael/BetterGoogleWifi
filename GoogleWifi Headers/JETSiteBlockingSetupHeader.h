//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class UILabel;

@interface JETSiteBlockingSetupHeader : GOOBaseContentView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)styleSubtitleLabel;
- (void)styleTitleLabel;
- (void)updateViewWithObject:(id)arg1;

@end

