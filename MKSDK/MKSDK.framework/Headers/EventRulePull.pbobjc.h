// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EventRulePull.proto

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

@class iot_commRuleInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - EventRulePullEventRulePullRoot

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
@interface EventRulePullEventRulePullRoot : GPBRootObject
@end

#pragma mark - EventRulePullRpcRequest

typedef GPB_ENUM(EventRulePullRpcRequest_FieldNumber) {
  EventRulePullRpcRequest_FieldNumber_DeviceId = 1,
  EventRulePullRpcRequest_FieldNumber_DeviceSeckey = 2,
  EventRulePullRpcRequest_FieldNumber_Page = 11,
  EventRulePullRpcRequest_FieldNumber_PageSize = 12,
  EventRulePullRpcRequest_FieldNumber_SyncFlag = 21,
};

/**
 * 请求方填写
 **/
@interface EventRulePullRpcRequest : GPBMessage

/** true; */
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

/**
 * 分页信息
 * page / page_size 都为0表示获取所有数据
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

@property(nonatomic, readwrite) int32_t syncFlag;

@end

#pragma mark - EventRulePullRpcResponse

typedef GPB_ENUM(EventRulePullRpcResponse_FieldNumber) {
  EventRulePullRpcResponse_FieldNumber_Total = 1,
  EventRulePullRpcResponse_FieldNumber_RulesArray = 11,
};

/**
 * 返回方填写
 **/
@interface EventRulePullRpcResponse : GPBMessage

@property(nonatomic, readwrite) uint32_t total;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<iot_commRuleInfo*> *rulesArray;
/** The number of items in @c rulesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger rulesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
