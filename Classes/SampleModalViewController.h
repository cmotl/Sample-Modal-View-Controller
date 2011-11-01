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
	id <SampleModalViewControllerDelegate> __unsafe_unretained delegate;
}

@property (nonatomic, strong) IBOutlet UIButton *saveButton;
@property (nonatomic, strong) IBOutlet UIButton *cancelButton;
@property (nonatomic, unsafe_unretained) id <SampleModalViewControllerDelegate> delegate;

-(IBAction) save;
-(IBAction) cancel;

@end
