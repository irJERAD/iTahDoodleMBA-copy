//
//  BNRAppDelegate.h
//  iTahDoodleMBA
//
//  Created by Jerad Acosta on 12/14/13.
//  Copyright (c) 2013 smAsh Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declare a helper function that we will use to get a path
// to the location on desk where we can save the to-do list
NSString *docPath(void);

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    
    NSMutableArray *tasks;
}

- (void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
