//
//  SCDetailViewController.h
//  Scrumptious
//
//  Created by Matthieu Rouif on 1/31/13.
//  Copyright (c) 2013 com.facebook.samples. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
