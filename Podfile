source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '11.0'

plugin "cocoapods-binary-cache"

config_cocoapods_binary_cache(
  cache_repo: {
    "default" => {
      "remote" => "git@github.com:osmanyildirim/PodsStore.git",
      "local" => "~/.cocoapods-binary-cache/prebuilt-frameworks"
    }
  },
  prebuild_sandbox_path: ".prebuild",
  prebuild_delta_path: ".prebuild_delta",
  prebuild_config: "Debug",
  device_build_enabled: true,
  xcframework: true
)

use_frameworks!
inhibit_all_warnings!

target 'cocoapods-binary-cache-sample' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

   pod 'HeraSDK', :binary => true
   pod 'Desk360', :binary => true
   pod 'lottie-ios', :binary => true
   pod 'IBAnimatable', :binary => true
   pod 'KDCircularProgress', :binary => true
   pod 'GooglePlaces', :binary => true
   pod 'UICKeyChainStore', :binary => true
   pod 'ContextMenu', :binary => true
   pod 'Alamofire', :binary => true
   pod 'SwiftyJSON', '~> 4.0', :binary => true
end
