//
//  ModalViewControllerExampleAppDelegate.h
//  ModalViewControllerExample
//
//  Created by Christopher Motl on 9/21/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ModalViewControllerExampleViewController;

@interface ModalViewControllerExampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ModalViewControllerExampleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ModalViewControllerExampleViewController *viewController;

@end

