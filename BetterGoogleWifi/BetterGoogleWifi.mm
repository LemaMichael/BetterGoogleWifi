#line 1 "/Users/michael/Desktop/BetterGoogleWifi/BetterGoogleWifi/BetterGoogleWifi.xm"


#if TARGET_OS_SIMULATOR
#error Do not support the simulator, please use the real iPhone Device.
#endif

#import <UIKit/UIKit.h>
@interface MDCSlider : UIControl
@end

@interface JETBrightnessSliderContentView : UIView
@property(retain, nonatomic) MDCSlider *sliderControl;
@end

@interface JETBrightnessSliderContentViewObject : NSObject
@property(nonatomic) __weak JETBrightnessSliderContentView *view;
@end

@interface JETHardwareSettingsViewController : UIViewController
@property(retain, nonatomic) JETBrightnessSliderContentViewObject *lightSliderItem;
- (void)brightnessSlider:(id)arg1 didChangeValue:(double)arg2;
-(void)displayAlertController;
@end



#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class JETHardwareSettingsViewController; 
static void _logos_method$_ungrouped$JETHardwareSettingsViewController$displayAlertController(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST, SEL, id, NSIndexPath *); static void _logos_method$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST, SEL, id, NSIndexPath *); static void (*_logos_orig$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$)(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST, SEL, id, double); static void _logos_method$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST, SEL, id, double); 

#line 26 "/Users/michael/Desktop/BetterGoogleWifi/BetterGoogleWifi/BetterGoogleWifi.xm"


static void _logos_method$_ungrouped$JETHardwareSettingsViewController$displayAlertController(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"Brightness Level"
                                                                             message:@""
                                                                      preferredStyle:UIAlertControllerStyleAlert];
    
    [alertController addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        textField.placeholder = @"50%";
        textField.keyboardType = UIKeyboardTypeNumberPad;
    }];
    
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        NSLog(@"Current Val %@", [[alertController textFields][0] text]);
        double val = [[[alertController textFields][0] text] doubleValue] / 100;
        [self brightnessSlider:self.lightSliderItem didChangeValue:val];
    }];
    
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
        NSLog(@"Canelled");
    }];
    
    [alertController addAction:confirmAction];
    [alertController addAction:cancelAction];
    [self presentViewController:alertController animated:YES completion:nil];
}

static void _logos_method$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, NSIndexPath * arg2) {
    _logos_orig$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$(self, _cmd, arg1, arg2);
    if (arg2.section == 0 and arg2.row == 0) {
        [self displayAlertController];
    }
}

static void _logos_method$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$(_LOGOS_SELF_TYPE_NORMAL JETHardwareSettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, double arg2) {
    _logos_orig$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$(self, _cmd, arg1, arg2);
    NSLog(@"arg1: %@, value: %f", NSStringFromClass([arg1 class]), arg2);
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$JETHardwareSettingsViewController = objc_getClass("JETHardwareSettingsViewController"); { char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$JETHardwareSettingsViewController, @selector(displayAlertController), (IMP)&_logos_method$_ungrouped$JETHardwareSettingsViewController$displayAlertController, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$JETHardwareSettingsViewController, @selector(collectionView:didSelectItemAtIndexPath:), (IMP)&_logos_method$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$JETHardwareSettingsViewController$collectionView$didSelectItemAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$JETHardwareSettingsViewController, @selector(brightnessSlider:didChangeValue:), (IMP)&_logos_method$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$, (IMP*)&_logos_orig$_ungrouped$JETHardwareSettingsViewController$brightnessSlider$didChangeValue$);} }
#line 65 "/Users/michael/Desktop/BetterGoogleWifi/BetterGoogleWifi/BetterGoogleWifi.xm"
