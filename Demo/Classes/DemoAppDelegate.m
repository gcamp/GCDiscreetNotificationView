//
//  DemoAppDelegate.m
//  Demo
//
//  Created by Guillaume Campagna on 09-12-28.
//  Copyright LittleKiwi 2009. All rights reserved.
//

#import "DemoAppDelegate.h"
#import "DemoViewController.h"

@implementation DemoAppDelegate

@synthesize window;
@synthesize viewController;

- (void)applicationDidFinishLaunching:(UIApplication *)application {
    window.rootViewController = viewController;
    [window makeKeyAndVisible];
}

- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}

@end
