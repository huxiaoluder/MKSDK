// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EventRuleEdit.proto

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

@class iot_commExprInfo;
@class iot_commRhsInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - EventRuleEditEventRuleEditRoot

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
@interface EventRuleEditEventRuleEditRoot : GPBRootObject
@end

#pragma mark - EventRuleEditRpcRequest

typedef GPB_ENUM(EventRuleEditRpcRequest_FieldNumber) {
  EventRuleEditRpcRequest_FieldNumber_AccessToken = 1,
  EventRuleEditRpcRequest_FieldNumber_EtId = 11,
  EventRuleEditRpcRequest_FieldNumber_DeviceId = 20,
  EventRuleEditRpcRequest_FieldNumber_EtName = 21,
  EventRuleEditRpcRequest_FieldNumber_OnlyTime = 24,
  EventRuleEditRpcRequest_FieldNumber_Lhs = 25,
  EventRuleEditRpcRequest_FieldNumber_ExprsArray = 26,
  EventRuleEditRpcRequest_FieldNumber_RhsArray = 27,
  EventRuleEditRpcRequest_FieldNumber_IsEnd = 28,
};

/**
 * 请求方填写
 **/
@interface EventRuleEditRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** 编辑条件 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *etId;

/** 编辑内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *etName;

/**
 * int32 prio = 22;
 * int32 enable = 23;
 **/
@property(nonatomic, readwrite) int32_t onlyTime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *lhs;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<iot_commExprInfo*> *exprsArray;
/** The number of items in @c exprsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger exprsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<iot_commRhsInfo*> *rhsArray;
/** The number of items in @c rhsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger rhsArray_Count;

@property(nonatomic, readwrite) int32_t isEnd;

@end

#pragma mark - EventRuleEditRpcResponse

/**
 * 返回方填写
 **/
@interface EventRuleEditRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)