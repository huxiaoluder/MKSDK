// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DelObject.proto

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

#pragma mark - DelObjectDelObjectRoot

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
@interface DelObjectDelObjectRoot : GPBRootObject
@end

#pragma mark - DelObjectRpcRequest

typedef GPB_ENUM(DelObjectRpcRequest_FieldNumber) {
  DelObjectRpcRequest_FieldNumber_AccessToken = 1,
  DelObjectRpcRequest_FieldNumber_FileId = 10,
};

/**
 * 请求方填写
 **/
@interface DelObjectRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** 文件ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *fileId;

@end

#pragma mark - DelObjectRpcResponse

typedef GPB_ENUM(DelObjectRpcResponse_FieldNumber) {
  DelObjectRpcResponse_FieldNumber_FileId = 10,
};

/**
 * 返回方填写
 **/
@interface DelObjectRpcResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fileId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)