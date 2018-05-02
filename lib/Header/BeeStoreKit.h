//
//  BeeStoreKit.h
//  BeeIpayTest
//
//  Created by linshucan on 2018/5/2.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kBeeStoreKitProductsAvailableNotification;

extern NSString *const kBeeStoreKitProductsAvailableFailedNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit completes purchase of a product
 */
extern NSString *const kBeeStoreKitProductPurchasedNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit fails to complete the purchase of a product
 */
extern NSString *const kBeeStoreKitProductPurchaseFailedNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit has a purchase deferred for approval
 *  @discussion
 *  This occurs when a device has parental controls for in-App Purchases enabled.
 *   iOS will present a prompt for parental approval, either on the current device or
 *   on the parent's device. Update your UI to reflect the deferred status, and wait
 *   to be notified of the completed or failed purchase.
 *  @availability iOS 8.0 or later
 */
extern NSString *const kBeeStoreKitProductPurchaseDeferredNotification NS_AVAILABLE(10_10, 8_0);

/*!
 *  @abstract This notification is posted when BeeStoreKit completes restoring purchases
 */
extern NSString *const kBeeStoreKitRestoredPurchasesNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit fails to restore purchases
 */
extern NSString *const kBeeStoreKitRestoringPurchasesFailedNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit fails to validate receipts
 */
extern NSString *const kBeeStoreKitReceiptValidationFailedNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit detects expiration of a auto-renewing subscription
 */
extern NSString *const kBeeStoreKitSubscriptionExpiredNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit downloads a hosted content
 */
extern NSString *const kBeeStoreKitDownloadProgressNotification;

/*!
 *  @abstract This notification is posted when BeeStoreKit completes downloading a hosted content
 */
extern NSString *const kBeeStoreKitDownloadCompletedNotification;

@interface BeeStoreKit : NSObject

@property NSArray *availableProducts;
@property NSMutableDictionary *purchaseRecord;

+ (instancetype)sharedKit;
- (void)startValidateConfigs:(NSDictionary*)configs;
- (void)startProductRequest;
- (void)startProductRequestWithProductIdentifiers:(NSArray*)items;
- (void)restorePurchases;
- (void)refreshAppStoreReceipt;
- (void)initiatePaymentRequestForProductWithIdentifier:(NSString *)productId;
- (BOOL)purchasedAppBeforeVersion:(NSString *)requiredVersion;
- (BOOL)isProductPurchased:(NSString *)productId;
- (NSDate *)expiryDateForProduct:(NSString *)productId;
- (NSNumber *)availableCreditsForConsumable:(NSString *)consumableID;
- (NSNumber *)consumeCredits:(NSNumber *)creditCountToConsume identifiedByConsumableIdentifier:(NSString *)consumableId;
- (void)setDefaultCredits:(NSNumber *)creditCount forConsumableIdentifier:(NSString *)consumableId;

@end
