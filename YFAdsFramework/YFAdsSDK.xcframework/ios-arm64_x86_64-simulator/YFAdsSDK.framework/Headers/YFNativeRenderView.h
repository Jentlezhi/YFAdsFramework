//
//  YFNativeRenderView.h
//  YFAdsSDK
//
//  Created by Jentle-Zhi on 2024/8/7.
//

#import <UIKit/UIKit.h>
#import <YFAdsSDK/YFNativeRenderDelegate.h>
#import <YFAdsSDK/YFNativeRenderObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFNativeRenderViewConfig : NSObject

/// 自动播放媒体内容，默认YES
@property(nonatomic, assign) BOOL autoPlayMedia;
/// 媒体静音播放，默认YES
@property(nonatomic, assign) BOOL mediaPalyMute;

@end

@interface YFNativeRenderView : UIView

@property(nonatomic, weak) id<YFNativeRenderViewDelegate> delegate;

@property(nonatomic, weak) UIViewController *presentAdViewController;
/// 媒体视图
@property(nonatomic, weak, nullable, readonly) UIView *mediaView;
/// 供应商类型
@property(nonatomic, assign) YFSupplierType currentSupplierType;
/// 物料数据
@property(nonatomic, strong, readonly) YFNativeRenderObject *nativeRenderObject;

/**
 初始化渲染视图
 */
+ (instancetype)renderViewWithConfig:(void(^)(YFNativeRenderViewConfig *config))configBlcok;
/**
 每次接收到新数据时候刷新内容（必须实现）
 */
- (void)refreshWithData:(YFNativeRenderObject *)nativeRenderObject;
/**
 开始播放
 */
- (void)play;
/**
 暂停播放
 */
- (void)pause;
/**
 注册响应视图
 */
- (void)registerDataObjectWithClickableViews:(NSArray<__kindof UIView *> *)clickableViews;

@end

NS_ASSUME_NONNULL_END
