//
//  DetailViewController.h
//  Hypnosister
//
//  Created by ZhengqingXU on 2/25/16.
//  Copyright © 2016 Big Nerd Ranch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

