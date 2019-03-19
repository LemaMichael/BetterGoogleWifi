// See http://iphonedevwiki.net/index.php/Logos

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


%hook JETHardwareSettingsViewController
%new
-(void)displayAlertController {
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

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 {
    %orig;
    if (arg2.section == 0 and arg2.row == 0) {
        [self displayAlertController];
    }
}

- (void)brightnessSlider:(id)arg1 didChangeValue:(double)arg2 {
    %orig;
    NSLog(@"arg1: %@, value: %f", NSStringFromClass([arg1 class]), arg2);
}
%end
