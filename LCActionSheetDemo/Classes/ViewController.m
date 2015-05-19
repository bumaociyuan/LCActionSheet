//
//  ViewController.m
//  LCActionSheetDemo
//
//  Created by 刘超 on 15/4/26.
//  Copyright (c) 2015年 Leo. All rights reserved.
//

#import "ViewController.h"
#import "LCActionSheet.h"

@interface ViewController () <UITableViewDelegate>

@end

@implementation ViewController

/** 注销 */
- (IBAction)logout {
    // 实例方法
    LCActionSheet *sheet = [[LCActionSheet alloc] initWithTitle:@"你确定要注销吗？"
                                                   buttonTitles:@[@"确定"]
                                                 redButtonIndex:0
                                                        onClick:^(NSInteger index) {
                                                            NSLog(@"%d",index);
                                                        }];
    
    [sheet show];
}

/** 修改头像 */
- (IBAction)changeHeader {
    // 类方法
    LCActionSheet *sheet = [LCActionSheet sheetWithTitle:nil
                                            buttonTitles:@[@"拍照", @"从相册选择"]
                                          redButtonIndex:-1
                                                 onClick:^(NSInteger index) {
                                                     NSLog(@"%d",index);
                                                 }];
    
    [sheet show];
}

@end
