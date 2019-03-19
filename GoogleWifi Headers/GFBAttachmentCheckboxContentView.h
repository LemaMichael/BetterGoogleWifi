//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, GFBAttachmentCheckboxContentViewObject, NSString, UIButton, UIImageView, UILabel, UIView;

@interface GFBAttachmentCheckboxContentView : GOOBaseContentView <UIGestureRecognizerDelegate>
{
    GFBAttachmentCheckboxContentViewObject *_object;
    UIView *_background;
    UIButton *_checkmarkButton;
    CALayer *_checkmarkSeparator;
    UIButton *_previewSection;
    UIImageView *_thumbnail;
    UILabel *_titleLabel;
    UILabel *_previewLabel;
}

+ (id)scaleAndCropScreenshotImage:(id)arg1;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)updateViewForSelectedState:(_Bool)arg1;
- (double)updatePreviewSectionSubviewFramesForWidth:(double)arg1;
- (double)updateSubviewFramesForWidth:(double)arg1;
- (void)didTapPreviewButton:(id)arg1;
- (void)didTapCheckmarkButton:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

