//
//  POPDecayViewController.h
//  POPAnimationDemo
//
//  Created by Kael on 16/6/26.
//  Copyright © 2016年 创维海通. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <pop/POP.h>
#import "PDAnimationManager.h"



@interface POPDecayViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>


@property (nonatomic) UITableView * tableView;

@property (nonatomic) UIView * popCircle;
@property (nonatomic) BOOL animated;
@property (nonatomic) NSString * animationType;
@property (nonatomic) NSArray * animationTypes;




@property (weak, nonatomic) IBOutlet UISlider *decelerationSlider;
@property (weak, nonatomic) IBOutlet UISlider *velocitySlider;

- (IBAction)slideChanged:(id)sender;
- (IBAction)showEffects:(id)sender;



@end
