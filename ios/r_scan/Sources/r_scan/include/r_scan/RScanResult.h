//
//  RScanResult.h
//  r_scan
//
//  Created by 李鹏辉 on 2019/12/28.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#if __has_include(<ZXingObjC/ZXingObjC.h>)
#import <ZXingObjC/ZXingObjC.h>
#define R_SCAN_HAS_ZXING 1
#else
#define R_SCAN_HAS_ZXING 0
#endif

#if __has_include(<ATBarSDK/ZBarSDK.h>)
#import <ATBarSDK/ZBarSDK.h>
#define R_SCAN_HAS_ZBAR 1
#else
#define R_SCAN_HAS_ZBAR 0
#endif
@interface RScanResult : NSObject

+(NSDictionary*) toMap:(AVMetadataMachineReadableCodeObject*) obj;

+(NSNumber*) getType:(AVMetadataObjectType)type;

#if R_SCAN_HAS_ZXING
+(NSNumber*) getZXingType:(ZXBarcodeFormat)format;
#endif

#if R_SCAN_HAS_ZBAR
+(NSNumber*) getZBarType:(zbar_symbol_type_t)format;
#endif
@end

