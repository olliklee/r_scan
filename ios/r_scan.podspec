Pod::Spec.new do |s|
  s.name             = 'r_scan'
  s.version          = '0.1.6'
  s.summary          = 'QR- and barcode-scanning Flutter plugin.'
  s.description      = <<-DESC
A Flutter plugin for scanning QR codes and barcodes from images, memory, URLs and camera.
  DESC
  s.homepage         = 'https://github.com/rhymelph/r_scan'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'r_scan contributors' => 'https://github.com/rhymelph/r_scan' }
  s.source           = { :path => '.' }

  s.source_files = 'r_scan/Sources/r_scan/**/*.{h,m}'
  s.public_header_files = 'r_scan/Sources/r_scan/include/r_scan/**/*.h'
  s.header_mappings_dir = 'r_scan/Sources/r_scan/include'

  s.dependency 'Flutter'
  s.dependency 'ATBarSDK', '~> 1.4.1'
  s.dependency 'ZXingObjC', '~> 3.6.5'

  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES'
  }
  s.ios.deployment_target = '13.0'
end
