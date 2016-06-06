//
//  DetailViewController.h
//  MeetupProject
//
//  Created by Luis Rollon Gordo on 6/6/16.
//  Copyright © 2016 Efecto Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

