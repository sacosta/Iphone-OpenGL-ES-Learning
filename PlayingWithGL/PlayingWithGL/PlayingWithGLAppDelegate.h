//
//  PlayingWithGLAppDelegate.h
//  PlayingWithGL
//
//  Created by Semidan Acosta Betancor on 27/05/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayingWithGLViewController;

@interface PlayingWithGLAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet PlayingWithGLViewController *viewController;

@end
