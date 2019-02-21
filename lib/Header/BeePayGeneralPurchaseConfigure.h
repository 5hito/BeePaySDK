//
//  BeePayGeneralPurchaseConfigure.h
//  BeePaySDK
//
//  Created by linshucan on 2019/2/12.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BeePayPurchaseItem.h"

/*  ====配置内购=====  */

@interface BeePayTempleConfigure : NSObject

//通用模板
@property (nonatomic, strong) UIImage* generalHotImage;//热门图片
@property (nonatomic, strong) UIColor* generalHotColor;//热门文字颜色

@property (nonatomic, strong) UIImage* generalNormalBackgroundImage;//普通态
@property (nonatomic, strong) UIImage* generalNormalBuyImage;
@property (nonatomic, strong) UIColor* generalNormalTitleColor;
@property (nonatomic, strong) UIColor* generalNormalSubTitleColor;
@property (nonatomic, strong) UIColor* generalNormalBuyTitleColor;
@property (nonatomic, strong) UIColor* generalNormalBuySubTitleColor;

@property (nonatomic, strong) UIImage* generalHightBackgroundImage;//选中态
@property (nonatomic, strong) UIImage* generalHightBuyImage;
@property (nonatomic, strong) UIColor* generalHightTitleColor;
@property (nonatomic, strong) UIColor* generalHightSubTitleColor;
@property (nonatomic, strong) UIColor* generalHightBuyTitleColor;
@property (nonatomic, strong) UIColor* generalHightBuySubTitleColor;

//热门模板
@property (nonatomic, strong) UIImage* popularHotImage;//热门图片
@property (nonatomic, strong) UIColor* popularHotColor;//热门文字颜色

@property (nonatomic, strong) UIImage* popularNormalBackgroundImage;//普通态
@property (nonatomic, strong) UIColor* popularNormalTitleColor;
@property (nonatomic, strong) UIColor* popularNormalSubTitleColor;

@property (nonatomic, strong) UIImage* popularHightBackgroundImage;//选中态
@property (nonatomic, strong) UIColor* popularHightTitleColor;
@property (nonatomic, strong) UIColor* popularHightSubTitleColor;

@end
/*  ====配置内购======   */

@interface BeePayGeneralPurchaseConfigure : NSObject

@property (nonatomic, assign) BOOL isGuide;
@property (nonatomic, strong) NSString* privacyPolicyUrl;
@property (nonatomic, strong) NSString* eulaUrl;
@property (nonatomic, strong) UIColor* privacyColor;
@property (nonatomic, strong) UIColor* privacyLinkColor;

@property (nonatomic, assign) CGFloat topOffset;
@property (nonatomic, assign) CGFloat bottomOffset;
@property (nonatomic, assign) NSInteger showTime;//关闭按钮多少秒后显示

@property (nonatomic, strong) UIImage* backgroundImage;//背景图
@property (nonatomic, strong) UIImage* logoImage;//应用图

@property (nonatomic, strong) NSString* headerTitle;//主标题
@property (nonatomic, strong) UIColor* headerTitleColor;//主标题颜色

@property (nonatomic, strong) NSArray<NSString*>* featuresArr;//功能项
@property (nonatomic, strong) UIColor* featuresGeneralColor;//功能项通用颜色
@property (nonatomic, strong) UIColor* featuresPopularColor;//功能项热门颜色

@property (nonatomic, strong) NSArray<BeePayPurchaseItem*>* purchaseArr;//内购项目
@property (nonatomic, strong) UIColor* purchaseDescribeColor;//描述颜色值

//popular
@property(nonatomic, strong) UIImage* tryFreeImage;//试用图片
@property(nonatomic, strong) UIColor* tryFreeTitleColor;//试用描述颜色
@property(nonatomic, strong) BeePayTempleConfigure* templeConfig;//模板配置

@end
