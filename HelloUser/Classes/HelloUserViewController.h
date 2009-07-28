//
//  HelloUserViewController.h
//  HelloUser
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloUserViewController : UIViewController <UITextFieldDelegate> {
	IBOutlet UILabel *helloLabel;
	IBOutlet UITextField *nameField;
}

- (IBAction)sayHello:(id)sender;
@property (nonatomic, retain) UILabel *helloLabel;
@property (nonatomic, retain) UITextField *nameField;

@end

