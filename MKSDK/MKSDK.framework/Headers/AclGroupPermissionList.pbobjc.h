// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AclGroupPermissionList.proto

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

@class AclGroupPermissionListPermission;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - AclGroupPermissionListAclGroupPermissionListRoot

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
@interface AclGroupPermissionListAclGroupPermissionListRoot : GPBRootObject
@end

#pragma mark - AclGroupPermissionListPermission

typedef GPB_ENUM(AclGroupPermissionListPermission_FieldNumber) {
  AclGroupPermissionListPermission_FieldNumber_GroupId = 10,
  AclGroupPermissionListPermission_FieldNumber_CmdId = 11,
  AclGroupPermissionListPermission_FieldNumber_Method = 12,
};

@interface AclGroupPermissionListPermission : GPBMessage

/** 组ID */
@property(nonatomic, readwrite) uint64_t groupId;

/** true; 命令ID */
@property(nonatomic, readwrite) uint64_t cmdId;

/** true; 命令接口名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *method;

@end

#pragma mark - AclGroupPermissionListRpcRequest

typedef GPB_ENUM(AclGroupPermissionListRpcRequest_FieldNumber) {
  AclGroupPermissionListRpcRequest_FieldNumber_AccessToken = 1,
  AclGroupPermissionListRpcRequest_FieldNumber_Page = 11,
  AclGroupPermissionListRpcRequest_FieldNumber_PageSize = 12,
  AclGroupPermissionListRpcRequest_FieldNumber_GroupId = 15,
};

/**
 * 请求方填写
 **/
@interface AclGroupPermissionListRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * 分页信息
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

/** 搜索条件(可以为空) */
@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - AclGroupPermissionListRpcResponse

typedef GPB_ENUM(AclGroupPermissionListRpcResponse_FieldNumber) {
  AclGroupPermissionListRpcResponse_FieldNumber_Total = 1,
  AclGroupPermissionListRpcResponse_FieldNumber_PermsArray = 2,
};

/**
 * 返回方填写
 **/
@interface AclGroupPermissionListRpcResponse : GPBMessage

@property(nonatomic, readwrite) uint64_t total;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AclGroupPermissionListPermission*> *permsArray;
/** The number of items in @c permsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
