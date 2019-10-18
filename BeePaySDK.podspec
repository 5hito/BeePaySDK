
Pod::Spec.new do |s|

  s.name         = "BeePaySDK"
  s.version      = "1.9.0"
  s.summary      = "集合内购支付sdk"
  s.description  = <<-DESC
    0.0.x:苹果支付接口整合
    0.1.0:bitcode
    1.x.x:全新内购sdk
    1.5.x:添加Kochava
    1.6.x:添加新的模板
    1.7.0:remove ads
    1.7.2:add app recommand
    1.7.3:app recommand & subs
    1.7.5:fix bugs
    1.7.8:change url
    1.8.0:fix app recommand
    1.8.1:fix language bugs
    1.8.2:add appstore pay
    1.8.3:fix bugs
    1.8.5/6:fix bugs
    1.8.7:添加App Store内购跳转
    1.8.8:fix bugs
    1.8.9:fix bugs
    1.9.0:fix bugs
                   DESC

  s.homepage     = "https://github.com/5hito/BeePaySDK"
  s.license      = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }

  s.ios.deployment_target    = '8.0'
  s.source       = { :git => "https://github.com/5hito/BeePaySDK.git", :tag => s.version.to_s }

  s.frameworks = "StoreKit"

  s.requires_arc = true
  s.resources = 'lib/Resources/*.bundle'
  s.source_files = 'lib/Header/*.h'
  s.ios.vendored_libraries = 'lib/libBeePaySDK.a'

  s.dependency 'BeeCommonSDK'
  s.dependency 'BeeAFNetSDK'
  s.dependency 'KochavaTrackeriOS'
  s.dependency 'iCarousel'

end
