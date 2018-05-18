// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AppVerList.proto

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

@class AppVerListAppInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - AppVerListAppVerListRoot

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
@interface AppVerListAppVerListRoot : GPBRootObject
@end

#pragma mark - AppVerListAppInfo

typedef GPB_ENUM(AppVerListAppInfo_FieldNumber) {
  AppVerListAppInfo_FieldNumber_Review = 1,
  AppVerListAppInfo_FieldNumber_ReviewMark = 2,
  AppVerListAppInfo_FieldNumber_ReviewUid = 3,
  AppVerListAppInfo_FieldNumber_ReviewTime = 4,
  AppVerListAppInfo_FieldNumber_AppName = 7,
  AppVerListAppInfo_FieldNumber_Ver = 8,
  AppVerListAppInfo_FieldNumber_ChangeLog = 9,
  AppVerListAppInfo_FieldNumber_Md5 = 10,
  AppVerListAppInfo_FieldNumber_URL = 11,
  AppVerListAppInfo_FieldNumber_FileId = 12,
  AppVerListAppInfo_FieldNumber_IsLast = 13,
};

@interface AppVerListAppInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *appName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *ver;

@property(nonatomic, readwrite, copy, null_resettable) NSString *changeLog;

@property(nonatomic, readwrite, copy, null_resettable) NSString *md5;

@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fileId;

/** 0: 不是最新; 1: 是最新版本 */
@property(nonatomic, readwrite) int32_t isLast;

/** review: 0, 等待审核；1， 审核通过；2，审核拒绝 */
@property(nonatomic, readwrite) int32_t review;

@property(nonatomic, readwrite, copy, null_resettable) NSString *reviewMark;

@property(nonatomic, readwrite) uint32_t reviewUid;

@property(nonatomic, readwrite) uint32_t reviewTime;

@end

#pragma mark - AppVerListRpcRequest

typedef GPB_ENUM(AppVerListRpcRequest_FieldNumber) {
  AppVerListRpcRequest_FieldNumber_AccessToken = 1,
  AppVerListRpcRequest_FieldNumber_Page = 5,
  AppVerListRpcRequest_FieldNumber_PageSize = 6,
  AppVerListRpcRequest_FieldNumber_AppName = 10,
  AppVerListRpcRequest_FieldNumber_IsLast = 11,
};

/**
 * 请求方填写
 **/
@interface AppVerListRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * 分页信息
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

/** false; 可以为空 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *appName;

/**
 * 0: 返回所有符合条件的记录(历史和最新);
 * 1: 只返回符合条件的最新的记录.
 **/
@property(nonatomic, readwrite) int32_t isLast;

@end

#pragma mark - AppVerListRpcResponse

typedef GPB_ENUM(AppVerListRpcResponse_FieldNumber) {
  AppVerListRpcResponse_FieldNumber_Total = 11,
  AppVerListRpcResponse_FieldNumber_AppsArray = 12,
};

/**
 * 返回方填写
 **/
@interface AppVerListRpcResponse : GPBMessage

@property(nonatomic, readwrite) uint32_t total;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AppVerListAppInfo*> *appsArray;
/** The number of items in @c appsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger appsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
