//
//  ModalViewControllerExampleViewController.h
//  ModalViewControllerExample
//
//  Created by Christopher Motl on 9/21/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SampleModalViewControllerDelegate.h"

@interface ModalViewControllerExampleViewController : UIViewController <SampleModalViewControllerDelegate> {

}

-(IBAction) showModalViewController;

@end

