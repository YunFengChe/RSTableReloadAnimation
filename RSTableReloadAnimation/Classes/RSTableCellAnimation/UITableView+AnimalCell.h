//
//  UITableView+AnimalCell.h
//
//  Created by ahq-pc-01044 on 2017/9/15.
//  Copyright © 2017年 YunFengChe. All rights reserved.
//
//  UITableView上cell动画方案

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, RSTableViewAnimationType) {
    RSTableViewAnimationTypeMove = 0,
    RSTableViewAnimationTypeAlpha,
    RSTableViewAnimationTypeFall,
    RSTableViewAnimationTypeShake,
    RSTableViewAnimationTypeOverTurn,
    RSTableViewAnimationTypeToTop,
    RSTableViewAnimationTypeSpringList,
    RSTableViewAnimationTypeShrinkToTop,
    RSTableViewAnimationTypeLayDown,
    RSTableViewAnimationTypeRote,
};

@interface UITableView (AnimalCell)

/**
 reloadData 并附带cell动画

 @param animationType 动画类型
 */
- (void)rs_reloadDataWithAnimationType:(RSTableViewAnimationType)animationType;

@end
