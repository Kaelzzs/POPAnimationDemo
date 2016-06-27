//
//  POPBasicViewController.h
//  POPAnimationDemo
//
//  Created by Kael on 16/6/26.
//  Copyright © 2016年 创维海通. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <pop/POP.h>
#import "PDAnimationManager.h"


@interface POPBasicViewController : UIViewController<UITableViewDelegate,UITableViewDelegate>

@property (nonatomic) CALayer * popCircle;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) BOOL animated;
@property (nonatomic) NSString * animationType;
@property (nonatomic) NSArray * animationTypes;

- (IBAction)showEffects:(id)sender;


@end
