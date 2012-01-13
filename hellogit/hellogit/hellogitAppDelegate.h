//
//  hellogitAppDelegate.h
//  hellogit
//
//  Created by g34li on 1/13/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class hellogitViewController;

@interface hellogitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet hellogitViewController *viewController;

@end
