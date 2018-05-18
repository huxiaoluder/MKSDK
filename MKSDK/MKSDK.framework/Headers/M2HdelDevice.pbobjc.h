// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: M2HDelDevice.proto

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

#pragma mark - M2HDelDeviceM2HdelDeviceRoot

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
@interface M2HDelDeviceM2HdelDeviceRoot : GPBRootObject
@end

#pragma mark - M2HDelDeviceRpcRequest

typedef GPB_ENUM(M2HDelDeviceRpcRequest_FieldNumber) {
  M2HDelDeviceRpcRequest_FieldNumber_DeviceId = 1,
  M2HDelDeviceRpcRequest_FieldNumber_DeviceSeckey = 2,
  M2HDelDeviceRpcRequest_FieldNumber_SubDeviceId = 3,
};

/**
 * 请求方填写
 **/
@interface M2HDelDeviceRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subDeviceId;

@end

#pragma mark - M2HDelDeviceRpcResponse

/**
 * 返回方填写
 **/
@interface M2HDelDeviceRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
