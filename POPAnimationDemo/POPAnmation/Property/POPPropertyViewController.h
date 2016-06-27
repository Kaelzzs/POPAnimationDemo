//
//  POPPropertyViewController.h
//  POPAnimationDemo
//
//  Created by Kael on 16/6/26.
//  Copyright © 2016年 创维海通. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDAnimationManager.h"
#import <POP/POP.h>

@interface POPPropertyViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>


@property (weak, nonatomic) IBOutlet UILabel *countingLabel;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) NSString * animationType;
@property (nonatomic) NSArray * animationTypes;

- (IBAction)showEffects:(id)sender;



@end
