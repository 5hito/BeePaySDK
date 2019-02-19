//
//  BeePayPopPurchaseConfigure.h
//  BeePaySDK
//
//  Created by linshucan on 2019/2/13.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BeePayPurchaseItem.h"

@interface BeePayPopPurchaseConfigure : NSObject

//弹窗背景颜色
@property (nonatomic, strong) UIColor* backgroundColor;
@property (nonatomic, strong) UIImage* closeImage;

//应用图
@property (nonatomic, strong) UIImage* logoImage;
@property (nonatomic, assign) CGFloat logoTopOffset;

//标题
@property (nonatomic, strong) NSString* headerTitle;
@property (nonatomic, strong) UIColor* headerTitleColor;

//视频配置
@property (nonatomic, assign) NSInteger watchVideoCount;
@property (nonatomic, strong) UIImage* watchVideoImage;
@property (nonatomic, strong) UIColor* watchVideoColor;

//内购项基本配置
@property (nonatomic, strong) UIImage* purchaseBgImage;//背景
@property (nonatomic, strong) UIColor* purchaseTitleColor;//按钮字颜色
@property (nonatomic, strong) UIColor* purchaseDesColor;//描述文字颜色

//内购项配置
@property (nonatomic, strong) NSArray<BeePayPurchaseItem*>* purchaseArr;

//功能项
@property (nonatomic, strong) NSArray<NSString*>* featuresArr;
@property (nonatomic, strong) UIColor* featuresColor;

@end

