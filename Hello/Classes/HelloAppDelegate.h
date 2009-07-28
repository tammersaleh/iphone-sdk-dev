//
//  HelloAppDelegate.h
//  Hello
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloViewController;

@interface HelloAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloViewController *viewController;

@end

