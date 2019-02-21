
Pod::Spec.new do |s|

  s.name         = "BeePaySDK"
  s.version      = "1.0.5"
  s.summary      = "集合内购支付sdk"
  s.description  = <<-DESC
    0.0.x:苹果支付接口整合
    0.1.0:bitcode
    1.0.x:全新内购sdk
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
  s.dependency 'BeeAdMobNewSDK'

end
