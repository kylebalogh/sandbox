//
//  TeamCityTestAppDelegate.h
//  TeamCityTest
//
//  Created by Kyle Balogh on 7/1/11.
//  Copyright 2011 Redkab Creative. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TeamCityTestViewController;

@interface TeamCityTestAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TeamCityTestViewController *viewController;

@end
