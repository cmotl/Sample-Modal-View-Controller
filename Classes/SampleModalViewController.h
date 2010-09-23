//
//  SampleModalViewController.h
//  ModalViewControllerExample
//
//  Created by Christopher Motl on 9/21/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SampleModalViewControllerDelegate.h"

@interface SampleModalViewController : UIViewController {
	UIButton *saveButton;
	UIButton *cancelButton;
	id <SampleModalViewControllerDelegate> delegate;
}

@property (nonatomic, retain) IBOutlet UIButton *saveButton;
@property (nonatomic, retain) IBOutlet UIButton *cancelButton;
@property (nonatomic, retain) id <SampleModalViewControllerDelegate> delegate;

-(IBAction) save;
-(IBAction) cancel;

@end
