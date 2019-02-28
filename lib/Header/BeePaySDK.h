//
//  BeePaySDK.h
//  BeePaySDK
//
//  Created by linshucan on 2018/5/2.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeePayPopPurchaseConfigure.h"

typedef NS_ENUM(NSInteger, BeePayPopType) {
    BeePayPopCloseType = 0,//关闭
    BeePayPopWatchVideoType = 1,
    BeePayPopClickPurchasedType = 2,
    BeePayPopPurchasedStateType = 3,
};

typedef void (^BeePayPopWindowCompletion)(BOOL success, BeePayPopType type, NSString* productID);

@interface BeePayIapConfigure : NSObject

@property (nonatomic, strong) NSString* storeKitSharedSecret;//秘钥
@property (nonatomic, strong) NSArray<NSString*>* renewalProductArr;//订阅项
@property (nonatomic, strong) NSArray<NSString*>* consumablesArr;//消耗性，即一次性购买类型

@property (nonatomic, strong) NSString* rewardVideoUnitID;//谷歌激励视频广告id

@end

@interface BeePaySDK : NSObject

//sdk初始化内购配置
+ (void)initPurchaseConfigs:(BeePayIapConfigure*)configure;
+ (NSString*)getRewardVideoUnitID;//获取激励视频广告id

//弹窗--controller不传，sdk默认是取最高层controller
+ (void)showPopWindowPurchase:(BeePayPopPurchaseConfigure*)configure withController:(UIViewController*)controller completion:(BeePayPopWindowCompletion)completionBlock;

@end
