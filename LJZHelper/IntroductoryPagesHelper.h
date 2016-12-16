//
//  IntroductorypagesHelper.h
//  LJZHelper
//
//  Created by DBOX on 2016/12/15.
//  Copyright © 2016年 DBOX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IntroductoryPagesView.h"

@interface IntroductoryPagesHelper : NSObject

+ (instancetype)shareInstance;

+(void)showIntroductoryPageView:(NSArray *)imageArray;


@end
