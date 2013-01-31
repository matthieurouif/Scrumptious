//
//  SCMasterViewController.h
//  Scrumptious
//
//  Created by Matthieu Rouif on 1/31/13.
//  Copyright (c) 2013 com.facebook.samples. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCDetailViewController;

@interface SCMasterViewController : UITableViewController

@property (strong, nonatomic) SCDetailViewController *detailViewController;

@end
