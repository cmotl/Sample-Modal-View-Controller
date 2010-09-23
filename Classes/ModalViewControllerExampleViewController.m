//
//  ModalViewControllerExampleViewController.m
//  ModalViewControllerExample
//
//  Created by Christopher Motl on 9/21/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import "ModalViewControllerExampleViewController.h"
#import "SampleModalViewController.h"

@implementation ModalViewControllerExampleViewController

- (void) showModalViewController {
	SampleModalViewController *addController = [[SampleModalViewController alloc]
											  initWithNibName:@"SampleModalViewController" bundle:nil];
	addController.delegate = self;
	
	// Create the navigation controller and present it modally.
	[self presentModalViewController:addController animated:YES];
	
	// The navigation controller is now owned by the current view controller
	// and the root view controller is owned by the navigation controller,
	// so both objects should be released to prevent over-retention.
	[addController release];
}

- (void) sampleModalViewControllerDidCancel:(SampleModalViewController *)viewController {

	[self dismissModalViewControllerAnimated:YES];
	
	UIAlertView *alert = [[[UIAlertView alloc] initWithTitle:@"Cancelled" message:@"Cancelled" delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:nil] autorelease];
    // optional - add more buttons:
    [alert addButtonWithTitle:@"Yes"];
    [alert show];
}

- (void) sampleModalViewControllerDidFinish:(SampleModalViewController *)viewController {
	
	[self dismissModalViewControllerAnimated:YES];
	
	UIAlertView *alert = [[[UIAlertView alloc] initWithTitle:@"Finished" message:@"Finished" delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:nil] autorelease];
    // optional - add more buttons:
    [alert addButtonWithTitle:@"Yes"];
    [alert show];
	
}

/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/


/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/


/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
