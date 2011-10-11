//
//  SoapTestAppDelegate.h
//  SoapTest
//
//  Created by Mugdha Kulkarni on 9/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SoapTestViewController;

@interface SoapTestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SoapTestViewController *viewController;

@end
