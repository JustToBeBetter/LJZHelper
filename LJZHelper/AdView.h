//
//  AdView.h
//  LJZHelper
//
//  Created by DBOX on 2016/12/15.
//  Copyright © 2016年 DBOX. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kAdscreenWidth [UIScreen mainScreen].bounds.size.width
#define kAdscreenHeight [UIScreen mainScreen].bounds.size.height
#define kAdMain_Screen_Bounds [[UIScreen mainScreen] bounds]
#define kAdUserDefaults [NSUserDefaults standardUserDefaults]

static NSString *const adImageName = @"adImageName";

@interface AdView : UIView

/**
 *  显示广告
 */
- (void)show;
/**
 *  图片路径
 */

@property (nonatomic,copy) NSString *filePath;

@end
