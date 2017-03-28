//
//  CYTScopeView.h
//  CYTProgress
//
//  Created by 。。。 on 2017/3/28.
//  Copyright © 2017年 isofoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CYTScopeView : UIView

@property(nonatomic,strong)NSArray *indicatorArr;
@property(nonatomic,copy)NSString *npkScope;
@property(nonatomic,copy)NSString *npkNameLabel;


/**
 描述

 @param frame        设置frame
 @param indicatorArr 设置区间大小
 @param npkScope     设置点的位置
 @param npkNameLabel 这是title

 @return nil
 */
- (instancetype)initWithFrame:(CGRect)frame indicatorValue:(NSArray *)indicatorArr npkScope:(NSString *)npkScope npkNameLabel:(NSString *)npkNameLabel;


@end
