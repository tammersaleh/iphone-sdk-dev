//
//  MovieViewController.h
//  Movie
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Movie;

@interface MovieViewController : UIViewController {
	Movie *movie;
	UILabel *titleLabel;
	UILabel *boxOfficeGrossLabel;
	UILabel *summaryLabel;
}

@property (nonatomic, retain) Movie *movie;
@property (nonatomic, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, retain) IBOutlet UILabel *boxOfficeGrossLabel;
@property (nonatomic, retain) IBOutlet UILabel *summaryLabel;

- (IBAction) edit;

@end

