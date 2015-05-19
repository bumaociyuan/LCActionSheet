//
//  Created by 刘超 on 15/4/26.
//  Copyright (c) 2015年 Leo. All rights reserved.
//
//  Email:  leoios@sina.com
//  GitHub: http://github.com/LeoiOS
//  如有问题或建议请给我发Email, 或在该项目的GitHub主页lssues我, 谢谢:)
//

#import <UIKit/UIKit.h>

@interface LCActionSheet : UIView

@property (nonatomic, copy) void (^ onClick)(NSInteger index);

/**
 *  返回一个ActionSheet对象, 类方法
 *
 *  @param title 提示标题
 *
 *  @param titles 所有按钮的标题
 *
 *  @param redButtonIndex 红色按钮的index
 *
 *  @param delegate 代理
 *
 *  Tip: 如果没有红色按钮, redButtonIndex给`-1`即可
 */
+ (instancetype)sheetWithTitle:(NSString *)title
                  buttonTitles:(NSArray *)titles
                redButtonIndex:(NSInteger)buttonIndex
                       onClick:(void (^)(NSInteger index))onClick;
- (instancetype)initWithTitle:(NSString *)title
                 buttonTitles:(NSArray *)titles
               redButtonIndex:(NSInteger)buttonIndex
                      onClick:(void (^)(NSInteger index))onClick;
- (void)show;

@end
