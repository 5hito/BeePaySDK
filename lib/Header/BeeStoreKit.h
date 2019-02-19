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

@property NSArray *availableProducts;
@property NSMutableDictionary *purchaseRecord;

+ (instancetype)sharedKit;
- (void)validatePurchaseConfigs:(NSDictionary*)configs;
- (void)startValidateConfigs:(NSDictionary*)configs;
- (NSString*)getAppStorePurchaseReceiptData;
- (void)startProductRequest;
- (void)startProductRequestWithProductIdentifiers:(NSArray*)items;
- (void)restorePurchases;
- (void)refreshAppStoreReceipt;
- (BeePaymentRequestProductCode)initiatePaymentRequestForProductWithIdentifier:(NSString *)productId;
- (BOOL)purchasedAppBeforeVersion:(NSString *)requiredVersion;
- (BOOL)isProductPurchased:(NSString *)productId;
- (NSDate *)expiryDateForProduct:(NSString *)productId;
- (NSNumber *)availableCreditsForConsumable:(NSString *)consumableID;
- (NSNumber *)consumeCredits:(NSNumber *)creditCountToConsume identifiedByConsumableIdentifier:(NSString *)consumableId;
- (void)setDefaultCredits:(NSNumber *)creditCount forConsumableIdentifier:(NSString *)consumableId;

@end
