/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate> {
    PSUICellularPlanUniversalReference * _planReference;
    NSArray * _predefinedLabels;
    NSString * _rawCustomLabelText;
    UITextField * _textField;
    NSString * _validatedCustomLabelText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSUICellularPlanUniversalReference *planReference;
@property (nonatomic, retain) NSArray *predefinedLabels;
@property (nonatomic, retain) NSString *rawCustomLabelText;
@property (readonly) Class superclass;
@property (nonatomic) UITextField *textField;
@property (nonatomic, retain) NSString *validatedCustomLabelText;

- (void).cxx_destruct;
- (void)dismissKeyboard;
- (id)planReference;
- (id)predefinedLabels;
- (id)rawCustomLabelText;
- (void)setPlanReference:(id)arg1;
- (void)setPredefinedLabels:(id)arg1;
- (void)setRawCustomLabelText:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setValidatedCustomLabelText:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)validatedCustomLabelText;
- (void)viewDidLoad;

@end