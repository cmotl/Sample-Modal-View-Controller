//
//  SampleModalViewControllerDelegate.h
//  ModalViewControllerExample
//
//  Created by Christopher Motl on 9/21/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleModalViewController;

@protocol SampleModalViewControllerDelegate

- (void) sampleModalViewControllerDidCancel:(SampleModalViewController *)viewController;
- (void) sampleModalViewControllerDidFinish:(SampleModalViewController *)viewController;

@end
