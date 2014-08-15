//
//  MasterViewController.h
//  ControlingSource
//
//  Created by Armstrong, Eric {BIS} on 8/15/14.
//  Copyright (c) 2014 Armstrong, Eric {BIS}. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
