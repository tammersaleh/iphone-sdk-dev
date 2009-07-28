//
//  MovieEditorViewConroller.h
//  Movie
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright 2009 Tammer Saleh Consulting, Inc.. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Movie;

@interface MovieEditorViewConroller : UIViewController <UITextFieldDelegate> {
	UITextField *titleField;
	UITextField *boxOfficeGrossField;
	UITextField *summaryField;
	Movie *movie;
}

@property (nonatomic, retain) IBOutlet UITextField *titleField;
@property (nonatomic, retain) IBOutlet UITextField *boxOfficeGrossField;
@property (nonatomic, retain) IBOutlet UITextField *summaryField;
@property (nonatomic, retain) Movie *movie;

-(IBAction)done;

@end
