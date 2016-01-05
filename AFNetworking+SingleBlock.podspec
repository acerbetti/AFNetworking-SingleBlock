Pod::Spec.new do |s|
  s.name         = 'AFNetworking+SingleBlock'
  s.version      = '0.0.2'
  s.summary      = 'Categories that aggregate the success and failure block in one single solution'
  s.description  = <<-DESC
                   These categories are designed to solve two problems with the popular AFNetworking library.
                   1. The failure block doesn't return the responseObject, which can contain more information about the error
                   2. Sometimes having a single block is better than two, for example to avoid code duplication when the call is complete
  DESC
  s.homepage     = 'https://github.com/acerbetti/AFNetworking-SingleBlock'
  s.license      = 'MIT'
  s.author       = { "Stefano Acerbetti" => "acerbetti@gmail.com" }
  s.source       = { :git => 'https://github.com/acerbetti/AFNetworking-SingleBlock.git',
                     :tag => "v#{s.version}" }

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'
  s.requires_arc = true

  s.source_files = '*.{h,m}'

  s.dependency 'AFNetworking', '~> 3.0'
end
