//
//  HelloUserAppDelegate.h
//  HelloUser
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright Tammer Saleh Consulting, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloUserViewController;

@interface HelloUserAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloUserViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloUserViewController *viewController;

@end

