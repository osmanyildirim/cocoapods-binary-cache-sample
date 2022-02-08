source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '11.0'

plugin 'cocoapods-binary-cache'

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

def binary_pod(name, *args)
  pod name, args, :binary => true
end

target 'cocoapods-binary-cache-sample' do
  use_frameworks!

  binary_pod 'HeraSDK'
  binary_pod 'Desk360'
  binary_pod 'lottie-ios'
  binary_pod 'IBAnimatable'
  binary_pod 'KDCircularProgress'
  binary_pod 'GooglePlaces'
  binary_pod 'UICKeyChainStore'
  binary_pod 'ContextMenu'
  binary_pod 'Alamofire'
end