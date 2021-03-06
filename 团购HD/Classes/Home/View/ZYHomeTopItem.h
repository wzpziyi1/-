//
//  ZYHomeTopItem.h
//  团购HD
//
//  Created by 王志盼 on 15/8/11.
//  Copyright (c) 2015年 王志盼. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZYHomeTopItem : UIView
+ (instancetype)homeTopItem;

- (void)addTarget:(id)target action:(SEL)action;

- (void)setTitle:(NSString *)title;

- (void)setSubTitle:(NSString *)title;

- (void)setIcon:(NSString *)icon highIcon:(NSString *)highIcon;
@end
