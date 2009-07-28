//
//  MovieAppDelegate.h
//  Movie
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MovieViewController;

@interface MovieAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MovieViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MovieViewController *viewController;

@end

