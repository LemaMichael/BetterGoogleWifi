//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSMutableAttributedString, NSString, NSTextCheckingResult, NSTimer, UIColor;
@protocol NIAttributedLabelDelegate;

@interface NIAttributedLabel : UILabel <UIActionSheetDelegate>
{
    _Bool _autoDetectLinks;
    _Bool _deferLinkDetection;
    _Bool _linksHaveUnderlines;
    _Bool _shouldSortLinksLast;
    _Bool _linksHaveBeenDetected;
    int _verticalTextAlignment;
    int _underlineStyle;
    int _underlineStyleModifier;
    struct __CTFrame *_textFrame;
    unsigned long long _dataDetectorTypes;
    UIColor *_linkColor;
    UIColor *_strikethroughColor;
    UIColor *_highlightedLinkBackgroundColor;
    NSDictionary *_attributesForLinks;
    NSDictionary *_attributesForHighlightedLink;
    double _lineHeight;
    double _shadowBlur;
    double _strokeWidth;
    UIColor *_strokeColor;
    double _textKern;
    NSString *_tailTruncationString;
    long long _linkOrdering;
    id <NIAttributedLabelDelegate> _delegate;
    NSMutableAttributedString *_mutableAttributedString;
    long long _linkDetectionRequestID;
    NSArray *_detectedlinkLocations;
    NSMutableArray *_explicitLinkLocations;
    NSTextCheckingResult *_originalLink;
    NSTextCheckingResult *_touchedLink;
    NSTimer *_longPressTimer;
    NSTextCheckingResult *_actionSheetLink;
    NSArray *_accessibleElements;
    NSMutableArray *_images;
    struct CGPoint _touchPoint;
}

+ (id)linkURLsToRangesForFormatString:(id)arg1 linkTexts:(id)arg2 linkURLs:(id)arg3 replacedStringOut:(id *)arg4;
+ (id)mutableAttributedStringFromLabel:(id)arg1;
+ (unsigned char)lineBreakModeFromUILineBreakMode:(long long)arg1;
+ (unsigned char)alignmentFromUITextAlignment:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) NSTextCheckingResult *actionSheetLink; // @synthesize actionSheetLink=_actionSheetLink;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(retain, nonatomic) NSTextCheckingResult *touchedLink; // @synthesize touchedLink=_touchedLink;
@property(retain, nonatomic) NSTextCheckingResult *originalLink; // @synthesize originalLink=_originalLink;
@property(retain, nonatomic) NSMutableArray *explicitLinkLocations; // @synthesize explicitLinkLocations=_explicitLinkLocations;
@property(copy, nonatomic) NSArray *detectedlinkLocations; // @synthesize detectedlinkLocations=_detectedlinkLocations;
@property(nonatomic) _Bool linksHaveBeenDetected; // @synthesize linksHaveBeenDetected=_linksHaveBeenDetected;
@property(nonatomic) long long linkDetectionRequestID; // @synthesize linkDetectionRequestID=_linkDetectionRequestID;
@property(retain, nonatomic) NSMutableAttributedString *mutableAttributedString; // @synthesize mutableAttributedString=_mutableAttributedString;
@property(nonatomic) __weak id <NIAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long linkOrdering; // @synthesize linkOrdering=_linkOrdering;
@property(nonatomic) _Bool shouldSortLinksLast; // @synthesize shouldSortLinksLast=_shouldSortLinksLast;
@property(copy, nonatomic) NSString *tailTruncationString; // @synthesize tailTruncationString=_tailTruncationString;
@property(nonatomic) double textKern; // @synthesize textKern=_textKern;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) int underlineStyleModifier; // @synthesize underlineStyleModifier=_underlineStyleModifier;
@property(nonatomic) int underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(nonatomic) int verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(copy, nonatomic) NSDictionary *attributesForHighlightedLink; // @synthesize attributesForHighlightedLink=_attributesForHighlightedLink;
@property(copy, nonatomic) NSDictionary *attributesForLinks; // @synthesize attributesForLinks=_attributesForLinks;
@property(nonatomic) _Bool linksHaveUnderlines; // @synthesize linksHaveUnderlines=_linksHaveUnderlines;
@property(retain, nonatomic) UIColor *highlightedLinkBackgroundColor; // @synthesize highlightedLinkBackgroundColor=_highlightedLinkBackgroundColor;
@property(retain, nonatomic) UIColor *strikethroughColor; // @synthesize strikethroughColor=_strikethroughColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) _Bool deferLinkDetection; // @synthesize deferLinkDetection=_deferLinkDetection;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) _Bool autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
- (void).cxx_destruct;
- (void)insertImage:(id)arg1 atIndex:(long long)arg2 margins:(struct UIEdgeInsets)arg3 verticalTextAlignment:(int)arg4;
- (void)insertImage:(id)arg1 atIndex:(long long)arg2 margins:(struct UIEdgeInsets)arg3;
- (void)insertImage:(id)arg1 atIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)invalidateAccessibleElements;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)drawStrikethroughOverGlyphRun:(struct __CTRun *)arg1 attributes:(struct __CFDictionary *)arg2 ctx:(struct CGContext *)arg3;
- (void)drawLine:(struct __CTLine *)arg1 context:(struct CGContext *)arg2;
- (void)drawAttributedString:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawHighlightWithRect:(struct CGRect)arg1;
- (void)drawImages;
- (long long)numberOfDisplayedLines;
- (id)mutableAttributedStringWithAdditions;
- (void)_applyLinkStyleWithResults:(id)arg1 toAttributedString:(id)arg2;
- (void)_longPressTimerDidFire:(id)arg1;
- (id)actionSheetForResult:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityElementForRange:(struct _NSRange)arg1;
- (struct CGRect)boundsForRects:(id)arg1;
- (id)pointsWithActivationPoint:(struct CGPoint)arg1 rect:(struct CGRect)arg2 topLeftCutPoint:(struct CGPoint)arg3 bottomRightCutPoint:(struct CGPoint)arg4;
- (id)_rectsForRange:(struct _NSRange)arg1;
- (_Bool)isPoint:(struct CGPoint)arg1 nearLink:(id)arg2;
- (struct CGRect)_rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)_transformForCoreText;
- (double)_verticalOffsetForBounds:(struct CGRect)arg1;
- (void)_processLinksInAttributedString:(id)arg1;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (void)detectLinks;
- (void)_deferLinkDetection;
- (id)_matchesFromAttributedString:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTextKern:(double)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeWidth:(double)arg1 range:(struct _NSRange)arg2;
- (void)setUnderlineStyle:(int)arg1 modifier:(int)arg2 range:(struct _NSRange)arg3;
- (void)setFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTextColor:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)removeAllExplicitLinks;
- (void)addLink:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
@property(copy, nonatomic) NSAttributedString *attributedString;
- (void)setText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)attributedTextDidChange;
- (void)resetTextFrame;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_configureDefaults;
@property(nonatomic) struct __CTFrame *textFrame; // @synthesize textFrame=_textFrame;
- (void)dealloc;
- (void)jet_setWithPositionalFormatString:(id)arg1 linkTexts:(id)arg2 linkURLs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

