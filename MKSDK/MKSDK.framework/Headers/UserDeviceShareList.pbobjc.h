// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserDeviceShareList.proto

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

@class UserDeviceShareListShareInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - UserDeviceShareListUserDeviceShareListRoot

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
@interface UserDeviceShareListUserDeviceShareListRoot : GPBRootObject
@end

#pragma mark - UserDeviceShareListShareInfo

typedef GPB_ENUM(UserDeviceShareListShareInfo_FieldNumber) {
  UserDeviceShareListShareInfo_FieldNumber_UserId = 1,
  UserDeviceShareListShareInfo_FieldNumber_ShareUserId = 2,
  UserDeviceShareListShareInfo_FieldNumber_DeviceId = 3,
  UserDeviceShareListShareInfo_FieldNumber_DeviceName = 4,
  UserDeviceShareListShareInfo_FieldNumber_CreateTime = 5,
  UserDeviceShareListShareInfo_FieldNumber_ShareAclsArray = 6,
};

@interface UserDeviceShareListShareInfo : GPBMessage

@property(nonatomic, readwrite) uint32_t userId;

@property(nonatomic, readwrite) uint32_t shareUserId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceName;

@property(nonatomic, readwrite) uint32_t createTime;

/** 分享的权限 */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Array *shareAclsArray;
/** The number of items in @c shareAclsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger shareAclsArray_Count;

@end

#pragma mark - UserDeviceShareListRpcRequest

typedef GPB_ENUM(UserDeviceShareListRpcRequest_FieldNumber) {
  UserDeviceShareListRpcRequest_FieldNumber_AccessToken = 1,
  UserDeviceShareListRpcRequest_FieldNumber_Page = 11,
  UserDeviceShareListRpcRequest_FieldNumber_PageSize = 12,
  UserDeviceShareListRpcRequest_FieldNumber_ShareUserId = 21,
};

/**
 * 请求方填写
 **/
@interface UserDeviceShareListRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * 分页信息
 * page == 0 / page_size == 0 表示获取所有记录
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

/** 可以为空,表示获取所有的其它用户给我的,否则获取特定用户 */
@property(nonatomic, readwrite) uint32_t shareUserId;

@end

#pragma mark - UserDeviceShareListRpcResponse

typedef GPB_ENUM(UserDeviceShareListRpcResponse_FieldNumber) {
  UserDeviceShareListRpcResponse_FieldNumber_Total = 1,
  UserDeviceShareListRpcResponse_FieldNumber_SharesArray = 2,
};

/**
 * 返回方填写
 **/
@interface UserDeviceShareListRpcResponse : GPBMessage

@property(nonatomic, readwrite) uint32_t total;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserDeviceShareListShareInfo*> *sharesArray;
/** The number of items in @c sharesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger sharesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
