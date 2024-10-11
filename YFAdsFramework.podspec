Pod::Spec.new do |s|
  s.name             = 'YFAdsFramework'
  s.version          = '1.9.2'
  s.summary          = 'A ads collection of iOS.'
  s.homepage         = 'https://github.com/Jentlezhi'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Jentle' => 'juntaozhi@163.com' }
  s.source           = { :git => 'https://github.com/Jentlezhi/YFAdsFramework.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 arm64' }
  #公共
  s.subspec 'Core' do |ss|
      ss.vendored_frameworks = 'YFAdsFramework/YFAdsSDK.xcframework'
  end
  #依赖库
  s.dependency 'AFNetworking'
  #百青藤
  s.subspec 'YFBDSDK' do |ss|
    ss.dependency 'YFAdsFramework/Core'
    ss.dependency 'BaiduMobAdSDK','5.352'
  end
  #快手
  s.subspec 'YFKSSDK' do |ss|
    ss.dependency 'YFAdsFramework/Core'
    ss.dependency 'KSAdSDK','3.3.65'
  end
  #优量汇
  s.subspec 'YFYLHSDK' do |ss|
    ss.dependency 'YFAdsFramework/Core'
    ss.dependency 'GDTMobSDK','4.14.80'
  end
  #穿山甲
  s.subspec 'YFCSJSDK' do |ss|
     ss.dependency 'YFAdsFramework/Core'
     ss.dependency 'Ads-Fusion-CN-Beta/BUAdSDK','6.1.2.8'
     ss.dependency 'Ads-Fusion-CN-Beta/CSJMediation','6.1.2.8'
  end
end


