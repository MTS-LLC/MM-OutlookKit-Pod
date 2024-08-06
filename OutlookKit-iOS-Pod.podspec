#
# Be sure to run `pod lib lint OutlookKit-iOS-Pod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OutlookKit-iOS-Pod'
s.version='1.1.0'
  s.summary          = 'The MinuteMaps OutlookKit for iOS.'

  s.description      = 'OutlookKit that integrates with the MinuteMaps iOS SDK.'

  s.homepage         = 'http://minuteman-llc.com'
  s.author           = { 'mattWillis' => 'matt.willis@minuteman-llc.com' }
  s.source           = { :git => 'https://github.com/MTS-LLC/MM-OutlookKit-iOS-Pod.git', :tag => "#{s.version}" }

  s.license          = { :type => 'MIT', :file => 'LICENSE' }

  s.ios.deployment_target = '10.0'
  s.dependency "JMapiOSSDK"
  s.platform = :ios, '10.0'
  s.vendored_frameworks = 'OutlookKit-iOS-Pod/Frameworks/*.xcframework'
end
