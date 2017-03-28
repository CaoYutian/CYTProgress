//
//  UIButton+Additions.h
//  CYTProgress
//
//  Created by 。。。 on 2017/3/28.
//  Copyright © 2017年 isofoo. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^ButtonActionBlock)();

@interface UIButton (Additions)

typedef NS_ENUM(NSUInteger, AppButtonEdgeInsetsStyle) {
    AppButtonEdgeInsetsStyleTop,    // image在上，label在下
    AppButtonEdgeInsetsStyleLeft,   // image在左，label在右
    AppButtonEdgeInsetsStyleBottom, // image在下，label在上
    AppButtonEdgeInsetsStyleRight   // image在右，label在左
};

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(AppButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end
