#
# Be sure to run `pod lib lint KochavaLocationiOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'KochavaLocationiOS'
    s.version          = '3.11.4'
    s.summary          = 'The KochavaLocation module of the KochavaTracker iOS SDK.'
    
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!
    
    s.description  = <<-DESC
    The KochavaLocation module provides location and geofence engagement.
    DESC
    
    s.homepage         = 'http://www.kochava.com'
    # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
    s.license          = { :type => 'Commercial', :file => 'LICENSE' }
    s.author       = { 'Kochava' => 'support@kochava.com' }
    s.source           = { :git => 'https://github.com/Kochava/kochava-location-ios-cocoapod.git', :tag => s.version.to_s }
    # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

    s.ios.deployment_target = '8.0'
    
    s.source_files = 'KochavaLocationiOS/Classes/**/*'
    
    # s.resource_bundles = {
    #   'KochavaLocationiOS' => ['KochavaLocationiOS/Assets/*.png']
    # }
    
    s.public_header_files = 'KochavaLocationiOS/Classes/**/*.h'
    s.frameworks   = 'Foundation', 'UIKit', 'AVFoundation', 'CoreGraphics', 'CoreLocation', 'SystemConfiguration'
    # s.dependency 'AFNetworking', '~> 2.3'
    
    s.platform     = :ios, '8.0'
    s.vendored_library = 'KochavaLocationiOS/Libraries/libKochavaLocationiOS.a'
    s.preserve_path = 'KochavaLocationiOS/Libraries/libKochavaLocationiOS.a'
    s.library = 'KochavaLocationiOS'
    
    s.dependency 'KochavaTrackeriOS', '3.11.4'
end
