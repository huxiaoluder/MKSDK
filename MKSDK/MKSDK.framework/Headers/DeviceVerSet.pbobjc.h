// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceVerSet.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - DeviceVerSetDeviceVerSetRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface DeviceVerSetDeviceVerSetRoot : GPBRootObject
@end

#pragma mark - DeviceVerSetRpcRequest

typedef GPB_ENUM(DeviceVerSetRpcRequest_FieldNumber) {
  DeviceVerSetRpcRequest_FieldNumber_DeviceId = 1,
  DeviceVerSetRpcRequest_FieldNumber_DeviceSeckey = 2,
  DeviceVerSetRpcRequest_FieldNumber_SubDeviceId = 3,
  DeviceVerSetRpcRequest_FieldNumber_SwVer = 11,
  DeviceVerSetRpcRequest_FieldNumber_HwVer = 12,
};

/**
 * 请求方填写
 **/
@interface DeviceVerSetRpcRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subDeviceId;

/**
 * 版本格式: 3.33.01 = 33301
 * 只能累加，不能减少
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *swVer;

@property(nonatomic, readwrite, copy, null_resettable) NSString *hwVer;

@end

#pragma mark - DeviceVerSetRpcResponse

/**
 * 返回方填写
 **/
@interface DeviceVerSetRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)