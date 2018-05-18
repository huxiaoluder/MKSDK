// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceCheck.proto

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

@class DeviceCheckResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - DeviceCheckDeviceCheckRoot

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
@interface DeviceCheckDeviceCheckRoot : GPBRootObject
@end

#pragma mark - DeviceCheckResult

typedef GPB_ENUM(DeviceCheckResult_FieldNumber) {
  DeviceCheckResult_FieldNumber_Code = 1,
  DeviceCheckResult_FieldNumber_DeviceId = 2,
};

@interface DeviceCheckResult : GPBMessage

/** 返回代码,具体参见代码说明 */
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@end

#pragma mark - DeviceCheckRpcRequest

typedef GPB_ENUM(DeviceCheckRpcRequest_FieldNumber) {
  DeviceCheckRpcRequest_FieldNumber_ClientId = 1,
  DeviceCheckRpcRequest_FieldNumber_ReqTime = 2,
  DeviceCheckRpcRequest_FieldNumber_SignKey = 3,
  DeviceCheckRpcRequest_FieldNumber_DeviceIdsArray = 5,
};

/**
 * 请求方填写
 **/
@interface DeviceCheckRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *clientId;

/** true;单位秒,请求时间戳，在该时间开始的15分钟内该请求有效，放置数据重放攻击. */
@property(nonatomic, readwrite) int64_t reqTime;

/** true;签名字串,计算方法： md5(req_time + client_srcret) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *signKey;

/** 设备ID(需要校验的设备ID,可多个) */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *deviceIdsArray;
/** The number of items in @c deviceIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger deviceIdsArray_Count;

@end

#pragma mark - DeviceCheckRpcResponse

typedef GPB_ENUM(DeviceCheckRpcResponse_FieldNumber) {
  DeviceCheckRpcResponse_FieldNumber_ResArray = 1,
};

/**
 * 返回方填写
 **/
@interface DeviceCheckRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<DeviceCheckResult*> *resArray;
/** The number of items in @c resArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger resArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)