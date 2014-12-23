//
//  DVSViewController.h
//  Devise
//
//  Created by Wojciech Trzasko on 23.12.2014.
//  Copyright (c) 2014 Netguru Sp. z o.o. All rights reserved.
//

#import "XLFormViewController.h"

extern NSString * const DVSFormEmailTag;
extern NSString * const DVSFormPasswordTag;
extern NSString * const DVSFormDismissButtonTag;

@interface DVSBaseViewController : XLFormViewController

- (void)addEmailAndPasswordToSection:(XLFormSectionDescriptor *)section;
- (void)addProceedButtonToSection:(XLFormSectionDescriptor *)section title:(NSString *)title action:(void (^)())actionBlock;
- (void)addDismissButtonToSection:(XLFormSectionDescriptor *)section title:(NSString *)title action:(void (^)())actionBlock;

- (void)setupLeftNavigationBarButtonWithTitle:(NSString *)title action:(void (^)())actionBlock;
- (void)setupRightNavigationBarButtonWithTitle:(NSString *)title action:(void (^)())actionBlock;

- (BOOL)shouldShow:(NSUInteger)option basedOn:(NSUInteger)value;

@end