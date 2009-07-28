//
//  HelloAppDelegate.m
//  Hello
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import "HelloAppDelegate.h"
#import "HelloViewController.h"

@implementation HelloAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
