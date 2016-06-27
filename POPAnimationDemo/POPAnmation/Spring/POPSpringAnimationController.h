//
//  POPSpringAnimationController.h
//  POPAnimationDemo
//
//  Created by Kael on 16/6/20.
//  Copyright © 2016年 创维海通. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDAnimationManager.h"
#import <POP/POP.h>


@interface POPSpringAnimationController : UIViewController<UITableViewDelegate,UITableViewDataSource>

-(void)setPopCircle;
@property (nonatomic) CALayer * popCircle;

@property (nonatomic) BOOL animated;
@property (nonatomic) NSString * animationType;
@property (nonatomic) NSArray * animationTypes;

@property (nonatomic) UITableView * tableView;

- (IBAction)showEffects:(id)sender;

/**
 *  @author Kael
 *
 *  @brief Bounciness值
 */
@property (weak, nonatomic) IBOutlet UISlider *bouncinessSlider;

- (IBAction)bouncinessValueChangeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief Speed值
 */
@property (weak, nonatomic) IBOutlet UISlider *speedSlider;

- (IBAction)speedValueChangeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief Tension Switch
 */
@property (weak, nonatomic) IBOutlet UISwitch *tensionSwitch;

- (IBAction)tensionSwitchValueChngeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief Tension slider
 */
@property (weak, nonatomic) IBOutlet UISlider *tensionSlider;

- (IBAction)tensionSliderValueChngeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief friction Switch
 */
@property (weak, nonatomic) IBOutlet UISwitch *frictionSwitch;

- (IBAction)frictionSwitchValueChngeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief friction Slider
 */
@property (weak, nonatomic) IBOutlet UISlider *frictionSlider;

- (IBAction)frictionSliderValueChangeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief mass Switch
 */
@property (weak, nonatomic) IBOutlet UISwitch *massSwitch;

- (IBAction)massSwitchValueChangeAction:(id)sender;

/**
 *  @author Kael
 *
 *  @brief mass Slider
 */
@property (weak, nonatomic) IBOutlet UISlider *massSlider;

- (IBAction)massSliderValueChangeAction:(id)sender;







@end
