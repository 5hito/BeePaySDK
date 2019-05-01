//
//  BeeStoreKit.h
//  BeeIpayTest
//
//  Created by linshucan on 2018/5/2.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeePayNotificationHeader.h"

typedef NS_ENUM(NSInteger, BeePaymentRequestProductCode) {
    BeePaymentRequestSuccess = 0,
    BeePaymentNotExistProduct = -1,
    BeePaymentNotAvailableProduct = -2,
    BeePaymentCannotMakeRequest = -3,
};

@interface BeeStoreKit : NSObject

+ (instancetype)sharedKit;
- (void)validatePurchaseConfigs:(NSDictionary*)configs;
- (void)startValidateConfigs:(NSDictionary*)configs;

- (void)startProductRequest;
- (void)startProductRequestWithProductIdentifiers:(NSArray*)items;
- (void)restorePurchases;
- (void)refreshAppStoreReceipt;

- (BeePaymentRequestProductCode)initiatePaymentRequestForProductWithIdentifier:(NSString *)productId;
- (BOOL)purchasedAppBeforeVersion:(NSString *)requiredVersion;
- (BOOL)isProductPurchased:(NSString *)productId;
- (NSDate *)expiryDateForProduct:(NSString *)productId;
- (NSString*)getAppStorePurchaseReceiptData;

- (NSNumber *)availableCreditsForConsumable:(NSString *)consumableID;
- (NSNumber *)consumeCredits:(NSNumber *)creditCountToConsume identifiedByConsumableIdentifier:(NSString *)consumableId;
- (void)setDefaultCredits:(NSNumber *)creditCount forConsumableIdentifier:(NSString *)consumableId;

- (NSNumber*)getPurchaseRecordWithProductIdentifier:(NSString*)identifier;//获取过期时间
- (NSArray<NSString*>*)getAllKeysByPurchaseRecord;//获取所有购买id
- (BOOL)isTrialPeriodWithProductIdentifier:(NSString*)identifier;//是否是试用期
- (BOOL)getProductLocalePriceWithIdentifier:(NSString*)identifier
                                      price:(NSString**)price
                               currencyCode:(NSString**)code
                             currencySymbol:(NSString**)symbol;//获取产品价格及符号

@end
