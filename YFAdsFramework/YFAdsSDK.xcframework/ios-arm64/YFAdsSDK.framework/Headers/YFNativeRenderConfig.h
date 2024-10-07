//
//  YFNativeRenderConfig.h
//  YFAdsSDKDemo
//
//  Created by Jentle-Zhi on 2024/3/29.
//

#import <UIKit/UIKit.h>
#import <YFAdsSDK/YFCommon.h>

NS_ASSUME_NONNULL_BEGIN
///===========================================================
/// YFNativeRenderSupplier
///===========================================================
@interface YFNativeRenderSupplier : NSObject
/// 广告商类型
@property(nonatomic, assign, readonly) YFSupplierType supplierType;
/// 应用的appId
@property(nonatomic, copy, nonnull) NSString *appId;
/// 广告位id
@property(nonatomic, copy, nonnull) NSString *adspotId;
/// 渠道id
@property(nonatomic, copy, nullable) NSString *channelId;

@end
///===========================================================
/// YFNativeRenderConfig
///===========================================================
@interface YFNativeRenderConfig : NSObject
/// 元坊posId
@property(nonatomic, copy, nonnull) NSString *posId;
/// 竞价类型
@property(nonatomic, assign, readonly) YFAdsShowType showType;

@end

NS_ASSUME_NONNULL_END
