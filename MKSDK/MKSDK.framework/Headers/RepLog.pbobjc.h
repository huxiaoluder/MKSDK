// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RepLog.proto

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

#pragma mark - RepLogRepLogRoot

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
@interface RepLogRepLogRoot : GPBRootObject
@end

#pragma mark - RepLogRpcRequest

typedef GPB_ENUM(RepLogRpcRequest_FieldNumber) {
  RepLogRpcRequest_FieldNumber_AuthType = 1,
  RepLogRpcRequest_FieldNumber_DeviceId = 2,
  RepLogRpcRequest_FieldNumber_DeviceSeckey = 3,
  RepLogRpcRequest_FieldNumber_UserName = 4,
  RepLogRpcRequest_FieldNumber_UserPass = 5,
  RepLogRpcRequest_FieldNumber_Level = 6,
  RepLogRpcRequest_FieldNumber_ConnUserName = 7,
  RepLogRpcRequest_FieldNumber_ConnDeviceId = 8,
  RepLogRpcRequest_FieldNumber_Log = 9,
  RepLogRpcRequest_FieldNumber_CreateTime = 10,
};

/**
 * 请求方填写
 **/
@interface RepLogRpcRequest : GPBMessage

/** 1 为device；2 user */
@property(nonatomic, readwrite) int32_t authType;

/** auth_type = 1 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

/** auth_type = 2 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userPass;

/** 日志等级: 1 SDK初始化信息错误; 2 连接错误 */
@property(nonatomic, readwrite) int32_t level;

/** 连接错误时需要填写 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *connUserName;

/** 同上 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *connDeviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *log;

/** 产生日志时间 */
@property(nonatomic, readwrite) uint32_t createTime;

@end

#pragma mark - RepLogRpcResponse

/**
 * 返回方填写
 **/
@interface RepLogRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
