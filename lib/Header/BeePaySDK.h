//
//  BeePaySDK.h
//  BeePaySDK
//
//  Created by linshucan on 2018/5/2.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BeePayPopType) {
    BeePayPopCloseType = 0,//关闭
    BeePayPopWatchVideoType = 1,
    BeePayPopClickPurchasedType = 2,
    BeePayPopPurchasedStateType = 3,
};

typedef void (^BeePayPopWindowCompletion)(BOOL success, BeePayPopType type, NSString* productID);
typedef void (^BeePayCheckPurchaseStatus)(BOOL status, NSString* errorMsg, NSString* productID, NSNumber* date);
typedef void (^BeePayInternalPurchaseSuccess)(NSString* productID);

@interface BeePayIapConfigure : NSObject

@property (nonatomic, strong) NSString* appLanguage;//应用语言
@property (nonatomic, strong) NSString* storeKitSharedSecret;//秘钥
@property (nonatomic, strong) NSArray<NSString*>* renewalProductArr;//订阅项
@property (nonatomic, strong) NSArray<NSString*>* consumablesArr;//消耗性，即一次性购买类型

@property (nonatomic, strong) NSString* rewardVideoUnitID;//谷歌激励视频广告id
@property (nonatomic, strong) NSString* configFile;//配置文件

@end

@interface BeePaySDK : NSObject

//sdk初始化内购配置
+ (void)initPurchaseConfigs:(BeePayIapConfigure*)configure withInternalPurchase:(BeePayInternalPurchaseSuccess)block;
+ (BeePayIapConfigure*)getPurchaseConfigure;
+ (NSString*)getRewardVideoUnitID;//获取激励视频广告id

//弹窗--controller不传，sdk默认是取最高层controller
+ (BOOL)showPopWindowPurchaseWithController:(UIViewController*)controller completion:(BeePayPopWindowCompletion)completionBlock;

//检测内购是否在使用中
+ (void)checkUserPurchaseStatus:(BeePayCheckPurchaseStatus)completionBlock;

//修改应用语言
+ (void)changeAppLanguage:(NSString*)language;
+ (NSString*)getAppLanguage;

//用户已经跳过广告后即将进入应用需要告知
+ (void)appWillEnterForeground;

@end
