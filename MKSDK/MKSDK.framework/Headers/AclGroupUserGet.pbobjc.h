// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AclGroupUserGet.proto

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

#pragma mark - AclGroupUserGetAclGroupUserGetRoot

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
@interface AclGroupUserGetAclGroupUserGetRoot : GPBRootObject
@end

#pragma mark - AclGroupUserGetRpcRequest

typedef GPB_ENUM(AclGroupUserGetRpcRequest_FieldNumber) {
  AclGroupUserGetRpcRequest_FieldNumber_AccessToken = 1,
  AclGroupUserGetRpcRequest_FieldNumber_UserId = 10,
};

/**
 * 请求方填写
 **/
@interface AclGroupUserGetRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** 查找用户所属群组 */
@property(nonatomic, readwrite) uint32_t userId;

@end

#pragma mark - AclGroupUserGetRpcResponse

typedef GPB_ENUM(AclGroupUserGetRpcResponse_FieldNumber) {
  AclGroupUserGetRpcResponse_FieldNumber_GroupIdArray = 1,
};

/**
 * 返回方填写
 **/
@interface AclGroupUserGetRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *groupIdArray;
/** The number of items in @c groupIdArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupIdArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
