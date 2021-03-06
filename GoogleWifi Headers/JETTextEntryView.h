//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOScrollViewKeyboardManagerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GOOTextField, NSString, UILabel, UIScrollView;
@protocol JETTextEntryViewDelegate;

@interface JETTextEntryView : UIView <GOOScrollViewKeyboardManagerDelegate, UITextFieldDelegate, UIScrollViewDelegate>
{
    id <JETTextEntryViewDelegate> _delegate;
    GOOTextField *_textField;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_contextLabel;
    UIScrollView *_scrollView;
}

+ (id)labelWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GOOTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <JETTextEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)keyboardManagerTargetViewPaddingForScrollView:(id)arg1;
- (id)keyboardManagerTargetViewForScrollView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textDidChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 title:(id)arg2 subtitle:(id)arg3 context:(id)arg4 validator:(id)arg5 placeholderText:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

