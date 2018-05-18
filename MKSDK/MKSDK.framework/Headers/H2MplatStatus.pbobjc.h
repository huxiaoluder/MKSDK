// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: H2MPlatStatus.proto

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

#pragma mark - H2MPlatStatusH2MplatStatusRoot

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
@interface H2MPlatStatusH2MplatStatusRoot : GPBRootObject
@end

#pragma mark - H2MPlatStatusRpcRequest

typedef GPB_ENUM(H2MPlatStatusRpcRequest_FieldNumber) {
  H2MPlatStatusRpcRequest_FieldNumber_PlatStatus = 1,
};

/**
 * 请求方填写
 **/
@interface H2MPlatStatusRpcRequest : GPBMessage

/** 0：平台工作正常; 1, 正在连接平台; 2, 连接平台失败 */
@property(nonatomic, readwrite) uint32_t platStatus;

@end

#pragma mark - H2MPlatStatusRpcResponse

/**
 * 返回方填写
 **/
@interface H2MPlatStatusRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
