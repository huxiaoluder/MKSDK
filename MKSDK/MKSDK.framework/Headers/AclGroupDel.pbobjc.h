// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AclGroupDel.proto

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

#pragma mark - AclGroupDelAclGroupDelRoot

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
@interface AclGroupDelAclGroupDelRoot : GPBRootObject
@end

#pragma mark - AclGroupDelRpcRequest

typedef GPB_ENUM(AclGroupDelRpcRequest_FieldNumber) {
  AclGroupDelRpcRequest_FieldNumber_AccessToken = 1,
  AclGroupDelRpcRequest_FieldNumber_GroupId = 11,
  AclGroupDelRpcRequest_FieldNumber_GroupName = 12,
};

/**
 * 请求方填写
 **/
@interface AclGroupDelRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * true; 删除条件
 * group_id, group_name 必须设置至少一个条件
 **/
@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupName;

@end

#pragma mark - AclGroupDelRpcResponse

/**
 * 返回方填写
 **/
@interface AclGroupDelRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)