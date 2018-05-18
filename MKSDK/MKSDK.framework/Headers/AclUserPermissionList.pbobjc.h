// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AclUserPermissionList.proto

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

@class AclUserPermissionListPermission;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - AclUserPermissionListAclUserPermissionListRoot

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
@interface AclUserPermissionListAclUserPermissionListRoot : GPBRootObject
@end

#pragma mark - AclUserPermissionListPermission

typedef GPB_ENUM(AclUserPermissionListPermission_FieldNumber) {
  AclUserPermissionListPermission_FieldNumber_CmdId = 11,
  AclUserPermissionListPermission_FieldNumber_Method = 12,
};

@interface AclUserPermissionListPermission : GPBMessage

/** true; 命令ID */
@property(nonatomic, readwrite) uint64_t cmdId;

/** true; 命令接口名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *method;

@end

#pragma mark - AclUserPermissionListRpcRequest

typedef GPB_ENUM(AclUserPermissionListRpcRequest_FieldNumber) {
  AclUserPermissionListRpcRequest_FieldNumber_AccessToken = 1,
  AclUserPermissionListRpcRequest_FieldNumber_Page = 11,
  AclUserPermissionListRpcRequest_FieldNumber_PageSize = 12,
  AclUserPermissionListRpcRequest_FieldNumber_UserId = 15,
};

/**
 * 请求方填写
 **/
@interface AclUserPermissionListRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * 分页信息
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

/** 检索信息(获取该用户的授权信息) */
@property(nonatomic, readwrite) uint32_t userId;

@end

#pragma mark - AclUserPermissionListRpcResponse

typedef GPB_ENUM(AclUserPermissionListRpcResponse_FieldNumber) {
  AclUserPermissionListRpcResponse_FieldNumber_Total = 1,
  AclUserPermissionListRpcResponse_FieldNumber_PermsArray = 2,
};

/**
 * 返回方填写
 **/
@interface AclUserPermissionListRpcResponse : GPBMessage

@property(nonatomic, readwrite) uint64_t total;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AclUserPermissionListPermission*> *permsArray;
/** The number of items in @c permsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)