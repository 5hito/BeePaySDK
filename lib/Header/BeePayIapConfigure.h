//
//  BeePayIapConfigure.h
//  BeePaySDK
//
//  Created by linshucan on 2019/5/9.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BeePayPopType) {
    BeePayPopCloseType = 0,//关闭
    BeePayPopWatchVideoType = 1,
    BeePayPopClickPurchasedType = 2,
    BeePayPopPurchasedStateType = 3,
};

typedef NS_ENUM(NSInteger, BeePayPurchaseTemplate) {  //模板id
    BeePayPurchaseGeneralTemplate = 1,                //通用模板
    BeePayPurchasePopularTemplate = 2,                //热门模板
    BeePayPurchaseTrialPeriodTemplate = 3,            //试用模板
    BeePayPurchaseDiscountTemplate = 4,               //折扣模板
};

typedef NS_ENUM(NSInteger, BeePayInternalStatus) {  //状态回调
    BeePayInternalAlertCloseStatus = 1,             //订阅弹窗-关闭
    BeePayInternalAlertGoStatus,                    //订阅弹窗-跳转
    BeePayInternalShowStatus,                       //展示
    BeePayInternalCloseStatus,                      //关闭
    BeePayInternalClickPurchaseStatus,              //点击购买
    BeePayInternalPurchaseSuccessStatus,            //购买成功
    BeePayInternalPurchaseFailureStatus,            //购买失败
    BeePayInternalClickRestoreStatus,               //点击恢复
    BeePayInternalRestoreSuccessStatus,             //恢复购买成功
    BeePayInternalRestoreFailureStatus,             //恢复购买失败
};

typedef void (^BeePayPopWindowCompletion)(BOOL success, BeePayPopType type, NSString* productID);
typedef void (^BeePayCheckPurchaseStatus)(BOOL status, NSString* errorMsg, NSString* productID, NSNumber* date);
typedef void (^BeePayInternalPurchaseSuccess)(BeePayInternalStatus status, BeePayPurchaseTemplate templateID, NSString* productID);

@interface BeePayIapConfigure : NSObject

@property (nonatomic, strong) NSString* storeKitSharedSecret;//秘钥
@property (nonatomic, strong) NSArray<NSString*>* renewalProductArr;//订阅项
@property (nonatomic, strong) NSArray<NSString*>* consumablesArr;//消耗性，即一次性购买类型

@property (nonatomic, strong) NSString* appLanguage;//应用语言
@property (nonatomic, strong) NSString* rewardVideoUnitID;//谷歌激励视频广告id
@property (nonatomic, strong) NSString* configFile;//配置文件

@end


