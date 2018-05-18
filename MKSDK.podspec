#
# Be sure to run `pod lib lint MKSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MKSDK'
  s.version          = '1.0.0'
  s.summary          = 'Interface SDK Of MKTECH.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/huxiaoluder/MKSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Xiaoming' => 'huxiaoluder@163.com' }
  s.source           = { :git => 'https://github.com/huxiaoluder/MKSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  # s.source_files = 'MKSDK/Classes/**/*'
  
  # s.resource_bundles = {
  #   'MKSDK' => ['MKSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.vendored_frameworks = 'MKSDK/*.{framework}'
  s.dependency 'Protobuf'
  s.dependency 'gRPC-ProtoRPC'
end
