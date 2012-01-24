//
//  BubbleViewAppDelegate.h
//  BubbleView
//
//  Created by Mikael Hallendal on 2011-02-18.
//  Copyright 2011 Mikael Hallendal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MHBubbleViewViewController;

@interface MHBubbleViewAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet MHBubbleViewViewController *viewController;

@end
