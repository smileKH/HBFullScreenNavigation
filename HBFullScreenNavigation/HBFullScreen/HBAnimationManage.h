//
//  HBAnimationManage.h
//  HBFullScreenNavigation
//
//  Created by 胡明波 on 2019/7/22.
//  Copyright © 2019 mingsishui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenHeight [UIScreen mainScreen].bounds.size.height


@interface HBAnimationManage : NSObject<UIViewControllerAnimatedTransitioning>

+ (instancetype)AnimationControllerWithOperation:(UINavigationControllerOperation)operation;
+ (instancetype)AnimationControllerWithOperation:(UINavigationControllerOperation)operation NavigationController:(UINavigationController *)navigationController;

@property(nonatomic,assign)UINavigationControllerOperation  navigationOperation;
@property(nonatomic,weak)UINavigationController * navigationController;

/**
 导航栏Pop时删除了多少张截图（调用PopToViewController时，计算要删除的截图的数量）
 */
@property(nonatomic,assign)NSInteger  removeCount;

/**
 调用此方法删除数组最后一张截图 (调用pop手势或一次pop多个控制器时使用)
 */
- (void)removeLastScreenShot;
/**
 移除全部屏幕截图
 */
- (void)removeAllScreenShot;
/**
 从截屏数组尾部移除指定数量的截图
 */
- (void)removeLastScreenShotWithNumber:(NSInteger)number;

@end


