//
//  RecipesAppDelegate.h
//  Recipes
//
//  Created by Fabio Rocha on 5/8/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RecipesViewController;

@interface RecipesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    RecipesViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet RecipesViewController *viewController;

@end

