//
//  IntroductoryPagesHelper.m
//  LJZHelper
//
//  Created by DBOX on 2016/12/15.
//  Copyright © 2016年 DBOX. All rights reserved.
//

#import "IntroductoryPagesHelper.h"

#define MainScreen_width  [UIScreen mainScreen].bounds.size.width//宽
#define MainScreen_height [UIScreen mainScreen].bounds.size.height//高

@interface IntroductoryPagesHelper()

@property (nonatomic) UIWindow *rootWindow;
@property(nonatomic,strong)IntroductoryPagesView *curIntroductoryPagesView;

@end

@implementation IntroductoryPagesHelper

+ (instancetype)shareInstance
{
    static IntroductoryPagesHelper *shareInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shareInstance = [[IntroductoryPagesHelper alloc] init];
    });
    
    return shareInstance;
}

-(instancetype)init
{
    self = [super init];
    if (self) {
        
    }
    return self;
}


+(void)showIntroductoryPageView:(NSArray *)imageArray
{
    if (![IntroductoryPagesHelper shareInstance].curIntroductoryPagesView) {
        [IntroductoryPagesHelper shareInstance].curIntroductoryPagesView=[[IntroductoryPagesView alloc]initPagesViewWithFrame:CGRectMake(0, 0, MainScreen_width, MainScreen_height) images:imageArray];
    }
    
    [IntroductoryPagesHelper shareInstance].rootWindow = [UIApplication sharedApplication].keyWindow;
    [[IntroductoryPagesHelper shareInstance].rootWindow addSubview:[IntroductoryPagesHelper shareInstance].curIntroductoryPagesView];
}


@end
