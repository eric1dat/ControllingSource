//
//  DetailViewController.h
//  ControlingSource
//
//  Created by Armstrong, Eric {BIS} on 8/15/14.
//  Copyright (c) 2014 Armstrong, Eric {BIS}. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
