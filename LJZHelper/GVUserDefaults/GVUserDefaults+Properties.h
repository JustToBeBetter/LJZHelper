//
//  GVUserDefaults+Properties.h
//  LJZHelper
//
//  Created by DBOX on 2016/12/15.
//  Copyright © 2016年 DBOX. All rights reserved.
//

#import "GVUserDefaults.h"

#define LJZUserDefault [GVUserDefaults standardUserDefaults]

@interface GVUserDefaults (Properties)

@property (nonatomic,weak) NSString *userName;
@property (nonatomic,weak) NSString *name;
@property (nonatomic,weak) NSString *role;

@property (nonatomic,assign) BOOL isFirstLaunch;

@end
