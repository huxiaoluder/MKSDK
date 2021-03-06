// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EventRulePush.proto

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

#pragma mark - EventRulePushEventRulePushRoot

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
@interface EventRulePushEventRulePushRoot : GPBRootObject
@end

#pragma mark - EventRulePushRpcRequest

typedef GPB_ENUM(EventRulePushRpcRequest_FieldNumber) {
  EventRulePushRpcRequest_FieldNumber_DeviceId = 1,
  EventRulePushRpcRequest_FieldNumber_DeviceSeckey = 2,
  EventRulePushRpcRequest_FieldNumber_Flag = 11,
};

/**
 * 请求方填写
 **/
@interface EventRulePushRpcRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

/** 1 同步新的; 2 同步已经同步的; 3 同步所有 */
@property(nonatomic, readwrite) int32_t flag;

@end

#pragma mark - EventRulePushRpcResponse

/**
 * 返回方填写
 **/
@interface EventRulePushRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
